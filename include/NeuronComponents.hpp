#ifndef _NEURON_COMPONENTS_H
#define _NEURON_COMPONENTS_H

namespace neuWillow
{
  enum NeuronComponent
  {
    Invalid,
    PreSynapticNeuron,
    PreSynapticVesicle,
    ChemicalSynapse,
    DendriteReceptor,
    Dendrite,
    Soma,
    Axon,
    AxonHillock,
    AxonTerminal,
    Myelination,
    SynapticVesicle,
    IonChannel,
    ActionPotential,
    Neuron
  };
}

#endif