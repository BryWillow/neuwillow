#pragma once

#include <iostream>
#include "../include/Axon.hpp"
#include "../include/MyelinSheath.hpp"

namespace neuWillow
{
  Axon::Axon(unsigned long uniqueId,
        MyelinationType myelinationType,
        double lengthMillimeters,
        double diameterMicorometers)
  {
    std::cout << "Axon - Creating new instance." << std::endl;
    m_uniqueId = uniqueId;
  }

  Axon::~Axon()
  {

  }
}