namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Neurotransmitters;

public class Neurotransmitter(
  Neurotransmitter.CommonName name,
  Neurotransmitter.ChemicalStructure chemicalStructure,
  Neurotransmitter.ExcitatoryClassification excitatoryClassification,
  Neurotransmitter.MoleculeType moleculeType)
{
  /// <summary>
  /// Just starting with the fundamentals.
  /// Over 100 have been identified.
  /// </summary>
  public enum CommonName
  {
    Invalid,
    Acetylcholine,
    Dopamine,
    Endorphins,
    Epinephrine,
    Gaba,
    Glutamate,
    Histamine,
    Serotonin
  }

  public enum ChemicalStructure
  {
    Invalid,
    AminoAcid, // Small Molecule
    Monoamine, // Small Molecule
    Peptide,   // Large Molecule
    Other
  }

  public enum MoleculeType
  {
    Invalid,
    Neuropeptide,
    SmallMolecule
  }

  /// <summary>
  /// :RESEARCH:
  /// "General" classification categories.
  /// Not intended to represent neurotransmitters are interpreted
  /// by post-synaptic neurons. I do not have an idea re: the 
  /// the frequency the classification / interpretation change.
  /// </summary>
  public enum ExcitatoryClassification
  {
    Invalid,
    Both,
    Excitatory,
    Inhibtitory
  }
  
  public ChemicalStructure ChemicalClass => chemicalStructure;
  public CommonName Name => name;
  public MoleculeType MoleculeSize => moleculeType;
  public ExcitatoryClassification Excitability => excitatoryClassification;

  public static readonly Neurotransmitter Acetylcholine = new(
    CommonName.Acetylcholine,
    ChemicalStructure.Monoamine,
    ExcitatoryClassification.Excitatory,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Dopamine = new(
    CommonName.Dopamine,
    ChemicalStructure.Monoamine,
    ExcitatoryClassification.Both,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Endorphins = new(
    CommonName.Dopamine,
    ChemicalStructure.Peptide,
    ExcitatoryClassification.Inhibtitory,
    MoleculeType.Neuropeptide);

  public static readonly Neurotransmitter Epinephrine = new(
    CommonName.Epinephrine,
    ChemicalStructure.Monoamine,
    ExcitatoryClassification.Excitatory,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Gaba = new(
    CommonName.Gaba,
    ChemicalStructure.AminoAcid,
    ExcitatoryClassification.Inhibtitory,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Glutamate = new(
    CommonName.Glutamate,
    ChemicalStructure.AminoAcid,
    ExcitatoryClassification.Excitatory,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Histamine = new(
     CommonName.Histamine,
     ChemicalStructure.Monoamine,
     ExcitatoryClassification.Excitatory,
     MoleculeType.SmallMolecule);

 public static readonly Neurotransmitter Serotonin = new(
    CommonName.Serotonin,
    ChemicalStructure.Monoamine,
    ExcitatoryClassification.Inhibtitory,
    MoleculeType.SmallMolecule);        
}