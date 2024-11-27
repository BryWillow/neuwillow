#include <iostream>
#include <memory>
#include "../include/SimulationStarter.hpp"
#include "../include/ChemicalSynapse.hpp"
#include "../include/DendriteReceptor.hpp"
#include "../include/Dendrite.hpp"
#include "../include/Soma.hpp"
#include "../include/AxonHillock.hpp"
#include "../include/PreSynapticVesicle.hpp"
#include "../include/Axon.hpp"

namespace neuWillow
{
  SimulationStarter::SimulationStarter(const std::string& simulationName)
  {
    _simlulationName = simulationName;
  }

  SimulationStarter::~SimulationStarter()
  {
    
  }

  void SimulationStarter::start()
  {
    ChemicalSynapseFactory chemicalSynapseFactory;
    std::shared_ptr<ChemicalSynapse> chemicalSynapse = chemicalSynapseFactory.create();

    DendriteReceptorFactory dendriteReceptorFactory;
    std::shared_ptr<DendriteReceptor> dendriteReceptor = dendriteReceptorFactory.create();

    DendriteFactory dendriteFactory;
    std::shared_ptr<Dendrite> dendrite = dendriteFactory.create();

    SomaFactory somaFactory;
    std::shared_ptr<Soma> soma = somaFactory.create();

    AxonHillockFactory axonHillockFactory;
    std::shared_ptr<AxonHillock> axonHillock = axonHillockFactory.create();

    PreSynapticVesicleFactory preSynapticVesicleFactory;
    std::shared_ptr<PreSynapticVesicle> preSynapticVesicle = preSynapticVesicleFactory.create();

    AxonFactory axonFactory;
    std::shared_ptr<Axon> axon = axonFactory.create();
  }
}