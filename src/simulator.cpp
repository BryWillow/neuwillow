#include "../include/Simulation.hpp"

#define SPDLOG_ACTIVE_LEVEL SPDLOG_LEVEL_INFO // All DEBUG/TRACE statements will be removed by the pre-processor
#include "spdlog/spdlog.h"
int main()
{

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