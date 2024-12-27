#include <memory>
#include "../include/Dendrite.hpp"
#include "../include/DendriteReceptor.hpp"


namespace neuwillow
{
  namespace postsynapse
  {
    namespace dendrite
    {
      DendriteReceptor::DendriteReceptor(uint32_t uniqueId)
      {
        _dendriteReceptorId = uniqueId;
      }

      DendriteReceptor::~DendriteReceptor()
      {

      }

      uint32_t DendriteReceptor::getId() const
      {
        return _id;
      }

      std::shared_ptr<DendriteReceptor> DendriteReceptorFactory::create()
      {
          uint32_t dendriteReceptorId = _idGenerator.generateId();
          std::shared_ptr<DendriteReceptor> newDendriteReceptor = 
            std::make_shared<DendriteReceptor>(dendriteReceptorId);
          _createdDendriteReceptors[dendriteReceptorId] = newDendriteReceptor;
          return newDendriteReceptor;
      }    

      std::shared_ptr<DendriteReceptor> DendriteReceptorFactory::find(uint32_t dendriteReceptorId)
      {
          auto it = _createdDendriteReceptors.find(dendriteReceptorId);
          if (it == _createdDendriteReceptors.end())
              return nullptr;
          return it->second;
      }

      bool DendriteReceptorFactory::destroy(uint32_t dendriteReceptorId)
      {
          auto it = _createdDendriteReceptors.find(dendriteReceptorId);
          if (it == _createdDendriteReceptors.end())
              return false;
          _createdDendriteReceptors.erase(it);
          return true;
      }
    }
  } 
}