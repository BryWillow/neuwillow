#include "AxonTerminal.hpp"

namespace neuwillow::Axons
{
    AxonTerminal::AxonTerminal(uint64_t uniqueId)
    {
        _id = uniqueId;
    }

    AxonTerminal::~AxonTerminal()
    {

    }

    uint64_t AxonTerminal::getId() const
    {
        return _id;
    }

    std::shared_ptr<AxonTerminal> AxonTerminalFactory::create()
    {
        uint64_t axonTerminalId = _idGenerator.generateId();
        std::shared_ptr<AxonTerminal> newAxonTerminal = std::make_shared<AxonTerminal>(axonTerminalId);
        _createdAxonTerminals[axonTerminalId] = newAxonTerminal;
        return newAxonTerminal;
    }    

    std::shared_ptr<AxonTerminal> AxonTerminalFactory::find(uint64_t axonTerminalId)
    {
        auto it = _createdAxonTerminals.find(axonTerminalId);
        if (it == _createdAxonTerminals.end())
            return nullptr;
        return it->second;
    }

    bool AxonTerminalFactory::destroy(uint64_t axonTerminalId)
    {
        auto it = _createdAxonTerminals.find(axonTerminalId);
        if (it == _createdAxonTerminals.end())
            return false;
        _createdAxonTerminals.erase(it);
        return true;
    }
} // namespace Axons::NeuWillow