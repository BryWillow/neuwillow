#ifndef AXON_HPP
#define AXON_HPP

#include <map.h>
#include <memory.h>
#include "UniqueIdGenerator.hpp"

namespace neuwillow::Axons
{

  class Axon
  {
    public:
      Axon(uint64_t uniqueId);
      ~Axon();
      uint64_t getId() const;

    private:
      uint64_t _id;
  };

  class AxonFactory
  {
    public:
      std::shared_ptr<Axon> create();
      std::shared_ptr<Axon> find(uint64_t axonId);
      bool destroy(uint64_t axonId);

    private:
      std::unordered_map<uint64_t, std::shared_ptr<Axon> > _createdAxons;
      UniqueIdGenerator _idGenerator;
  };

} // namespace Axons::NeuWillow

#endif