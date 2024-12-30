#ifndef DENDRITE_RECEPTOR_HPP
#define DENDRITE_RECEPTOR_HPP

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace NeuWillow::Dendrites
{

  class DendriteReceptorSite
  {
    public:
      DendriteReceptorSite(uint64_t uniqueId);
      ~DendriteReceptorSite();
      uint64_t getId() const { return _id; }

    private:
      uint64_t _id;
  };

  class DendriteReceptor
  {
    public:
      DendriteReceptor(uint64_t dendriteReceptorId)

    private:
      uint64_t _dendriteReceptorId;
  };

  class DendriteReceptorFactory
  {
    public:
      std::shared_ptr<DendriteReceptor> create();
      std::shared_ptr<DendriteReceptor> find(uint64_t dendriteId);
      bool destroy(uint64_t dendriteId);

    private:
      std::unordered_map<uint64_t, std::shared_ptr<DendriteReceptor> > _createdDendriteReceptors;
      UniqueIdGenerator _idGenerator;
  };

} // namespace Dendrites::NeuWillow

#endif