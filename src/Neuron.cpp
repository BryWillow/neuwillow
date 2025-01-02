#include <memory.h>
#include "Neuron.hpp"    

namespace neuwillow
{
  Neuron::Neuron(unsigned long uniqueId)
  {
      _id = uniqueId;
  }

  Neuron::~Neuron()
  {

  }

  std::shared_ptr<Neuron> NeuronFactory::create()
  {
      unsigned long uniqueId = _uniqueIdGenerator.generateId();
      std::shared_ptr<Neuron> newNeuron = std::make_shared<Neuron>(uniqueId);
      _createdNeurons[uniqueId] = newNeuron;
      return newNeuron;
  }    

  std::shared_ptr<Neuron> NeuronFactory::find(unsigned long neuronId)
  {
      auto it = _createdNeurons.find(neuronId);
      if (it == _createdNeurons.end())
          return nullptr;
      return it->second;
  }

  bool NeuronFactory::destroy(unsigned long synapseId)
  {
      auto it = _createdNeurons.find(synapseId);
      if (it == _createdNeurons.end())
          return false;
      _createdNeurons.erase(it);
      return true;
  }
}