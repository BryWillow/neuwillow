#ifndef _DENDRITE_RECEPTOR_H
#define _DENDRITE_RECEPTOR_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuwillow
{
  namespace postsynapse
  {
    namespace dendrite
    {
      class DendriteReceptor
      {
        public:
          DendriteReceptor(uint32_t dendriteReceptorId)
          {
            _dendriteReceptorId = dendriteReceptorId;
          }

          uint32_t _dendriteReceptorId;
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
  }
}

#endif