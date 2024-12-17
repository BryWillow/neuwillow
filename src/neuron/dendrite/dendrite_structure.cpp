#include "../include/Dendrite.hpp"

namespace neuwillow
{
  namespace postsynapse
  {
    namespace dendrite
    {
      Dendrite::Dendrite(
        unsigned long dendriteId, 
        std::vector<std::shared_ptr<DendriteReceptor> > dendriteReceptors)
      {
        _dendriteId = dendriteId;
      }

      Dendrite::~Dendrite()
      {

      }

      std::shared_ptr<Dendrite> DendriteFactory::create()
      {
          unsigned long dendriteId = _idGenerator.generateId();

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

    } // namespace dendrite
  } // namespace postsynaptic
} // namespace neuwillow