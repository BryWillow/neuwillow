using NeuWillow.Domain.Neurons;
using NeuWillow.Domain.Neurons.Dendrites;
using OpenNeuro.Domain;

namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Dendrites;

public class Dendrite
{
    public int DendriteId { get; private set; }

    public IEnumerable<DendriticSpine> DendriticSpines { get; }

    /// <summary>
    /// A single dendrite can process different types of neurotransmitters simultaneously.
    /// A single dendrite can receive multiple neurotransmitters simultaneously
    /// </summary>
    /// <param name="neuroTransmitter"></param>
    public void Process(Neurotransmitter neuroTransmitter)
    {
    
    }

    /// <summary>
    /// A single dendrite can process different types of neurotransmitters simultaneously.
    /// E.g., 
    /// </summary>
    /// <param name="neuroTransmitter"></param>
    public void Process(IEnumerable<Neurotransmitter> neurotransmitters)
    {
        // TODO: Implement processing logic for neurotransmitters
        // Example: foreach (var nt in neurotransmitters) { ... }
    }
}