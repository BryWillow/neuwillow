#pragma once

#include <memory>
#include "RanvierNode.hpp"

namespace neuWillow
{
  namespace Myelination
  {
    /// Notes:
    ///
    /// The Myelin sheath isn't one solid covering protecting an axon.
    /// Rather, it's broken into sections, called Internodes.
    /// Internodes have tiny gaps between them, called "Nodes of Ranvier".
    /// A useful metaphor might be a train: 
    // the train is the sheath, each car an internode, and gaps between cars are the Nodes of Ranvier.

    class Internode
    {
      public:
        Internode(std::shared_ptr<RanvierNode> previousNode, std::shared_ptr<RanvierNode> nextNode);
        ~Internode();

      private:
        // Null if this is the first node in the sheath.
        std::shared_ptr<RanvierNode> _previousRanvierNode;

        // Null if this is the last node in the sheath.
        std::shared_ptr<RanvierNode> _nextRanvierNode;
    };
  }
}