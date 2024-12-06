#include "../include/UniqueIdGenerator.hpp"

namespace neuwillow
{
    unsigned long UniqueIdGenerator::generateId()
    {
        unsigned long valueToReturn = m_uniqueId++;
        return valueToReturn;
    }
}