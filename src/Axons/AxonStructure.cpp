#include "Axons/Axon.hpp"

namespace NeuWillow::Axons
{
  Axon::Axon(uint64_t uniqueId)
  {
    _id = uniqueId;
  }

  Axon::~Axon()
  {

  }
  
  uint64_t Axon::getId() const
  {
    return _id;
  }

  std::shared_ptr<Axon> AxonFactory::create()
  {
      uint64_t axonId = _idGenerator.generateId();
      std::shared_ptr<Axon> newAxon = std::make_shared<Axon>(axonId);
      _createdAxons[axonId] = newAxon;

      //ObjectCache<std::shared_ptr<Axon> > axonCache;
      //std::shared_ptr<Axon> a = axonCache.find(axonId);

      return newAxon;
  }    

  std::shared_ptr<Axon> AxonFactory::find(uint64_t axonId)
  {
      auto it = _createdAxons.find(axonId);
      if (it == _createdAxons.end())
          return nullptr;
      return it->second;
  }

  bool AxonFactory::destroy(uint64_t axonId)
  {
      auto it = _createdAxons.find(axonId);
      if (it == _createdAxons.end())
          return false;
      _createdAxons.erase(it);
      return true;
  }
} // namespace Axons::NeuWillow