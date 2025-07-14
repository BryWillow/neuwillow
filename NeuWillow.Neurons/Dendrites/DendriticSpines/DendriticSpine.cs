using NeuWillow.Common;
using NeuWillow.Neurons.Dendrites.DendriteIonChannels;
using NeuWillow.Neurons.Neurotransmitters;

namespace NeuWillow.Neurons.Dendrites.DendriticSpines;


/// <summary>
/// Instances of this class will eventually be propagated up to the dendrite, which
/// will have an impact on whether an action potential is fired.
/// </summary>
public class ExcitatoryPostsynapticPotential(DendriticSpine dendriteSpine, decimal voltageCausingPotential)
{
    public DendriticSpine Origin => dendriteSpine;
    public decimal VoltageOfPotential => voltageCausingPotential;
}

/// <summary>
/// Important facts:
/// Dendritic spines receive primarily excitatory inupt.
/// Dendritic spines receive 2-4% of GABA.
/// 
/// A single neuron (multipolar) can have between 1-1000+ dendrites.
/// Each of these dendrites can have 1-1000+ dendritic spines.
/// A dendritic spine serves as the primary binding source for 
/// neurotransmitters. There are other binding sources, not to be covered here.
/// </summary>
public class DendriticSpine
{
    // TODO: Read this from configuration. And it should likely be a range. 
    // RESEARCH: There is much study and debate in the scientific community re: the electrical properties
    /// of a dendritic spine. It's estimated a 2-20 millivolts can cause synaptic activity.
    /// However, up to 40 millivolts has been measured at the head of the spine. Spines are so
    /// small that we don't yet have the technology to measure all of the nuances with definitive acccuracy.    
    private const int ThresholdMillivoltsForEpsp = 20;

    // RESEARCH: Which excitatory neurotransmitters generate how many millivolts based on the 
    //           state of the dendrite spine. For now we'll use this common constant.
    //           So, for now, this is a "magic" number.
    private const decimal NeurotransmitterVoltage = 0.01m;

    private decimal _accumulatedVoltage = 0m;

    public DendriticSpine(IEnumerable<IDendriteIonChannel> ionChannels)
    {
        // TODO: implement IonChannel functionality.
        // RESEARCH: Which types of ion channels are applicable to dendritic spines.
        IonChannels = ionChannels.ThrowIfArgumentNull(nameof(ionChannels));
    }

    public event EventHandler<ExcitatoryPostsynapticPotential> OnDendriteSpinePotentialReceived;

    public IEnumerable<IDendriteIonChannel> IonChannels { get; private set; }
    public decimal VolumeMicrons { get; private set; }
    /// RESEARCH: Limits diffusion?
    public decimal SpineNeckNarrowing { get; set; }

    public void Process(Neurotransmitter neurotransmitter)
    {
        neurotransmitter.ThrowIfArgumentNull(nameof(neurotransmitter));
        _accumulatedVoltage += NeurotransmitterVoltage;
        if (_accumulatedVoltage >= ThresholdMillivoltsForEpsp)
        {
            ExcitatoryPostsynapticPotential epsp = new(this, _accumulatedVoltage);
            _accumulatedVoltage = 0m;
            OnDendriteSpinePotentialReceived?.Invoke(this, epsp);            
        }
    }

    private void AdjustVolume(Neurotransmitter neurotransmitter)
    {
        // RESEARCH: Dendrite spines grow and shrink dynamically based on several factors including: 
        //           (1) the "strength" of the synapse, i.e., how many neurotransmitters it is binding to.
        //           (2) if it has a TrkB receptor, then BDNF can flow inside and impact the entire dendrite.
        //           (3) the length of the dendrite.
        //
        // NOTES:    (1) This information is related is related to neuroplasticity, and heavily being researchced.
        //           (2) Dendrite spines with TrkB receptors are not isolated to specific regions in the brain.
        //           (3) I don't believe (but could be wrong) we know why some spines have TrkB receptors and some don't.
        //
    }
}