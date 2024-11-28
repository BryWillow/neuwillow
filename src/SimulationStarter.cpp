#include <iostream>
#include <memory>
#include "../include/SimulationStarter.hpp"
/*
#include "../include/ChemicalSynapse.hpp"
#include "../include/DendriteReceptor.hpp"
#include "../include/Dendrite.hpp"
#include "../include/Soma.hpp"
#include "../include/AxonHillock.hpp"
#include "../include/PreSynapticVesicle.hpp"
#include "../include/Axon.hpp"
*/
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
    // This factory is responsible for creating all the synapses used by this simulation.
    // The synapse it provides is retrievable by its id property, and is mutable.
    //ChemicalSynapseFactory chemicalSynapseFactory;

    // TODO: synapse config.
    // Genetic makeup => what neurotransmitters are released. This is constant.
    // TODO: how much voltage flows in when a neurotransmitter binds.
    //std::shared_ptr<ChemicalSynapse> chemicalSynapse = chemicalSynapseFactory.create();

    // construct the branches of the dendrite.
    //DendriteReceptorFactory dendriteReceptorFactory;
    // TODO: how many receptors per dendrite?
    //std::shared_ptr<DendriteReceptor> dendriteReceptor = dendriteReceptorFactory.create();

    // consume the neurotransmitters in the synapse, that were bundled in pre-synaptic neuron's
    // pre-synaptic vesicles.
    //DendriteFactory dendriteFactory;
    // TODO: how many dendrites per neuron?
    //std::shared_ptr<Dendrite> dendrite = dendriteFactory.create();

    // construct the neuron's nucleus, where the dendrites will be sending signals.
    // once polarized enough, the soma will fire an action potential.
    //SomaFactory somaFactory;
    // TODO: the polarization threshold.
    // 
    //std::shared_ptr<Soma> soma = somaFactory.create();

    // the axon hillock aids in the creation of the action potential.
    //AxonHillockFactory axonHillockFactory;
    //std::shared_ptr<AxonHillock> axonHillock = axonHillockFactory.create();

    // construct the axon, down which the action potential will flow.
    //AxonFactory axonFactory;
    //std::shared_ptr<Axon> axon = axonFactory.create();

    // construct the pre-synaptic vesicles where neurotransmitters will be housed
    // to pass along to the next neuron
    //PreSynapticVesicleFactory preSynapticVesicleFactory;
    //std::shared_ptr<PreSynapticVesicle> preSynapticVesicle = preSynapticVesicleFactory.create();

    // release the contents (neurotransmitters) into the synapse.
    //std::shared_ptr<ChemicalSynapse> postSynapse = chemicalSynapseFactory.create();

    // repeat this process repeats.
  }
}