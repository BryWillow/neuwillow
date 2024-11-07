#pragma once

#include <memory>
#include <set>
#include "include/NeuroTransmitter.hpp"

namespace neuWillow
{

  enum ReceptorBindingResult
  {
     UnknownFailure,
     IncompatibleNeurotransmitter,
     Success
  };

  /**
   * A DendriticReceptor is a protein that is located on the spines of dendrites.
   * 
   */
  class DendriticReceptor
  {      
    public:
      DendriticReceptor(unsigned long uniqueId);
      ~DendriticReceptor();

    private:  
      /**
       * Each dendrite has many rectpors.
       * Each receptor is identified by a unique id.
       * Each receptor will continuously receive neurotransmitters from the synapse.
       * This should be automatically done in the ctor.
       */
      unsigned long m_uniqueId;

    public:
      /**
       * Neurotransmitters can bind to the Dendritic Receptor
       * on either their DenriticSpine or MainStem binding sites.
       * The Dendritic Spine is the most common binding site.
       */
      enum PostSynapticBindingSite
      {
        DendriticSpine,
        MainStem
      };

      long getUniqueId() const;

      /**
       * Simulates the process of a neurotransmitter attempting to 
       * bind to a dendritic receptor site. The neurotransmitter might
       * fail to bind for a variety of reasons: this type might not
       * be compatible with the site, the site might be damaged, etc.  
       * See: https://en.wikipedia.org/wiki/Neurotransmitter
       */ 
      void bind(
        PostSynapticBindingSite postSynapticBindingSite, 
        unique_ptr<Neurotransmitter> neuroTransmitter);
  };
}