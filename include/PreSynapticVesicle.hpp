#pragma once

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuWillow
{
  class PreSynapticVesicle
  {
    public:
      PreSynapticVesicle(unsigned long uniqueId);
      ~PreSynapticVesicle();

      unsigned long getId() const;

    private:
      unsigned long _id;
  };

  class PreSynapticVesicleFactory
  {
    public:
      std::shared_ptr<PreSynapticVesicle> create();
      std::shared_ptr<PreSynapticVesicle> find(unsigned long preSynapticVesicleId);
      bool destroy(unsigned long preSynapticVesicleId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<PreSynapticVesicle> > _createdPreSynapticVesicles;
      UniqueIdGenerator _idGenerator;
  }; 
}