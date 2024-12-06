#ifndef _NEURON_H
#define _NEURON_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"
#include "ActionPotential.hpp"

namespace neuwillow
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

      //constexpr int x = 5;
      //constexpr std::string _foobar = "1";
  };  
}

#endif