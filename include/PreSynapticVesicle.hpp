#pragma once

#include "Neurotransmitter.hpp"
#include <set>

namespace neuWillow
{
  /**
  * A pre-synaptic vesicle "owns" (see memory below), 
  * i.e., contains a unique collection of neurotransmitters
  * that will be distributed as part of the synapse.
  */

  class PreSynapticVesicle
  {
    private:   
      std::set<Neurotransmitter> m_Neurotransmitters;
      
    public:
      PreSynapticVesicle(const std::set<Neurotransmitter>& neurotransmitters)
        : m_Neurotransmitters(neurotransmitters)
      {
        
      }

      PreSynapticVesicle(std::set<Neurotransmitter>&& neurotransmitters)
        : m_Neurotransmitters(neurotransmitters)
      {

      }  
  };
}