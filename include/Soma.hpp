#pragma once

namespace neuWillow
{
  /// @brief A neuron's nucleus.
  /// 
  class Soma
  {
    public:
      Soma();
      ~Soma();

      void processSignal(long signal);
  };
}