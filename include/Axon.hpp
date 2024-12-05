#ifndef _AXON_H
#define _AXON_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"
//#include "ObjectCache.hpp"

namespace neuWillow
{
  enum MyelinationType
  {
    Invalid,
    GlialSchwann,
    GlialOligodendrocytes,
    NonMyelinated
  };

  class Axon
  {
    public:
      Axon(unsigned long uniqueId);
      ~Axon();

      unsigned long getId() const;

    private:
      unsigned long _id;
  };

  class AxonFactory
  {
    public:
      std::shared_ptr<Axon> create();
      std::shared_ptr<Axon> find(unsigned long axonId);
      bool destroy(unsigned long axonId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<Axon> > _createdAxons;
      UniqueIdGenerator _idGenerator;
  };
}

#endif