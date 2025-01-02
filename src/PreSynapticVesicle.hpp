#ifndef PRE_SYNAPTIC_VESICLE_HPP
#define PRE_SYNAPTIC_VESICLE_HPP

#include <unordered_map.h>
#include <memory.h>
#include "UniqueIdGenerator.hpp"
#include "Neurotransmitter.hpp"

namespace NeuWillow::Axons
{

  class PreSynapticVesicle
  {
    public:
      PreSynapticVesicle(uint64_t uniqueId);
      ~PreSynapticVesicle();
      uint64_t getId() const;
      void addNeurotransmitter(Neurotransmitter* pNeurotransmitter);

    private:
      uint64_t _id;
  };

  class PreSynapticVesicleFactory
  {
    public:
      std::shared_ptr<PreSynapticVesicle> create();
      std::shared_ptr<PreSynapticVesicle> find(uint64_t preSynapticVesicleId);
      bool destroy(uint64_t preSynapticVesicleId);

    private:
      std::unordered_map<uint64_t, std::shared_ptr<PreSynapticVesicle> > _createdPreSynapticVesicles;
      UniqueIdGenerator _idGenerator;
  };

} // namespace Axons::NeuWillow

#endif