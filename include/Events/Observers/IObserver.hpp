#ifndef _IOBSERVER_H
#define _IOBSERVER_H

namespace neuwillow
{
  // ISubject is essentially just a mechanism for dispatching events
  // to many listeners.
  class ISubject
  {
    public:
      virtual ~IObserver() {};
      virtual void OnNotify() = 0;
      virtual std::string GetName() = 0;
  };
}

#endif