#include "UniqueIdGenerator.hpp"

namespace NeuWillow
{
    unsigned long UniqueIdGenerator::generateId()
    {
        unsigned long valueToReturn = m_uniqueId++;
        return valueToReturn;
    }
}