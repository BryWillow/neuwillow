#include "Axons/PreSynapticVesicle.hpp"

namespace NeuWillow::Axons
{
  PreSynapticVesicle::PreSynapticVesicle(uint64_t uniqueId)
  {
    _id = uniqueId;
  }

  PreSynapticVesicle::~PreSynapticVesicle()
  {

  }

  uint64_t PreSynapticVesicle::getId() const
  {
    return _id;
  }

  std::shared_ptr<PreSynapticVesicle> PreSynapticVesicleFactory::create()
  {
      uint64_t preSynapticVesicleId = _idGenerator.generateId();
      std::shared_ptr<PreSynapticVesicle> newPreSynapticVesicle = std::make_shared<PreSynapticVesicle>(preSynapticVesicleId);
      _createdPreSynapticVesicles[preSynapticVesicleId] = newPreSynapticVesicle;
      return newPreSynapticVesicle;
  }    

  std::shared_ptr<PreSynapticVesicle> PreSynapticVesicleFactory::find(uint64_t preSynapticVesicleId)
  {
      auto it = _createdPreSynapticVesicles.find(preSynapticVesicleId);
      if (it == _createdPreSynapticVesicles.end())
          return nullptr;
      return it->second;
  }

  bool PreSynapticVesicleFactory::destroy(uint64_t preSynapticVesicleId)
  {
      auto it = _createdPreSynapticVesicles.find(preSynapticVesicleId);
      if (it == _createdPreSynapticVesicles.end())
          return false;
      _createdPreSynapticVesicles.erase(it);
      return true;
  }

} // namespace Axons::NeuWillow