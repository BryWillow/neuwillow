cmake_minimum_required(
    VERSION 3.10)

project(
    NeuWillow 
    VERSION 0.1.0 
    LANGUAGES C CXX)

set(
    SOURCES 
    ActionPotential.cpp 
    Axon.cpp AxonTerminal.cpp
    ChemicalSynapse.cpp 
    Dendrite.cpp DendriteReceptor.cpp DendriticSomaticCalculator.cpp 
    Logger.cpp 
    Neuron.cpp 
    Neurotransmitter.cpp 
    NeuWillow.cpp 
    PreSynapticVesicle.cpp 
    SimulationStarter.cpp 
    Soma.cpp 
    UniqueIdGenerator.cpp 
    Myelination/Internode.cpp Myelination/MyelinSheath.cpp Myelination/RanvierNode.cpp)

add_executable(NeuWillow ${SOURCES})