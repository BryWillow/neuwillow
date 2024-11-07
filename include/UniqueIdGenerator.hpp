#pragma once

#include <random>

namespace neuWillow
{
  // TODO: This needs *major* optimization, but is the lowest important
  //       item on the priority list. Definitely revisit.
  class UniqueIdGenerator
  {
    public:
      unsigned long generateId();

    private:
      unsigned long m_uniqueId = 0;
  };
}