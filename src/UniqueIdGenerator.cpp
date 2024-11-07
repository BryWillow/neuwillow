#include <random>
#include "include/UniqueIdGenerator.hpp"

namespace neuWillow
{
    using namespace std;

    unsigned long UniqueIdGenerator::generateId()
    {
        unsigned long valueToReturn = m_uniqueId++;
        return valueToReturn;
    }
}