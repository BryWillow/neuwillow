using NeuWillow.Common;
using NeuWillow.Neurons.Dendrites.DendriteReceptors;
using NeuWillow.Neurons.Dendrites.DendriticSpines;
using NeuWillow.Neurons.Neurotransmitters;

namespace NeuWillow.Neurons.Dendrites;

public class Dendrite
{
    const int DefaultNumberOfSpines = 10000;
    int _numberOfSpines;

    public Dendrite(int numberOfSpines = DefaultNumberOfSpines)
    {
        _numberOfSpines = numberOfSpines;
    }

    private List<IDendriteReceptor> _receptorSites = [];
    private List<DendriticSpine> _spines = [];

    public int DendriteId { get; private set; }
    public IReadOnlyList<DendriticSpine> Spines => _spines;
    public IReadOnlyList<IDendriteReceptor> ReceptorSites => _receptorSites;

    /// <summary>
    /// Dendrites grow new receptor sites. This is part of the neuroplasticity process. 
    /// </summary>
    public void AddReceptorSite(IDendriteReceptor receptorSite)
    {
        receptorSite.ThrowIfArgumentNull(nameof(receptorSite));
        _receptorSites.Add(receptorSite);
    }

    /// <summary>
    /// Dendrites can grow new spines through a process called spinogenesis.
    /// </summary>
    public void AddSpine(DendriticSpine spine)
    {
        spine.ThrowIfArgumentNull(nameof(spine));
        _spines.Add(spine);
    }

    /// <summary>
    /// Receptors on the dendrite's shaft process primarily inhibitory neurotransmitters.
    /// Receptors on the dendrite's spines process primarily excitatory neurotransmitters.
    /// Of course, this is nuanced behavior.
    /// </summary>
    /// <param name="neuroTransmitter"></param>
    public void Process(Neurotransmitter neuroTransmitter)
    {
        // TODO: If excitatory should we pass it a spine for processing?
        //       I.e., should all communication with presynaptic neurons funnel through
        //       the dendrite, or should we expose a denrdite's spines?
        //       Do we need a different design?
    }
}