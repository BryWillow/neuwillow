#ifndef _NEUROTRANSMITTER_H
#define _NEUROTRANSMITTER_H

namespace NeuWillow
{
  namespace Neurotransmitters
  {
    class Neurotransmitter
    {
      public:
        Neurotransmitter();
        ~Neurotransmitter();
        
      public:
        virtual bool isExcitatory() = 0;
    };

    class Dopamine : Neurotransmitter
    { 
      public:
        bool isExcitatory() { return true; }
    };

    class Gaba : Neurotransmitter
    { 
      public:
        bool isExcitatory() { return false; }
    };

    class Glutamate : Neurotransmitter
    { 
      public:
        bool isExcitatory() { return true; }
    };

    class Seratonin : Neurotransmitter
    { 
      public:
        bool isExcitatory() { return false; }
    };
    
  } //namespace Neurotransmitters
} // namespace NeuWillow

#endif