#include <iostream>
#include <sstream>
#include <filesystem>
#include "../include/Configuration.hpp"
#include "../include/Simulation.hpp"

std::string checkUsageOrExit(int argc, char* argv[])
{
  const std::string baseErrorMessage = "usage: NeuWillow <config_file_path>";

  if (argc == 1)
  {
    std::cout << baseErrorMessage << std::endl;
    std::cout << "   error: no config file specified.\n";
    exit(1);
  }

  if (argc > 2)
  {
    std::cout << baseErrorMessage << std::endl;
    std::cout << "   error: too many arguments specified.\n";
    exit(0);
  }

  std::string configFile = argv[1];
  bool fileExists = std::filesystem::exists(configFile);
  if (!fileExists)
  {
    std::cout << baseErrorMessage << std::endl;
    std::cout << "   error: config file does not exist.\n";
    exit(0);
  }

  return configFile;
}

int main(int argc, char* argv[])
{
  std::string configFile = checkUsageOrExit(argc, argv);
  neuWillow::Simulation::start(configFile);
}