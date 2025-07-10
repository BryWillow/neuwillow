using NeuWillow.Common;
using NeuWillow.Domain.CentralNervousSystem.Neurons.Neurotransmitters;
using NeuWillow.Domain.Neurons.Dendrites;

namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Dendrites.DendriticSpines;

/// <summary>
/// Important facts:
/// Dendritic spines receive primarily excitatory inupt.
/// Dendritic spines receive 2-4% of GABA.
/// 
/// A single neuron (multipolar) can have between 1-1000+ dendrites.
/// Each of these dendrites can have 1-1000+ dendritic spines.
/// A dendritic spine serves as the primary binding source for 
/// neurotransmitters. There are other binding sources, not to be covered here.
/// </summary>
public class DendriticSpine
{
    public DendriticSpine(IEnumerable<IDendriteIonChannel> ionChannels)
    {
        IonChannels = ionChannels.ThrowIfArgumentNull(nameof(ionChannels));
    }

    public IEnumerable<IDendriteIonChannel> IonChannels { get; private set; }

    public void Process(Neurotransmitter neurotransmitter)
    {
        neurotransmitter.ThrowIfArgumentNull(nameof(neurotransmitter));
    }

    /// <summary>
    /// Limits diffusion?
    /// </summary>
    public decimal SpineNeckNarrowing { get; set; }
}