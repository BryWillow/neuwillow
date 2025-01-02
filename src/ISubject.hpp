#ifndef _ISUBJECT_H
#define _ISUBJECT_H

#include <list.h>
#include <map.h>
#include <memory.h>

#include "IObserver.hpp"

//
// This is an implementation of the Observer pattern. 
// This design offers some perks, but has its limitations.
//
// First, the perks:
// (1) A single instance of a concrete implementation of ISubject multiple event types.
//     E.g., "ACTION_POTENTIAL_FIRED" and "ACTION_POTENTIAL_ERROR". 
//     These are the keys in the unordered_map below.
// (2) Each event type can have an unlimited number of listeners.
//     E.g., "ACTION_POTENTIAL_FIRED" might need to notify 100 listeners, while "ACTION_POTENTIAL_ERROR", only 10.
//     This is the ObserversList below.
// (3) It's very easy to opt-in to an event. Simply implement a concrete instance of an IObserver,
//     and call AddObserver with the message type you'd like to listen for.
//     E.g., create a class called ActionPotentialObserver, and register this same instance with a single
//     (or many) observers.
// (4) Virtually complete decoupling, except for the message name, e.g. "ACTION_POTENTIAL_FIRED".
//
// Second, the big limitations:
// (1) Each observer basically gets a *ping* that something has happened. An observer doesn't know what has
//     happened, which is part of the decoupling. The observer then needs to figure out on its own what changed,
//     call into another subsystem (possibly with an ID or something).
// (2) We don't know what triggered the event. E.g., a change in temperature, a new neuron was created...
// (3) At this point the implementation is limited, and still a work in progress. The goal is to maintain
//     the decoupilng, while sending more rich objects, without (a) typecasting, (b) deciding how many
//     ISubject instances it makes to create.
//

namespace neuwillow
{
  class ISubject
  {
    public:      
      virtual void AddObserver(int messageType, std::shared_ptr<IObserver> observer)
      {
        auto it = _observersMap.find(messageType);
        if (it == _observersMap.end())
        { 
          ObserversList observersList;
          std::pair<int, ObserversList> p(messageType, observersList);
          _observersMap.insert(p);
        } 
        _observersMap[messageType].push_back(observer); 
      }

      virtual void NotifyAll() 
      {
        //for (const auto& [key, value] : _observersMap) {
        //  for (const auto& observer : value) {
        //    observer->OnNotify();
        //  }
        //}
      }

    private:
      typedef std::list<std::shared_ptr<IObserver>> ObserversList;
      typedef std::map<int, ObserversList> ObserversMap;
      ObserversMap _observersMap;
  };
}

#endif