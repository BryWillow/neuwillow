#ifndef _DENDRITE_RECEPTOR_H
#define _DENDRITE_RECEPTOR_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuWillow
{
  class DendriteReceptor
  {
    public:
      DendriteReceptor(unsigned long uniqueId);
      ~DendriteReceptor();

      unsigned long getId() const;

    private:
      unsigned long _id;
  };

  class DendriteReceptorFactory
  {
    public:
      std::shared_ptr<DendriteReceptor> create();
      std::shared_ptr<DendriteReceptor> find(unsigned long dendriteId);
      bool destroy(unsigned long dendriteId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<DendriteReceptor> > _createdDendriteReceptors;
      UniqueIdGenerator _idGenerator;
  }; 
}

#endif