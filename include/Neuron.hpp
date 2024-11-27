#pragma once

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"
#include "ActionPotential.hpp"

namespace neuWillow
{
  class Neuron
  {      
    public:
      Neuron(unsigned long id);
      ~Neuron();

      unsigned long getNeuronId() const;

    private:
      unsigned long _id;
  };

  class NeuronFactory
  {
    public:
      NeuronFactory();

      std::shared_ptr<Neuron> create();
      std::shared_ptr<Neuron> find(unsigned long neuronId);
      bool destroy(unsigned long neuronId);

    private:
      std::unordered_map<unsigned long, std::shared_ptr<Neuron> > _createdNeurons;
      UniqueIdGenerator _uniqueIdGenerator;
  };  
}