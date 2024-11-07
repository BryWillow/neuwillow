#pragma once

namespace neuWillow
{
  class AxonHillock
  {
    public:
      AxonHillock(unsigned long uniqueId);
      ~AxonHillock();

    private:
      unsigned long m_uniqueId;
  };
}