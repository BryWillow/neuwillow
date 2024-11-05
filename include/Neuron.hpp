#pragma once

#include "Axon.hpp"
#include "AxonHillock.hpp"
#include "AxonTerminal.hpp"
#include "Dendrite.hpp"
#include "Soma.hpp"

namespace neuWillow
{
  class Neuron
  {      
    public:
      Neuron(
        const vector<Dendrite>& dendrites,
        const Soma& soma,
        const AxonHillock& axonHillock,
        const Axon& axon,
        const AxonTerminal& axonTerminal) :
          m_dendrites(dendrites),
          m_soma(soma),
          m_axonHillock(axonHillock),
          m_axon(axon),
          m_axonTerminal(axonTerminal)
      {
        if (dendrites.size() == 0)
        {
          // This is a damaged neuron and cannot be repaired.
          // TODO: add to a global collection of damaged neurons.
        }

        // TODO: register this neuron with a global collection.
        m_neuronId++;
      }

      long getNeuronId() const { return m_neuronId; }

    private:
      vector<Dendrite> m_dendrites;
      Soma m_soma;
      AxonHillock m_axonHillock;
      Axon m_axon;
      AxonTerminal m_axonTerminal;

      static unsigned long m_neuronId;
  };
}