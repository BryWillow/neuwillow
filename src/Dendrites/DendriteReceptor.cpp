#include <memory>
#include "Dendrites/Dendrite.hpp"
#include "Dendrites/DendriteReceptor.hpp"

namespace NeuWillow::Dendrite
{
  DendriteReceptor::DendriteReceptor(uint32_t uniqueId)
  {
    _dendriteReceptorId = uniqueId;
  }

  DendriteReceptor::~DendriteReceptor()
  {

  }

  uint64_t DendriteReceptor::getId() const
  {
    return _id;
  }

  std::shared_ptr<DendriteReceptor> DendriteReceptorFactory::create()
  {
      uint64_t dendriteReceptorId = _idGenerator.generateId();
      std::shared_ptr<DendriteReceptor> newDendriteReceptor = 
        std::make_shared<DendriteReceptor>(dendriteReceptorId);
      _createdDendriteReceptors[dendriteReceptorId] = newDendriteReceptor;
      return newDendriteReceptor;
  }    

  std::shared_ptr<DendriteReceptor> DendriteReceptorFactory::find(uint64_t dendriteReceptorId)
  {
      auto it = _createdDendriteReceptors.find(dendriteReceptorId);
      if (it == _createdDendriteReceptors.end())
          return nullptr;
      return it->second;
  }

  bool DendriteReceptorFactory::destroy(uint64_t dendriteReceptorId)
  {
      auto it = _createdDendriteReceptors.find(dendriteReceptorId);
      if (it == _createdDendriteReceptors.end())
          return false;
      _createdDendriteReceptors.erase(it);
      return true;
  }

} // namespace Dendrites::NeuWillow