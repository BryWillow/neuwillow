#pragma once

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuWillow
{
  class Dendrite
  {
    public:
      Dendrite(unsigned long uniqueId);
      ~Dendrite();

      unsigned long getId() const;

    private:
      unsigned long _id;
  };

  class DendriteFactory
  {
    public:
      std::shared_ptr<Dendrite> create();
      std::shared_ptr<Dendrite> find(unsigned long dendriteId);
      bool destroy(unsigned long dendriteId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<Dendrite> > _createdDendrites;
      UniqueIdGenerator _idGenerator;
  }; 
}