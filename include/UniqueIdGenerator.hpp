#ifndef _UNIQUE_ID_GENERATOR_H
#define _UNIQUE_ID_GENERATOR_H

namespace neuWillow
{
  class UniqueIdGenerator
  {
    public:
      unsigned long generateId();

    private:
      unsigned long m_uniqueId;
  };
}

#endif