#include "../include/Synapse.hpp"

namespace neuWillow
{
    Synapse::Synapse(unsigned long uniqueId)
    {
        _id = uniqueId;
    }

    Synapse::~Synapse()
    {

    }

    unsigned long Synapse::getId() const
    {
        return _id;
    }

    std::shared_ptr<Synapse> SynapseFactory::create()
    {
        unsigned long synapseId = _idGenerator.generateId();
        std::shared_ptr<Synapse> newSynapse = std::make_shared<Synapse>(synapseId);
        _createdSynapses[synapseId] = newSynapse;
        return newSynapse;
    }    

    std::shared_ptr<Synapse> SynapseFactory::find(unsigned long synapseId)
    {
        auto it = _createdSynapses.find(synapseId);
        if (it == _createdSynapses.end())
            return nullptr;
        return it->second;
    }

    bool SynapseFactory::destroy(unsigned long synapseId)
    {
        auto it = _createdSynapses.find(synapseId);
        if (it == _createdSynapses.end())
            return false;
        _createdSynapses.erase(it);
        return true;
    }
}