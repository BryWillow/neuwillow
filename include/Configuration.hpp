#ifndef _CONFIGURATION_H
#define _CONFIGURATION_H

#include <string>
#include <memory>
#include <list>
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

  struct SimulationParameters
  {
    unsigned long DendriteReceptorCount = 0;
    unsigned long DendriteCount = 0;
    unsigned long NeuronCount = 0;
    Neurotransmitter PrimaryNeurotransmitter;
  };
}

#endif