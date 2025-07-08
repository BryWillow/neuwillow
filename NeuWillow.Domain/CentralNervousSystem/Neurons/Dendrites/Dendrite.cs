using NeuWillow.Domain.CentralNervousSystem.Neurons.Neurotransmitters;

namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Dendrites;

public class Dendrite
{
    private List<DendriticSpine> _dendriticSpines = [];

    public int DendriteId { get; private set; }

    /// <summary>
    /// Dendrites can grow new spines through a process called spinogenesis.
    /// </summary>
    public void AddSpine(DendriticSpine spine)
    {
        _dendriticSpines.Add(spine);
    }

    public void Process(Neurotransmitter neuroTransmitter)
    {
    
    }

    public void Process(IEnumerable<Neurotransmitter> neurotransmitters)
    {

    }
}