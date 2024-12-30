#ifndef _SIMULATION_H
#define _SIMULATION_H

#include <string>
#include "NeuronComponents.hpp"

namespace neuwillow
{
  class Simulation
  {
    public:
      static bool start(const std::string& configurationFile);

      static void stop();

      
      static void recordEvent(
        const std::string& simulationEvent);

      /*
      static void recordEvent(
        const std::string& simulationEvent,
        NeuronComponent neuronComponent);

      static void recordResult(
        const std::string& simulationResult,
        NeuronComponent neuronComponent);

      static void recordError(
        const std::string& simulationError);

      static void recordError(
        const std::string& simulationError,
        NeuronComponent neuronComponent);       */ 
  };
}

#endif