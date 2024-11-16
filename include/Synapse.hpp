#pragma once

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuWillow
{
  class Synapse
  {
    public:
      Synapse(unsigned long uniqueId);
      ~Synapse();

      unsigned long getId() const;

    private:      
      unsigned long _id;
  };

  class SynapseFactory
  {
    public:
      std::shared_ptr<Synapse> create();
      std::shared_ptr<Synapse> find(unsigned long synapseId);
      bool destroy(unsigned long synapseId);

    private:
      std::unordered_map< unsigned long, std::shared_ptr<Synapse> > _createdSynapses;
      UniqueIdGenerator _idGenerator;
  };       
}