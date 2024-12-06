#ifndef _OBJECT_CACHE_H
#define _OBJECT_CACHE_H

#include <unordered_map> 
 
 /*
 namespace neuwillow
 {
  template<typename T>
  class ObjectCache
  {
    public:

      T create(unsigned long id)
      {
        typename std::unordered_map<unsigned long, T>::iterator it = _idToObject.find(id);
        if (it == _idToObject.end())
          return nullptr;
        return (*it).second;
      }

      T find(unsigned long id)
      {
        typename std::unordered_map<unsigned long, T>::iterator it = _idToObject.find(id);
        if (it == _idToObject.end())
          return nullptr;
        return (*it).second;
      }

      T destroy (unsigned long id)
      {
        typename std::unordered_map<unsigned long, T>::iterator it = _idToObject.find(id);
        if (it == _idToObject.end())
          return nullptr;
        return (*it).second;
      }

    private:
      std::unordered_map<unsigned long, T> _idToObject;
  };
 }*/

#endif