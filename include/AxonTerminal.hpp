 #pragma once

 namespace neuWillow
 {
  class AxonTerminal
  {
    public:
      AxonTerminal(long m_uniqueId);
      ~AxonTerminal();

    private:
      long m_uniqueId;
  };
 }