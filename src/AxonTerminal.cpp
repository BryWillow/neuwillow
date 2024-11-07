#include "../include/AxonTerminal.hpp"
#include <iostream>

namespace neuWillow
{
  AxonTerminal::AxonTerminal(long uniqueId)
  {
    std::cout << "AxonTerminal - Creating new instance." << std::endl;
    m_uniqueId = uniqueId;
  }

  AxonTerminal::~AxonTerminal()
  {

  }
}