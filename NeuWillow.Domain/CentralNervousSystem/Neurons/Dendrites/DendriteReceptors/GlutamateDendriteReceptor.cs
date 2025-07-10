namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Dendrites.DendriteReceptors;

public class GlutamateDendriteReceptor : IDendriteReceptor
{
    public GlutamateDendriteReceptor()
    {
        HashSet<DendriteReceptorType> compatibleReceptors =
            [DendriteReceptorType.GlutamateAmpa, DendriteReceptorType.GlutamateKainate, DendriteReceptorType.GlutamateNmda];
        CompatibleReceptors = compatibleReceptors;
    }

    public IReadOnlySet<DendriteReceptorType> CompatibleReceptors { get; private set; }    
}