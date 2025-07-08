namespace NeuWillow.Domain.CentralNervousSystem.Neurons.Neurotransmitters;

public class Neurotransmitter(
  Neurotransmitter.CommonName name,
  Neurotransmitter.ChemicalStructure chemicalStructure,
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
  
  public ChemicalStructure ChemicalClass => chemicalStructure;
  public CommonName Name => name;
  public MoleculeType MoleculeSize => moleculeType;

  public static readonly Neurotransmitter Acetylcholine = new(
    CommonName.Acetylcholine,
    ChemicalStructure.Monoamine,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Dopamine = new(
    CommonName.Dopamine,
    ChemicalStructure.Monoamine,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Endorphins = new(
    CommonName.Dopamine,
    ChemicalStructure.Peptide,
    MoleculeType.Neuropeptide);

  public static readonly Neurotransmitter Epinephrine = new(
    CommonName.Epinephrine,
    ChemicalStructure.Monoamine,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Gaba = new(
    CommonName.Gaba,
    ChemicalStructure.AminoAcid,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Glutamate = new(
    CommonName.Glutamate,
    ChemicalStructure.AminoAcid,
    MoleculeType.SmallMolecule);

  public static readonly Neurotransmitter Histamine = new(
     CommonName.Histamine,
     ChemicalStructure.Monoamine,
     MoleculeType.SmallMolecule);

 public static readonly Neurotransmitter Serotonin = new(
    CommonName.Serotonin,
    ChemicalStructure.Monoamine,
    MoleculeType.SmallMolecule);        
}