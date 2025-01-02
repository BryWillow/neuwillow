//#include <iostream>
//#include <cstdint>
//#include "UniqueIdGenerator.hpp"
#include <string.h>
#include "Simulation.hpp"
//#include "Axons/Axon.hpp"
//#include "Axons/AxonHillock.hpp"
//#include "Axons/AxonTerminal.hpp"
//#include "Axons/PreSynapticVesicle.hpp"

int main()
{
  // For some reason clang is not using the right version C++ system headers.
  // All system headers require .h, e.g., <string.h>.
  //
  // No include files can be found in subdirectories, even after changing
  // tasks.json every different way.
  //
  // We are using the latest version of clang:
  // /usr/bin/clang++ --version : Apple Clang v16.0.0
  // The latest version of Mac's xcode-command-line-tools is installed.
  // The latest version of the MacOS is installed.
  // VSCode is picking the right compiler, but the compiler is using the wrong system header files???

  // None of the include paths work either
  // unordered_map is here: we must not be using 15.2
  // we're using v23 of C++
  // we're using v16 of Clang: /usr/local/bin/clang++ --version returns:
  //

  ///Library/Developer/CommandLineTools/SDKs/MacOSX15.2.sdk/usr/include/c++/v1/
  std::cout << "Starting..." << std::endl;
   neuwillow::Dendrites::DendriteReceptor* d = new neuwillow::Dendrites::DendriteReceptor(100);
}

namespace neuwillow
{
  bool Simulation::start(const std::string& configurationFile)
  {
    //spdlog::log << "Simulation starting...";

    Neu
    return true;
  }

  //void Simulation::stop()
  {

  }

//  void Simulation::recordEvent(
//    const std::string& simulationEvent)
  {

  }
} 