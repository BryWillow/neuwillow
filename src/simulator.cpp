#include <iostream>
#include "UniqueIdGenerator.hpp"
#include "Dendrite/DendriteReceptor.hpp"
#include "Simulation.hpp"
 
int main()
{
  std::cout << "Starting..." << std::endl;
  neuwillow::postsynapse::dendrite::DendriteReceptor d(100);
}

namespace neuwillow
{
  bool Simulation::start(const std::string& configurationFile)
  {
    //spdlog::log << "Simulation starting...";
    return true;
  }

  void Simulation::stop()
  {

  }

  void Simulation::recordEvent(
    const std::string& simulationEvent)
  {

  }
}