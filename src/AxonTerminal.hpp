#ifndef AXON_TERMINAL_HPP
#define AXON_TERMINAL_HPP

#include <unordered_map.h>
#include <memory.h>
#include "UniqueIdGenerator.hpp"

namespace NeuWillow::Axons
{
  class AxonTerminal
  {
    public:
      AxonTerminal(uint64_t uniqueId);
      ~AxonTerminal();
      uint64_t getId() const;

    private:
      uint64_t _id;
  };

  class AxonTerminalFactory
  {
    public:
      std::shared_ptr<AxonTerminal> create();
      std::shared_ptr<AxonTerminal> find(uint64_t axonTerminalId);
      bool destroy(uint64_t axonTerminalId);

    private:
      std::unordered_map<uint64_t, std::shared_ptr<AxonTerminal> > _createdAxonTerminals;
      UniqueIdGenerator _idGenerator;
  };
}

#endif