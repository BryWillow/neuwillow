#ifndef _AXON_TERMINAL_H
#define _AXON_TERMINAL_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuwillow
{
  class AxonTerminal
  {
    public:
      AxonTerminal(unsigned long uniqueId);
      ~AxonTerminal();

      unsigned long getId() const;

    private:
      unsigned long _id;
  };

  class AxonTerminalFactory
  {
    public:
      std::shared_ptr<AxonTerminal> create();
      std::shared_ptr<AxonTerminal> find(unsigned long axonTerminalId);
      bool destroy(unsigned long axonTerminalId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<AxonTerminal> > _createdAxonTerminals;
      UniqueIdGenerator _idGenerator;
  }; 
}

#endif