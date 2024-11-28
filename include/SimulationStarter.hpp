#ifndef _SIMSTARTER_H
#define _SIMSTARTER_H
#endif

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