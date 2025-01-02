#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <string.h>
#include <memory.h>
#include <list.h>
#include "Neurotransmitter.hpp"
#include "Neuron.hpp"

namespace neuwillow
{
  class Configuration
  {
    public:
      Configuration(std::string configurationFile);

    private:
      void readConfigFile(std::string filePath);
      std::string _configFilePath;
  };

  struct PreSynapticNeuronParameters
  {
    unsigned long Synapse<
    unsigned long SynapseCount = 0;
  }

  struct SimulationParameters
  {
    unsigned long PreSynapticNeuronSynapseCount = 0;
    unsigned long DendriteReceptorCount = 0;
    unsigned long DendriteCount = 0;
    unsigned long NeuronCount = 0;
    //Neurotransmitter PrimaryNeurotransmitter;
  };
}

#endif