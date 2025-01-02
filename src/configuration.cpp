#include <iostream.h>
#include <fstream.h>
#include "Configuration.hpp"

namespace neuwillow
{
  Configuration::Configuration(std::string configFilePath)
  {
    readConfigFile(configFilePath);
  }

  void Configuration::readConfigFile(std::string conifgFilePath)
  {
    std::ifstream configFile(conifgFilePath);
    std::string lineInFile;
    while(getline(configFile, lineInFile))
    {
      std::cout << lineInFile << std::endl;
    }
  }
}