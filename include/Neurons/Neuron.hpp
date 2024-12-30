#ifndef _NEURON_H
#define _NEURON_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"
#include "ActionPotential.hpp"

namespace neuwillow
{
  // TBD:
  //
  ////////////////////////////////////////////////////////////////////////
  // (1) Neurons
  // (2) Glial Cells outnumber neurons by 10:1. Types are:
  //      CNS: Brain & Spinal Cord:
  //        (a) Astrocytes: 
  //              i.  Most abundant
  //              ii. Anchor neurons to blood supply
  //             iii. Exchange materials between neurons and capillaries
  //        (b) Microglial Cells: Immune defense
  //        (c) Ependymal Cells
  //        (d) Oligendrocytes
  //      PNS: Nerve Cells branching off from your brain:
  //        (a) Satellite Cells
  //        (b) Schwann Cells
  ////////////////////////////////////////////////////////////////////////

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