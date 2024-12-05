#include <iostream>
#include <string>
#include <memory>
#include "../include/Configuration.hpp"
#include "../include/Simulation.hpp"

void usage()
{
  std::cout << std::endl;
  std::cout << "Usage: NeuWillow [full_path_to_config_file]"  << std::endl;
  std::cout << " E.g.: ./NeuWillow ../configs/myconfig.ini"   << std::endl;
  std::cout << std::endl;
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