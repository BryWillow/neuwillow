#include "../include/DendriticSomaticCalculator.hpp"

namespace neuWillow
{
  DendriticSomaticCalculator::DendriticSomaticCalculator(unsigned long uniqueId)
  {
    m_uniqueId = uniqueId;
  }

  DendriticSomaticCalculator::~DendriticSomaticCalculator()
  {

  }

  unsigned long DendriticSomaticCalculator::calculateOutputToSoma(const std::vector<Dendrite>& dendrites)
  {
    return 0;
  }
}