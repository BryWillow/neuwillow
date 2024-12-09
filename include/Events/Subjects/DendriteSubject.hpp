#ifndef _DENDRITE_SUBJECT_H
#define _DENDRITE_SUBJECT_H

#include "ISubject.hpp"

namespace neuwillow
{
  public:
    enum DendriteSubjects
    {
      DendriteCreating,
      DendriteReady,
      DendriteDying,
      DendriteDead,
      DendriteReceptorCreating,
      DendriteReceptorReady,
      DendriteReceptorDying,
      DendriteReceptorDead,
      NeurotransmitterReceived
    };

    class DendriteSubject : ISubject
    {

    };
}

#endif