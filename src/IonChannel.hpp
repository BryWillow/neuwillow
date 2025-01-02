#ifndef _ION_CHANNEL_H
#define _ION_CHANNEL_H

#include <time.h>

namespace neuwillow
{
  class IonChannel
  {
    public:

      // incorporate difftime
      void openChannel(double openDuration, double channelOpen);
  };
}

#endif