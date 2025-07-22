using NeuWillow.Neurons.Synapses;

namespace NeuWillow.Neurons.Dendrites.DendriticSpines;

public class DendriteSpineHead(Synapse synapse, decimal initialDiameter, decimal initialVolume)
{
    private Synapse _synapse = synapse;
    private decimal _diameter = initialDiameter;
    private decimal _volume = initialVolume;

    /// <summary>
    /// The synapse with the pre-synaptic neuron.
    /// </summary>
    public Synapse Synapse => _synapse;
    public decimal Diameter => _diameter;
    public decimal Volume => _volume;
}