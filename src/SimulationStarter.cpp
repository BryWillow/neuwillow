#pragma once

#include "../include/SimulationStarter.hpp"
#include "../include/UniqueIdGenerator.hpp"
#include "../include/Synapse.hpp"
#include "../include/Dendrite.hpp"

namespace neuWillow
{
  SimulationStarter::SimulationStarter()
  {
    
  }

  SimulationStarter::~SimulationStarter()
  {

  }

  void SimulationStarter::start()
  {
    // Start simple: Create one of every component.
    
    UniqueIdGenerator synapseIdGenerator;
    unsigned long synapseId = synapseIdGenerator.generateId();
    Synapse synapse(synapseId);

    UniqueIdGenerator dendriteIdGenerator;
    unsigned long dendriteId = dendriteIdGenerator.generateId();
    Dendrite dendrite(dendriteId);

    UniqueIdGenerator dendriticReceptorIdGenerator;
    unsigned long dendriticReceptorId = dendriticReceptorIdGenerator.generateId();
    DendriticReceptor dendriticReceptor(dendriticReceptorId);

    UniqueIdGenerator somaIdGenerator;
    unsigned long somaId = somaIdGenerator.generateId();
    Soma soma(somaId);

    UniqueIdGenerator axonHillockIdGenerator;
    unsigned long axonHillockId = axonHillockIdGenerator.generateId();
    AxonHillock axonHillock(axonHillockId);
  }
}