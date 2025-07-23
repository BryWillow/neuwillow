using UnitsNet;

namespace NeuWillow.Neurons.Dendrites.DendriticSpines;

public class DendriteSpineNeck(
  Length neckLength,
  Length neckDiameter,
  DendriteSpineHead spineHead)
{

  public Length NeckLength { get; private set; } = neckLength;
  public Length NeckDiameter { get; private set; } = neckDiameter;
  public DendriteSpineHead SpineHead { get; private set; } = spineHead;

  /// <summary>
  /// There is an interaction with NMDA receptors here.
  /// Not sure what the units are.
  /// RESEARCH.
  /// </summary>
  public void ProcessCalciumInflux()
  {

  }

  /// <summary>
  /// Hormonal fluctuation can cause neck size fluctuation.
  /// Not sure what the possible hormones are.
  /// RESEARCH.
  /// </summary>
  public void ProcessHormone()
  {
    throw new NotImplementedException();
  }

  /// <summary>
  /// Proteins like cofilin regulate actin dynamics, and its phosphorylation (inactivation)
  /// promotes actin polymerization and spine growth.
  /// Other proteins such as Rac1 and Cdc42, members of the Rho family of GTPases, 
  /// also play a key role in regulating actin dynamics and spine morphology.
  /// RESEARCH. 
  /// </summary>
  public void ProcessProtein()
  {
    throw new NotImplementedException();
  }

  /// <summary>
  /// Actin polymerization (formation of F-actin) can lead to 
  /// spine enlargement and potentially neck lengthening or widening, 
  /// while actin depolymerization can result in shrinkage.
  /// RESEARCH.
  /// </summary>
  public void ProcessActin()
  {
    throw new NotImplementedException();
  }

  /// <summary>
  /// The following can cause spine neck shrinkage:
  /// 1. Lack of synaptic activity can cause LTD which 
  ///    *decreases* the size of the spine neck and spine head.
  /// RESEARCH.
  /// </summary>
  private void CalculateLongTermDepression()
  {
    throw new NotImplementedException();
  }

  /// <summary>
  /// The following can cause spine neck shrinkage:
  /// 1. Repeated synaptic activity can cause LTP which 
  ///    *increases* the size of spine head but 
  ///    *decreases* the size of the spine neck.
  /// RESEARCH.
  /// </summary>
  private void CalculateLongTermPotentiation()
  {
    throw new NotImplementedException();
  }
}