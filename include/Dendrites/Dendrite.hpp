#ifndef DENDRITE_HPP
#define DENDRITE_HPP

#include <vector>
#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"
#include "DendriteReceptor.hpp"

namespace NeuWillow::Dendrites
{

  class Dendrite
  {
    public:
      Dendrite(
        uint64_t dendriteId, 
        std::vector<std::shared_ptr<DendriteReceptor> > receptors);
      ~Dendrite();

      uint64_t getDendriteId() const { return _dendriteId; }
      void addReceptor(DendriteReceptor receptor);
      bool killReceptor(uint64_t dendriteReceptorId);

    private:
      uint64_t _dendriteId;
      std::vector<std::shared_ptr<DendriteReceptorSite>> _receptors;
  };

  class DendriteFactory
  {
    public:
      std::shared_ptr<Dendrite> create();
      std::shared_ptr<Dendrite> find(uint64_t dendriteId);
      bool destroy(uint64_t dendriteId);

    private:
      std::unordered_map<uint64_t, std::shared_ptr<Dendrite> > _createdDendrites;
      DendriteReceptorFactory _dendriteReceptorFactory;
      UniqueIdGenerator _idGenerator;
  };
  
} // namespace Dendrites::NeuWillow

#endif