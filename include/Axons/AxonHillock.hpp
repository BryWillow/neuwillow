#ifndef AXON_HILLOCK_HPP
#define AXON_HILLOCK_HPP

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace NeuWillow::Axons
{

  class AxonHillock
  {
    public:
      AxonHillock(uint64_t uniqueId);
      ~AxonHillock();
      uint64_t getId() const;

    private:
      uint64_t _id;
  };

  class AxonHillockFactory
  {
    public:
      std::shared_ptr<AxonHillock> create();
      std::shared_ptr<AxonHillock> find(uint64_t axonHillockId);
      bool destroy(uint64_t axonHillockId);

    private:
      std::unordered_map<uint64_t, std::shared_ptr<AxonHillock> > _createdAxonHillocks;
      UniqueIdGenerator _idGenerator;
  };

} // namespace Axons::NeuWillow

#endif