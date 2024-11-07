#include <memory>
#include "include/DendriticReceptor.hpp"
#include "include/UniqueIdGenerator.hpp"
#include "include/Neurotransmitter.hpp"

namespace neuWillow
{
  DendriticReceptor::DendriticReceptor(unsigned long uniqueId)
  {
    m_uniqueId = uniqueId;
  }

  void DendriticReceptor::bind()
  {
    // TODO: check the state of the binding site
  }

  long DendriticReceptor::getUniqueId() const
  {
    return m_uniqueId;;
  }
}