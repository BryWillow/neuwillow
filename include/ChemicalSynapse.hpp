#ifndef _CHEMICAL_SYNAPSE_H
#define _CHEMICAL_SYNAPSE_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuWillow
{
  class ChemicalSynapse
  {
    public:
      ChemicalSynapse(unsigned long uniqueId);
      ~ChemicalSynapse();

      unsigned long getId() const;

    private:      
      unsigned long _id;
  };

  class ChemicalSynapseFactory
  {
    public:
      std::shared_ptr<ChemicalSynapse> create();
      std::shared_ptr<ChemicalSynapse> find(unsigned long synapseId);
      bool destroy(unsigned long synapseId);

    private:
      std::unordered_map< unsigned long, std::shared_ptr<ChemicalSynapse> > _createdSynapses;
      UniqueIdGenerator _idGenerator;
  };       
}

#endif