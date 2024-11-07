#pragma once

#include <vector>
#include "../include/Dendrite.hpp"

namespace neuWillow
{
  class DendriticSomaticCalculator
  {
    public:
      DendriticSomaticCalculator(unsigned long uniqueId);
      ~DendriticSomaticCalculator();

      long calculateOutputToSoma(const std::vector<Dendrite>& dendrites);

    private:
      unsigned long m_uniqueId;
  };
}