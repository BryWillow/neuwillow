#pragma once

#include <string>

namespace neuWillow
{
  class SimulationStarter
  {
    public:
      SimulationStarter(const std::string& simulationName);
      ~SimulationStarter();

      void start();

    private:
      std::string _simlulationName;
  };
}