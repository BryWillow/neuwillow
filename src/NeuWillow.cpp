#include <iostream>
#include "../include/SimulationStarter.hpp"

int main()
{
  std::cout << "Simulation starting..." << sdt::endl;

  neuWillow::SimulationStarter simulationStarter;
  simulationStarter.start();

  std::cout << "Simulation ended." << std::endl;
  return 0;
}