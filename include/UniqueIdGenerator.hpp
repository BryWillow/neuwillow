#pragma once

namespace neuWillow
{
  class UniqueIdGenerator
  {
    public:
      unsigned long generateId();

    private:
      unsigned long m_uniqueId = 0;
  };
}