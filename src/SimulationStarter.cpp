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
    UniqueIdGenerator synapseIdGenerator;
    unsigned long synapseId = synapseIdGenerator.generateId();
    Synapse synapse(synapseId);

    UniqueIdGenerator dendriteIdGenerator;
    unsigned long dendriteId = dendriteIdGenerator.generateId();
    Dendrite dendrite(dendriteId);
  }
}