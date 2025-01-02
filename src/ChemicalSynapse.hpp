#ifndef _CHEMICAL_SYNAPSE_H
#define _CHEMICAL_SYNAPSE_H

#include <unordered_map.h>
#include <memory.h>
#include "UniqueIdGenerator.hpp"

namespace neuwillow
{
  class ChemicalSynapse
  {
    public:
      ChemicalSynapse(uint64_t uniqueId);
      ~ChemicalSynapse();

      uint64_t getId() const;

    private:      
      uint64_t _id;
  };

  class ChemicalSynapseFactory
  {
    public:
      std::shared_ptr<ChemicalSynapse> create();
      std::shared_ptr<ChemicalSynapse> find(uint64_t synapseId);
      bool destroy(uint64_t synapseId);

    private:
      std::unordered_map< uint64_t, std::shared_ptr<ChemicalSynapse> > _createdSynapses;
      UniqueIdGenerator _idGenerator;
  };       
}

#endif