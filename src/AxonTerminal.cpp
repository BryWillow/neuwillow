#include "../include/AxonTerminal.hpp"

namespace neuWillow
{
    AxonTerminal::AxonTerminal(unsigned long uniqueId)
    {
        _id = uniqueId;
    }

    AxonTerminal::~AxonTerminal()
    {

    }

    unsigned long AxonTerminal::getId() const
    {
        return _id;
    }

    std::shared_ptr<AxonTerminal> AxonTerminalFactory::create()
    {
        unsigned long axonTerminalId = _idGenerator.generateId();
        std::shared_ptr<AxonTerminal> newAxonTerminal = std::make_shared<AxonTerminal>(axonTerminalId);
        _createdAxonTerminals[axonTerminalId] = newAxonTerminal;
        return newAxonTerminal;
    }    

    std::shared_ptr<AxonTerminal> AxonTerminalFactory::find(unsigned long axonTerminalId)
    {
        auto it = _createdAxonTerminals.find(axonTerminalId);
        if (it == _createdAxonTerminals.end())
            return nullptr;
        return it->second;
    }

    bool AxonTerminalFactory::destroy(unsigned long axonTerminalId)
    {
        auto it = _createdAxonTerminals.find(axonTerminalId);
        if (it == _createdAxonTerminals.end())
            return false;
        _createdAxonTerminals.erase(it);
        return true;
    }
}