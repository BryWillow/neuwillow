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

    public decimal VolumeMicrons { get; private set; }

    public void Process(Neurotransmitter neurotransmitter)
    {
        neurotransmitter.ThrowIfArgumentNull(nameof(neurotransmitter));
    }

    private void AdjustVolume(Neurotransmitter neurotransmitter)
    {
        // RESEARCH: Dendrite spines grow and shrink dynamically based on several factors including: 
        //           (1) the "strength" of the synapse, i.e., how many neurotransmitters it is binding to.
        //           (2) if it has a TrkB receptor, then BDNF can flow inside and impact the entire dendrite.
        //           (3) the length of the dendrite.
        //
        // NOTES:    (1) This information is related is related to neuroplasticity, and heavily being researchced.
        //           (2) Dendrite spines with TrkB receptors are not isolated to specific regions in the brain.
        //           (3) I don't believe (but could be wrong) we know why some spines have TrkB receptors and some don't.
        //
    }

    /// <summary>
    /// Limits diffusion?
    /// </summary>
    public decimal SpineNeckNarrowing { get; set; }
}