#include "Dendrite.hpp"

namespace neuwillow::Dendrite
{

  std::shared_ptr<Dendrite> DendriteFactory::create()
  {
      uint32_t dendriteId = _idGenerator.generateId();

      // Add a dendrite's receptors.
      // TODO: Read the dendrite receptor count from config.
      const int HARDCODED_RECEPTOR_COUNT = 10;
      std::vector< std::shared_ptr<DendriteReceptor> > receptors(HARDCODED_RECEPTOR_COUNT);
      for(int i = 0; i < HARDCODED_RECEPTOR_COUNT; i++)
      {
        receptors[i] = _dendriteReceptorFactory.create();
      }
      std::shared_ptr<Dendrite> newDendrite = std::make_shared<Dendrite>(dendriteId, receptors);
      _createdDendrites[dendriteId] = newDendrite;
      return newDendrite;
  }    

  std::shared_ptr<Dendrite> DendriteFactory::find(uint64_t dendriteId)
  {
      auto it = _createdDendrites.find(dendriteId);
      if (it == _createdDendrites.end())
          return nullptr;
      return it->second;
  }

  bool DendriteFactory::destroy(uint64_t dendriteId)
  {
      auto it = _createdDendrites.find(dendriteId);
      if (it == _createdDendrites.end())
          return false;
      _createdDendrites.erase(it);
      return true;
  }

} // namespace Dendrite::NeuWillow