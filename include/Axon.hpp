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
        MyelinationType myelinationType,
        double lengthMillimeters,
        double diameterMicorometers);

    private:
      MyelinationType m_myelinationType;
      double m_lengthInMillimeters;
      double m_diameterInMicrometers;
  };
}