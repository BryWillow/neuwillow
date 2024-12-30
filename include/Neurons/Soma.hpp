#ifndef _SOMA_H
#define _SOMA_H

#include <unordered_map>
#include <memory>
#include "UniqueIdGenerator.hpp"

namespace neuwillow
{
  namespace Neurons
  {
    class Soma
    {
      public:
        Soma(unsigned long uniqueId);
        ~Soma();

        unsigned long getId() const;

      private:
        unsigned long _id;
    };

    class SomaFactory
    {
      public:
        std::shared_ptr<Soma> create();
        std::shared_ptr<Soma> find(unsigned long somaId);
        bool destroy(unsigned long somaId);

      private:
        std::unordered_map<unsigned long, std::shared_ptr<Soma> > _createdSomas;
        UniqueIdGenerator _idGenerator;
    };
    
  } // namespace Neurons
} // namespace NeuWillow

#endif