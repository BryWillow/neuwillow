// See https://aka.ms/new-console-template for more information

// Start with a single neuron, and attempt to create an action potential.
using NeuWillow.Neurons.Dendrites;
using NeuWillow.Neurons.Dendrites.DendriteIonChannels;
using NeuWillow.Neurons.Dendrites.DendriticSpines;
using NeuWillow.Neurons.NeuronTypes;
using NeuWillow.Neurons.Neurotransmitters;

// This number, of course, can be different per dendrite.
const int NumberOfDendriteSpines = 10000;
const int NumberOfDenrditeSpineReceptors = 10000;

// Receptors on the dendrite spine are generally, excitatory,
// so to keep things simple, we'll provide the spine with excitatory receptors.
List<Neurotransmitter> DendriteSpineExcitatoryReceptors =
  [Neurotransmitter.Glutamate, Neurotransmitter.Acetylcholine, Neurotransmitter.Histamine];

// Step 1: Create all of the neuron's dendrites
const int NumberOfDendrites = 10000;
List<Dendrite> dendrites = new(NumberOfDendrites);
for (int i = 0; i < NumberOfDendrites; i++)
{
  // Step 1a: Create each dendrite's spines  
  List<DendriticSpine> dendriteSpines = new(NumberOfDendriteSpines);
  for (int j = 0; j < NumberOfDendriteSpines; j++)
  {
    for (int k = 0; k < NumberOfDenrditeSpineReceptors; k++)
    {

    }

    List<IDendriteIonChannel> ionChannels = [];
    DendriticSpine dendriticSpine = new(ionChannels);
  }

  Dendrite dendrite = new Dendrite(NumberOfDendriteSpines);
  dendrites.Add(dendrite);
}


MultipolarNeuron neuron = new();

Console.WriteLine("Hello, World!");
