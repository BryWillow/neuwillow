namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Neurotransmitters;

/// <summary>
/// A "sac-like" structure that contains neurotransmitters to be released.
/// The neurotransmitters inside each vesicle are the result of the preceding synapse.
/// </summary>
public class SynapticVesicle(IEnumerable<Neurotransmitter> neurotransmitters)
{
    public IEnumerable<Neurotransmitter> Neurotransmitters => neurotransmitters;
}