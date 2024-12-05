#ifndef _DENDRITE_SOMATIC_CALCULATOR_H
#define _DENDRITE_SOMATIC_CALCULATOR_H

#include <vector>
#include "Dendrite.hpp"

namespace neuWillow
{
  class DendriticSomaticCalculator
  {
    public:
      DendriticSomaticCalculator(unsigned long uniqueId);
      ~DendriticSomaticCalculator();

    private:
      unsigned long m_uniqueId;
  };
}

#endif