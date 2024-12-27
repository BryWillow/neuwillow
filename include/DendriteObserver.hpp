#ifndef _DENDRITE_OBSERVER_H
#define _DENDRITE_OBSERVER_H

#include "IObserver.hpp"

namespace neuwillow
{
  class DendriteObserver : IObserver
  {
    public:
      void OnNotify() override
      {

      }

      std::string GetName() override
      {
        return "";
      }
  };
}

#endif