using NeuWillow.Domain.CentralNervousSystem.Neurons.Dendrites.DendriticSpines;
using NeuWillow.Domain.CentralNervousSystem.Neurons.Neurotransmitters;
using NeuWillow.Domain.CentralNervousSystem.Neurons.Synapses;

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