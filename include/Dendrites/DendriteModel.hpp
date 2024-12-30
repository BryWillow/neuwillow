#ifndef DENDRITE_MODEL_HPP
#define DENDRITE_MODEL_HPP

namespace NeuWillow::Dendrites
{
  
  class IDendriteModel
  {
    // Phase 2: Decide on a clock time.
    //
    // Does time only move forward in a linear manner, e.g., seconds, minutes, ...
    // Are we able to backtrack in time and form predictions?
    // If so, does that live on the Neuron or Dendrite level?
    // Do we provide some kind of average output?
    // How do Dendrite consumers use / receive output - the IObserver pattern?
  };

} // namespace Dendrites::NeuWillow

#endif