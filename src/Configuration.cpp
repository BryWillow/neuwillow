#include <iostream>
#include <fstream>

#include "../include/Configuration.hpp"

namespace neuWillow
{
  Configuration::Configuration(std::string configFilePath)
  {
    std::cout << "Config file path: " << std::system("pwd") << std::endl;
    //_configFilePath = configFilePath;
    readConfigFile(configFilePath);
  }

  void Configuration::readConfigFile(std::string conifgFilePath)
  {
    //std::cout <<  "Reading file...";

    std::ifstream configFile(conifgFilePath);
    //TODO: assert
    std::string lineInFile;
    while(getline(configFile, lineInFile))
    {
      std::cout << lineInFile << std::endl;
    }
  }
}