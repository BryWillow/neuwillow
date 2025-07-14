using NeuWillow.Neurons.Neurotransmitters;
using NeuWillow.Neurons.Proteins;

namespace NeuWillow.Neurons.Synapses;

/// <summary>
/// A "sac-like" structure that contains neurotransmitters to be released.
/// The neurotransmitters inside each vesicle are the result of the preceding synapse.
/// </summary>
public class SynapticVesicle(IEnumerable<Neurotransmitter> neurotransmitters)
{
    public IEnumerable<Neurotransmitter> Neurotransmitters => neurotransmitters;

    public void Recycle()
    {

    }
}

public class SynapticVesicleDriver(SynapticVesicle synapticVesicle)
{
    private bool _synapsinReceived = false;

    public SynapticVesicle SynapticVesicle => synapticVesicle;

    public void Process(Synapsin synapsin)
    {
        _synapsinReceived = true;
    }

    public void Recycle()
    {
        SynapticVesicle.Recycle();
    }
}