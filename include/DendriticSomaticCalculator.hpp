#pragma once

#include <vector>
#include "../include/Dendrite.hpp"

namespace neuWillow
{
  class DendriticSomaticCalculator
  {
    public:
      long calculateOutputToSoma(const std::vector<Dendrite>& dendrites);
  };
}