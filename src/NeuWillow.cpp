#include <iostream>
#include <string>
#include <memory>
#include "../include/SimulationStarter.hpp"

int main(int argc, char* argv[])
{
  neuWillow::SimulationStarter* pSimulationStarter = new neuWillow::SimulationStarter("OneNeuron");

  return 0;
}