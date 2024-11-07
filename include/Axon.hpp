#pragma once

#include <vector>
#include "IonChannel.hpp"

namespace neuWillow
{
  enum MyelinationType
  {
    Invalid,
    GlialSchwann,
    GlialOligodendrocytes,
    NonMyelinated
  };

  class Axon
  {
    public:
      Axon(
        unsigned long uniqueId,
        MyelinationType myelinationType,
        double lengthMillimeters,
        double diameterMicorometers);

    private:
      unsigned long m_uniqueId;
      MyelinationType m_myelinationType;
      double m_lengthInMillimeters;
      double m_diameterInMicrometers;
  };
}