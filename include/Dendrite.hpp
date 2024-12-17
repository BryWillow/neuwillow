#ifndef _DENDRITE_H
#define _DENDRITE_H

#include <vector>
#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"
#include "DendriteReceptor.hpp"

namespace neuwillow
{
  namespace postsynapse
  {
    namespace dendrite
    {
      // Phase 1: Static Dendrite State.
      //
      // Phase 2: Dynamic Dendrite State / Lifetime.
      //
      // Determining how many dendrites a neuron has at any point in time is going 
      // to be a challenge. The number is not a constant, and its state is changing 
      // due to environmental factors such as aging, neuroplasticity, etc.
      // Architecturally speaking, the Dendrite class itself will not be responsible 
      // for managing this state, but will be part of a larger subsystem, yet to be
      // fully designed.
  
      class Dendrite
      {
        public:
          Dendrite(
            unsigned long dendriteId, 
            std::vector<std::shared_ptr<DendriteReceptor>> receptors);
          ~Dendrite();

          unsigned long getDendriteId() const { return _id; }

          // The number of a Dendrite's receptors changes over time.
          void addReceptor(DendriteReceptor receptor);
          //bool killReceptor(unsigned long dendriteReceptorId);

        private:
          unsigned long _dendriteId;
          std::vector<std::shared_ptr<DendriteReceptorSite>> _receptors;
      };

      // Phase 1: Static DendriteRectorSite State.
      //
      // Phase 2: Dynamic DendriteReceptorSite State / Lifetime / Dependencies.
      //
      // A Dendrite has a variable number of receptor sites. These receptor sites 
      // likely have properties of their own that don't change the dendrite, but
      // might impact other receptor sites.
      // In this case, to *greatly* simplify things:
      // 1) A DendriteReceptorSite is a dependent variable on a Dendrite.
      //      a. When a Dendrite dies, a receptor site dies with it.
      //      b. When a Pre-Synaptic neurotransmitter binds to a Post-Synaptic
      //         Ligand-Gated Ion Channel, the parent Dendrite needs to know
      //         about it.
      //      c. Essentially, all info a receptor site receives must be passed
      //         to the parent dendrite.
      class DendriteReceptorSite
      {
        public:
          DendriteReceptorSite(unsigned long uniqueId);
          ~DendriteReceptorSite();

          unsigned long getId() const { return _id; }

        private:
          unsigned long _id;
      };

      class IDendriteModel
      {
        // Phase 2: Decide on a clock time.
        //
        // Does time only move forward in a linear manner, e.g., seconds, minutes, ...
        // Are we able to backtrack in time and form predictions?
        // If so, does that live on the Neuron or Dendrite level?
        // Do we provide some kind of average output?
        // How do Dendrite consumers use / receive output - the IObserver pattern?
      };

      // TODO: Phase 1:
      // Read config from TOML and create/attach dendrites to the appropriate neurons.
      class DendriteFactory
      {
        public:
          std::shared_ptr<Dendrite> create();
          std::shared_ptr<Dendrite> find(unsigned long dendriteId);
          bool destroy(unsigned long dendriteId);

        private:
          std::unordered_map<unsigned long, std::shared_ptr<Dendrite> > _createdDendrites;
          DendriteReceptorFactory _dendriteReceptorFactory;
          UniqueIdGenerator _idGenerator;
      }; 

    } // namespace dendrite
  } // namespace postsynaptic
} // namespace neuwillow


}

#endif