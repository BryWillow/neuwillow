#include "../include/PreSynapticVesicle.hpp"

namespace neuWillow
{
  PreSynapticVesicle::PreSynapticVesicle(unsigned long uniqueId)
  {
    _id = uniqueId;
  }

  PreSynapticVesicle::~PreSynapticVesicle()
  {

  }

  unsigned long PreSynapticVesicle::getId() const
  {
    return _id;
  }

  std::shared_ptr<PreSynapticVesicle> PreSynapticVesicleFactory::create()
  {
      unsigned long preSynapticVesicleId = _idGenerator.generateId();
      std::shared_ptr<PreSynapticVesicle> newPreSynapticVesicle = std::make_shared<PreSynapticVesicle>(preSynapticVesicleId);
      _createdPreSynapticVesicles[preSynapticVesicleId] = newPreSynapticVesicle;
      return newPreSynapticVesicle;
  }    

  std::shared_ptr<PreSynapticVesicle> PreSynapticVesicleFactory::find(unsigned long preSynapticVesicleId)
  {
      auto it = _createdPreSynapticVesicles.find(preSynapticVesicleId);
      if (it == _createdPreSynapticVesicles.end())
          return nullptr;
      return it->second;
  }

  bool PreSynapticVesicleFactory::destroy(unsigned long preSynapticVesicleId)
  {
      auto it = _createdPreSynapticVesicles.find(preSynapticVesicleId);
      if (it == _createdPreSynapticVesicles.end())
          return false;
      _createdPreSynapticVesicles.erase(it);
      return true;
  }
}