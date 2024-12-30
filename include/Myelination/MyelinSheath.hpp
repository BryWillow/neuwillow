#ifndef MYELIN_SHEATH_HPP
#define MYELIN_SHEATH_HPP

#include <vector>
#include "Internode.hpp"
#include "RanvierNode.hpp"

namespace NeuWillow
{
  namespace Myelination
  {
    /// Notes:
    ///
    /// A Myelin Sheath is a many-layered fatty sleeve consisting sleeve that wraps around most neurons' axons.
    /// They are a fatty, protein insulating-sleeve wrapped around a Neuron's Axon.
    /// They serve the following purposes:
    ///   1. To keep the axon intact
    ///   2. To he strength/speed of the electrical impulse as it travels down the axon.
    ///
    class MyelinSheath
    {
      public:
        MyelinSheath(const std::vector<InterNode> internodes);
        ~MyelinSheath();
    };

    /// Notes:
    ///
    /// Produce Myelin Sheaths by wrapping themselves around axons, sometimes 100x.
    /// In the peripheral nervous system (PNS), this production in the PNS, happens in *Glial cellls*.
    /// In the central nervous system (CNS), this production occurs in the *Oligodendrocytes*.
    /// happens in *Schwann Cells*. 
    /// There are many more neuroglia than neurons, and act as a support system / nourish neurons.
    /// There are manny different types of neuroglia depending on the region of the body.
    class Neuroglia
    {

    };

    /// Notes:
    ///
    /// TODO: 
    /// Understand the differences between Continuous Conduction and Saltatory Condution.
    class ContinuousConduction
    {

    };

    /// Notes:
    ///
    /// TODO: 
    /// Understand the differences between Continuous Conduction.
    /// Appears to happen much faster than Continuous Conduction because of the
    /// "jumping", Nodes of Ranvier, Myelin, etc. See Cysosol.
    class SaltatoryConduction
    {

    };

    /// Notes:
    ///
    /// TODO: 
    /// Understand the differences between ther Peripheral Nervous System (PNS) and Central Nervous Systen (CNS).
    /// E.g., CNS controls the 5 senses, brain + spinal cord, but what types of cells relevant to action potentials.
    /// E.g., Schwann cells vs. Oligodendrocytes


    /// The nerve paths of unmylenated cells have "continuous condution".
    /// 
    class Myelin
    {

    };
  }
}