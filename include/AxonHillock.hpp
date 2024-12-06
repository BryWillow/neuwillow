#ifndef _AXON_HILLOCK_H
#define _AXON_HILLOCK_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuwillow
{
  class AxonHillock
  {
    public:
      AxonHillock(unsigned long uniqueId);
      ~AxonHillock();

      unsigned long getId() const;

    private:
      unsigned long _id;
  };

  class AxonHillockFactory
  {
    public:
      std::shared_ptr<AxonHillock> create();
      std::shared_ptr<AxonHillock> find(unsigned long axonHillockId);
      bool destroy(unsigned long axonHillockId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<AxonHillock> > _createdAxonHillocks;
      UniqueIdGenerator _idGenerator;
  }; 
}

#endif