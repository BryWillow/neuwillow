#include "include/Dendrite.hpp"
#include "include/Neurotransmitter.hpp"

using namespace std;

namespace neuWillow
{

  Dendrite::Dendrite(unsigned long uniqueId)
  {
    m_uniqueId = uniqueId;
  }

  Dendrite::~Dendrite()
  {

  }

  void Dendrite::processNeurotransmitters(const std::vector<Neurotransmitter>& neurotransmitters)
  {

  }

} // namespace neuWillow