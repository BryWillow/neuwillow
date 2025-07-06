namespace OpenNeuro.Domain;

/// <summary>
/// General Properties:
/// 1. They are stored in a neuron's Axon Terminal.
///.   a. Specifically many are stored in sac-like structures called Synaptic Vesicles.
/// 
/// </summary>
/// 
/// 
/// 

public class NeurotransmitterFactory
{
  private readonly Dictionary<NeurotransmitterClass, HashSet<NeurotransmitterName>> _classToNames = [];

  public NeurotransmitterFactory()
  {
    _classToNames[NeurotransmitterClass.AminoAcid]
  }
  

  Neurotransmitter Create()
  {
    _classToNames[NeurotransmitterClass.AminoAcid] = new HashSet<NeurotransmitterName>
    {
      NeurotransmitterName.Dopamine,
      NeurotransmitterName.Glutamate
    };

    return new Neurotransmitter(NeurotransmitterClass.AminoAcid);
  }
}

public enum NeurotransmitterClass
{
  Invalid,
  AminoAcid,
  Monoamine,
  Peptide,
  Other
}

public enum NeurotransmitterName
{
  Invalid,
  Dopamine,
}

public class Neurotransmitter(NeurotransmitterClass neurotransmitterClass)
{
  public NeurotransmitterClass Class => neurotransmitterClass;
}