#include "../include/AxonHillock.hpp"

namespace neuWillow
{
  AxonHillock::AxonHillock(unsigned long uniqueId)
  {
    _id = uniqueId;
  }

  AxonHillock::~AxonHillock()
  {

  }

  unsigned long AxonHillock::getId() const
  {
    return _id;
  }

  std::shared_ptr<AxonHillock> AxonHillockFactory::create()
  {
      unsigned long axonHillockId = _idGenerator.generateId();
      std::shared_ptr<AxonHillock> newAxon = std::make_shared<AxonHillock>(axonHillockId);
      _createdAxonHillocks[axonHillockId] = newAxon;
      return newAxon;
  }    

  std::shared_ptr<AxonHillock> AxonHillockFactory::find(unsigned long axonHillockId)
  {
      auto it = _createdAxonHillocks.find(axonHillockId);
      if (it == _createdAxonHillocks.end())
          return nullptr;
      return it->second;
  }

  bool AxonHillockFactory::destroy(unsigned long axonHillockId)
  {
      auto it = _createdAxonHillocks.find(axonHillockId);
      if (it == _createdAxonHillocks.end())
          return false;
      _createdAxonHillocks.erase(it);
      return true;
  }
}