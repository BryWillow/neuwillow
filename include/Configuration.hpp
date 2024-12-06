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
      //std::list<shared_ptr<Neuron>> getNeurons();
    private:
      void readConfigFile(std::string filePath);
      std::string _configFilePath;
  };
}

#endif