#include "../include/Dendrite.hpp"

namespace neuWillow
{
  Dendrite::Dendrite(unsigned long uniqueId)
  {
    _id = uniqueId;
  }

  Dendrite::~Dendrite()
  {

  }

  unsigned long Dendrite::getId() const
  {
    return _id;
  }

  std::shared_ptr<Dendrite> DendriteFactory::create()
  {
      unsigned long dendriteId = _idGenerator.generateId();
      std::shared_ptr<Dendrite> newDendrite = std::make_shared<Dendrite>(dendriteId);
      _createdDendrites[dendriteId] = newDendrite;
      return newDendrite;
  }    

  std::shared_ptr<Dendrite> DendriteFactory::find(unsigned long dendriteId)
  {
      auto it = _createdDendrites.find(dendriteId);
      if (it == _createdDendrites.end())
          return nullptr;
      return it->second;
  }

  bool DendriteFactory::destroy(unsigned long dendriteId)
  {
      auto it = _createdDendrites.find(dendriteId);
      if (it == _createdDendrites.end())
          return false;
      _createdDendrites.erase(it);
      return true;
  }
}