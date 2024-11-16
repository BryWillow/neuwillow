#include "../include/Axon.hpp"

namespace neuWillow
{
  Axon::Axon(unsigned long uniqueId)
  {
    _id = uniqueId;
  }

  Axon::~Axon()
  {

  }

  unsigned long Axon::getId() const
  {
    return _id;
  }

  std::shared_ptr<Axon> AxonFactory::create()
  {
      unsigned long axonId = _idGenerator.generateId();
      std::shared_ptr<Axon> newAxon = std::make_shared<Axon>(axonId);
      _createdAxons[axonId] = newAxon;
      return newAxon;
  }    

  std::shared_ptr<Axon> AxonFactory::find(unsigned long axonId)
  {
      auto it = _createdAxons.find(axonId);
      if (it == _createdAxons.end())
          return nullptr;
      return it->second;
  }

  bool AxonFactory::destroy(unsigned long axonId)
  {
      auto it = _createdAxons.find(axonId);
      if (it == _createdAxons.end())
          return false;
      _createdAxons.erase(it);
      return true;
  }
}