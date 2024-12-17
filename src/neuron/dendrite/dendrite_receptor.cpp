#include "../include/DendriteReceptor.hpp"

namespace neuwillow
{
  DendriteReceptor::DendriteReceptor(unsigned long uniqueId)
  {
    _id = uniqueId;
  }

  DendriteReceptor::~DendriteReceptor()
  {

  }

  unsigned long DendriteReceptor::getId() const
  {
    return _id;
  }

  std::shared_ptr<DendriteReceptor> DendriteReceptorFactory::create()
  {
      unsigned long dendriteReceptorId = _idGenerator.generateId();
      std::shared_ptr<DendriteReceptor> newDendriteReceptor = std::make_shared<DendriteReceptor>(dendriteReceptorId);
      _createdDendriteReceptors[dendriteReceptorId] = newDendriteReceptor;
      return newDendriteReceptor;
  }    

  std::shared_ptr<DendriteReceptor> DendriteReceptorFactory::find(unsigned long dendriteReceptorId)
  {
      auto it = _createdDendriteReceptors.find(dendriteReceptorId);
      if (it == _createdDendriteReceptors.end())
          return nullptr;
      return it->second;
  }

  bool DendriteReceptorFactory::destroy(unsigned long dendriteReceptorId)
  {
      auto it = _createdDendriteReceptors.find(dendriteReceptorId);
      if (it == _createdDendriteReceptors.end())
          return false;
      _createdDendriteReceptors.erase(it);
      return true;
  }
}