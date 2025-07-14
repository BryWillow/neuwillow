namespace NeuWillow.Neurons.Dendrites;

// RESEARCH: I'm getting over my head with the Neurotransmitter subclass receptors.
//           There are obviously many more. The Glutamate receptors only open under
//           specific conditions. Investigate that, specifically.
public enum DendriteReceptorType
{
  Invalid,
  GabaA,   // LigandGated
  GabaB,   // GProteinCoupled
  GabaAp,  // LigandGated -> NOTE: Nomenclature Committee of the IUPHAR requested this named instead of GABAC
  GlutamateNmda,
  GlutamateAmpa,
  GlutamateKainate
}

/// <summary>
/// A neurotransmitter binding to a receptor is generally described as a "lock and key" mechanism.
/// This process is complex, and often the target of medication, like SSRIs.
/// </summary>
public enum BindingResults
{
  Invalid,
  Success,     // Bound to a compatible receptor site.
  Diffusion,   // Failed to bind. It drifts away from the synapse.
  Reuptake,    // Failed to bind. It's transported back to the presynaptic neuron.
  Degradation, // Failed to bind. An enzyme breaks it down.
  Failure      // Failed to bind. Unknown reason.        
}