#include "../include/ChemicalSynapse.hpp"

namespace neuwillow
{
    ChemicalSynapse::ChemicalSynapse(unsigned long uniqueId)
    {
        _id = uniqueId;
    }

    ChemicalSynapse::~ChemicalSynapse()
    {
        
    }

    unsigned long ChemicalSynapse::getId() const
    {
        return _id;
    }

    std::shared_ptr<ChemicalSynapse> ChemicalSynapseFactory::create()
    {
        unsigned long synapseId = _idGenerator.generateId();
        std::shared_ptr<ChemicalSynapse> newSynapse = std::make_shared<ChemicalSynapse>(synapseId);
        _createdSynapses[synapseId] = newSynapse;
        return newSynapse;
    }    

    std::shared_ptr<ChemicalSynapse> ChemicalSynapseFactory::find(unsigned long synapseId)
    {
        auto it = _createdSynapses.find(synapseId);
        if (it == _createdSynapses.end())
            return nullptr;
        return it->second;
    }

    bool ChemicalSynapseFactory::destroy(unsigned long synapseId)
    {
        auto it = _createdSynapses.find(synapseId);
        if (it == _createdSynapses.end())
            return false;
        _createdSynapses.erase(it);
        return true;
    }
}