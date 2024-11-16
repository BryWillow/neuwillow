#include <iostream>
#include <string>
#include <memory>
#include "../include/SimulationStarter.hpp"
#include "../include/Axon.hpp"

using namespace neuWillow;

int main()
{
  SimulationStarter* pSimulationStarter = new SimulationStarter("OneNeuron");

  return 0;
}