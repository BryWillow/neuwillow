namespace NeuWillow.Neurons.Dendrites.DendriteReceptors;

public interface IDendriteReceptor
{
    IReadOnlySet<DendriteReceptorType> CompatibleReceptors { get; }
}