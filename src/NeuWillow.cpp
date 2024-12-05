#include <iostream>
#include "../include/Configuration.hpp"
#include "../include/Simulation.hpp"

std::string checkUsageOrExit(int argc, char* argv[])
{
  constexpr int expectedParamCount = 2;
  if (argc != 2)
  {
    std::cout << std::endl << "Usage: NeuWillow [Full Path to Config File]" << std::endl;
    std::cout << " E.g.: ./NeuWillow ../configs/myconfig.ini"   << std::endl << std::endl;
    std::cout << "Error: Expected " << expectedParamCount << " parameters, but received " << argc << std::endl;
    std::cout << std:: endl;
    exit(0);
  }

  std::string configFile = argv[1];
  return configFile;
}

int main(int argc, char* argv[])
{
  std::string configFile = checkUsageOrExit(argc, argv);
  neuWillow::Simulation::start(configFile);
}