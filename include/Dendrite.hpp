#pragma once

#include <memory>
#include "include/DendriticReceptor.hpp"
#include "include/NeuroTransmitter.hpp"
#include "include/Neuron.hpp"
#include "include/Synapse.hpp"

namespace neuWillow
{
  struct DendriteProcessedEventArgs
  {
    unique_ptr<Neuron> PreSynapticNeuron;    
    unique_ptr<Synapse> Synapse;
    set<unique_ptr<DendriticReceptor>> Receptors;
    set<unique_ptr<Neurotransmitter>> NeurotransmittersReceived;
    unique_ptr<Dendrite> Trigger;
    int LigandGatedIonChannelsOpen;
    long VoltageInside;
    long VoltageOutside;
    long CalciumOutside;
  };
  
  class Dendrite
  {
    public:
      Dendrite(long uniqueId);
      ~Dendrite();
      
      long getUniqueId() const { return m_uniqueId; }

      /// @brief 
      /// The same dendrite will repeatedly receive new bundles of neurotransmitters.
      /// That is why we can't take a vector of neurotransmitters in the ctor.
      /// @param neurotransmitters 
      void processNeurotransmitters(std::vector<Neurotransmitter> neurotransmitters);

    private: 
      void dispatchSignal();

    private:
      long m_uniqueId;
      std::vector<Neurotransmitter> m_Neurotransmitters;
  };
} // namespace neuWillow