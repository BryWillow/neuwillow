#ifndef _IOBSERVER_H
#define _IOBSERVER_H

//#include "../Observers/IObserver.hpp"

namespace neuwillow
{
  // ISubject is essentially just a mechanism for dispatching events
  // to many listeners.
  class IObserver
  {
    public:
      virtual ~IObserver() {};
      virtual void OnNotify() = 0;
      virtual std::string GetName() = 0;
  };
}

#endif