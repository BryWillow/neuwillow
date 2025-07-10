namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Dendrites.DendriteReceptors;

public interface IDendriteReceptor
{
    IReadOnlySet<DendriteReceptorType> CompatibleReceptors { get; }
}