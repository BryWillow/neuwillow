#include "../include/Soma.hpp"

namespace neuWillow
{
  Soma::Soma(unsigned long uniqueId)
  {
    _id = uniqueId;
  }

  Soma::~Soma()
  {

  }

  unsigned long Soma::getId() const
  {
    return _id;
  }

  std::shared_ptr<Soma> SomaFactory::create()
  {
      unsigned long somaId = _idGenerator.generateId();
      std::shared_ptr<Soma> newSoma = std::make_shared<Soma>(somaId);
      _createdSomas[somaId] = newSoma;
      return newSoma;
  }    

  std::shared_ptr<Soma> SomaFactory::find(unsigned long somaId)
  {
      auto it = _createdSomas.find(somaId);
      if (it == _createdSomas.end())
          return nullptr;
      return it->second;
  }

  bool SomaFactory::destroy(unsigned long somaId)
  {
      auto it = _createdSomas.find(somaId);
      if (it == _createdSomas.end())
          return false;
      _createdSomas.erase(it);
      return true;
  }
}