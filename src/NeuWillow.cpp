#include <iostream>
#include <string>
#include <memory>
#include "../include/Configuration.hpp"
#include "../include/Simulation.hpp"

void usage()
{
  std::cout << "Usage: NeuWillow [config_file]" << std::endl;
}

int main(int argc, char* argv[])
{
  if (argc < 2)
  {
    usage();
    return 0;
  }

  neuWillow::Simulation::start(argv[1]);

  return 0;
}