using NeuWillow.Neurons.Synapses;
using UnitsNet;

namespace NeuWillow.Neurons.Dendrites.DendriticSpines;

public class DendriteSpineHead(Synapse synapse, Length initialDiameter, Volume initialVolume)
{
    private Synapse _synapse = synapse;
    private Length _diameter = initialDiameter;
    private Volume _volume = initialVolume;

    public Synapse Synapse => _synapse;
    public Length Diameter => _diameter;
    public Volume Volume => _volume;
}