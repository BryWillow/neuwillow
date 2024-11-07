#include "../include/AxonHillock.hpp"
#include <iostream>

namespace neuWillow
{
  AxonHillock::AxonHillock(long uniqueId)
  {
    std::cout << "AxonHillock - Creating new instance." << std::endl;
    m_uniqueId = uniqueId;
  }

  AxonHillock::~AxonHillock()
  {

  }
}