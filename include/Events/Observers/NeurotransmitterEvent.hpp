#ifndef _NEUROTRANSMITTER_OBSERVER_H
#define _NEUROTRANSMITTER_OBSERVER_H

#include <memory>

#include "IObserver.hpp"
#include "../../Neurotransmitter.hpp"

namespace neuwillow
{
  class NeurotransmitterEvent : IObserver
  {
    public:
      explicit NeurotransmitterEvent(const std::string& eventName) : _eventName(eventName) {}

      std::string const override GetName() { return _eventName; }

      std::shared_ptr<Neurotransmitter> getNeurotransmitter() { return _neurotransmitter; }
      void setNeurotransmitter(std::shared_ptr<Neurotransmitter> neurotransmitter)
      {
        _neurotransmitter = neurotransmitter;
      }

    private:
      std::shared_ptr<Neurotransmitter> _neurotransmitter;
      std::string _eventName;
  };
}

#endif