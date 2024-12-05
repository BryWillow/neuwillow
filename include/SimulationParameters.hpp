#ifndef _SIMULATION_PARAMETERS_HPP
#define _SIMULATION_PARAMETERS_HPP

#include "Neurotransmitter.hpp""

namespace neuWillow
{
  struct SimulationParameters
  {
    unsigned long DendriteReceptorCount = 0;
    unsigned long DendriteCount = 0;
    unsigned long NeuronCount = 0;
    Neurotransmitter PrimaryNeurotransmitter;
  };
}

#endif