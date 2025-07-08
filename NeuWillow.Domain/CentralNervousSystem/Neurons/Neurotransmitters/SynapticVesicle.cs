namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Neurotransmitters;

public class SynapticVesicle(IEnumerable<Neurotransmitter> neurotransmitters)
{
    public IEnumerable<Neurotransmitter> Neurotransmitters => neurotransmitters;
}