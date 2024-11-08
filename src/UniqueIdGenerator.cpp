#include "../include/UniqueIdGenerator.hpp"

namespace neuWillow
{
    unsigned long UniqueIdGenerator::generateId()
    {
        unsigned long valueToReturn = m_uniqueId++;
        return valueToReturn;
    }
}