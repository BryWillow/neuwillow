#pragma once

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