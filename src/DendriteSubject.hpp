#ifndef _DENDRITE_SUBJECT_H
#define _DENDRITE_SUBJECT_H

#include "ISubject.hpp"
//#include "common.h"

namespace neuwillow
{
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