#pragma once

#include <random>

namespace neuWillow
{
  // TODO: This needs *major* optimization, but is the lowest important
  //       item on the priority list. Definitely revisit.
  class UniqueIdGenerator
  {
    public:
      long generateId();

      private:
        std::default_random_engine _randomGenerator;
  };
}