#pragma once

#include <vector>
#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"
#include "DendriteReceptor.hpp"

namespace neuWillow
{
  class Dendrite
  {
    public:
      Dendrite(
        unsigned long dendriteId, 
        std::vector<std::shared_ptr<DendriteReceptor> > receptors);
      ~Dendrite();

      unsigned long getDendriteId() const;

    private:
      unsigned long _dendriteId;
  };

  class DendriteFactory
  {
    public:
      std::shared_ptr<Dendrite> create();
      std::shared_ptr<Dendrite> find(unsigned long dendriteId);
      bool destroy(unsigned long dendriteId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<Dendrite> > _createdDendrites;
      DendriteReceptorFactory _dendriteReceptorFactory;
      UniqueIdGenerator _idGenerator;
  }; 
}