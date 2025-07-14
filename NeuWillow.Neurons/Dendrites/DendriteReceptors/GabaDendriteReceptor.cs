
namespace NeuWillow.Neurons.Dendrites.DendriteReceptors;

public class GabaDendriteReceptor : IDendriteReceptor
{
    public GabaDendriteReceptor()
    {
        HashSet<DendriteReceptorType> compatibleReceptors =
            [DendriteReceptorType.GabaA, DendriteReceptorType.GabaB, DendriteReceptorType.GabaAp];
        CompatibleReceptors = compatibleReceptors;
    }

    public IReadOnlySet<DendriteReceptorType> CompatibleReceptors { get; private set; }
}