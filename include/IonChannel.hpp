#ifndef _ION_CHANNEL_H
#define _ION_CHANNEL_H

#include <time.h>

namespace neuWillow
{
  class IonChannel
  {
    public:

      // incorporate difftime
      void openChannel(double openDuration, double channelOpen);
  };
}

#endif