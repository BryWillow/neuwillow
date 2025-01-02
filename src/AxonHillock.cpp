#include "AxonHillock.hpp"

namespace neuwillow::Axons
{
  AxonHillock::AxonHillock(uint64_t uniqueId)
  {
    _id = uniqueId;
  }

  AxonHillock::~AxonHillock()
  {

  }

  uint64_t AxonHillock::getId() const
  {
    return _id;
  }

  std::shared_ptr<AxonHillock> AxonHillockFactory::create()
  {
      uint64_t axonHillockId = _idGenerator.generateId();
      std::shared_ptr<AxonHillock> newAxon = std::make_shared<AxonHillock>(axonHillockId);
      _createdAxonHillocks[axonHillockId] = newAxon;
      return newAxon;
  }    

  std::shared_ptr<AxonHillock> AxonHillockFactory::find(uint64_t axonHillockId)
  {
      auto it = _createdAxonHillocks.find(axonHillockId);
      if (it == _createdAxonHillocks.end())
          return nullptr;
      return it->second;
  }

  bool AxonHillockFactory::destroy(uint64_t axonHillockId)
  {
      auto it = _createdAxonHillocks.find(axonHillockId);
      if (it == _createdAxonHillocks.end())
          return false;
      _createdAxonHillocks.erase(it);
      return true;
  }
} // namespace Axons::NeuWillow