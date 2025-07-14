using NeuWillow.Neurons.Neurotransmitters;
using NeuWillow.Neurons.Synapses;
using NeuWillow.Neurons.Dendrites;

namespace NeuWillow.Tests;

public class SynapseTests
{
    [Fact]
    public void CreateSynapticVesicle()
    {
        List<Neurotransmitter> neurotransmitters = [Neurotransmitter.Gaba, Neurotransmitter.Glutamate];
        SynapticVesicle vesicle = new SynapticVesicle(neurotransmitters);

        Dendrite dendrite = new Dendrite();

        Assert.True(dendrite != null);
    }
}