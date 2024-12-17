#include <iostream>
#include <sstream>
#include <filesystem>

#include "../include/Configuration.hpp"
#include "../include/Simulation.hpp"

bool validateCommandLine(int argc, char* argv[], std::string& configFilePath)
{
  const std::string baseErrorMessage = "usage: neuwillow <config_file_path>";

  if (argc == 1)
  {
    std::cout << baseErrorMessage << std::endl;
    std::cout << "   error: no config file specified.\n";
    return false;
  }

  if (argc > 2)
  {
    std::cout << baseErrorMessage << std::endl;
    std::cout << "   error: too many arguments specified.\n";
    return false;
  }

  std::string configFile = argv[1];
  bool fileExists = std::filesystem::exists(configFile);
  if (!fileExists)
  {
    std::cout << baseErrorMessage << std::endl;
    std::cout << "   error: config file not found.\n";
    return false;
  }

  configFilePath = configFile;
  return true;
}

int main(int argc, char* argv[])
{
  std::string configFilePath;
  if (!validateCommandLine(argc, argv, configFilePath))
    exit(0);
  neuwillow::Simulation::start(configFilePath);
}