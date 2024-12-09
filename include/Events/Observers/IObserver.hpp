#ifndef _IOBSERVER_H
#define _IOBSERVER_H

//#include "../Observers/IObserver.hpp"

namespace neuwillow
{
  // Note: This interface is "event-handler" portion of the Observer pattern.
  //       Currently it is very naive, given that it only provides a "ping"
  //       when an important event happened. We don't know which object
  //       initiated the changed, changed, etc. Clearly we need to extend this
  //       for it to be useful. The good part is the decoupling from all other 
  //       abstractions, and how it can listen to many abstractions.
  //
  // 1. Implement a concrete class of this interface, obviously.
  // 2. Register that class with 1 or many implementations of ISubject.
  // 3. GetName() is simply a description of what this observer is listening to.
  class IObserver
  {
    public:
      virtual ~IObserver() {};
      virtual void OnNotify() = 0;
      virtual std::string GetName() = 0;
  };
}

#endif