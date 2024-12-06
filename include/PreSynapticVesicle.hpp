#ifndef _PRE_SYNAPTIC_VESICLE_H
#define _PRE_SYNAPTIC_VESICLE_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"
#include "Neurotransmitter.hpp"

namespace neuwillow
{
  class PreSynapticVesicle
  {
    public:
      PreSynapticVesicle(unsigned long uniqueId);
      ~PreSynapticVesicle();

      unsigned long getId() const;
      void addNeurotransmitter(Neurotransmitter* pNeurotransmitter);

    private:
      unsigned long _id;
  };

  class PreSynapticVesicleFactory
  {
    public:
      std::shared_ptr<PreSynapticVesicle> create();
      std::shared_ptr<PreSynapticVesicle> find(unsigned long preSynapticVesicleId);
      bool destroy(unsigned long preSynapticVesicleId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<PreSynapticVesicle> > _createdPreSynapticVesicles;
      UniqueIdGenerator _idGenerator;
  }; 
}

#endif