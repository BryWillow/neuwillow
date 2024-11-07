#pragma once

namespace neuWillow
{
  /// @brief A neuron's nucleus.
  /// 
  class Soma
  {
    public:
      Soma(unsigned long uniqueId);
      ~Soma();

      void processSignal(long signal);

    private:
      unsigned long m_uniqueId;
  };
}