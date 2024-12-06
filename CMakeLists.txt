cmake_minimum_required(
    VERSION 3.30)

project(
    NeuWillow 
    VERSION 3.30 
    LANGUAGES C CXX)

set(
    CMAKE_CXX_STANDARD 23)

set(
    CMAKE_CXX_STANDARD ON)
)
set(
    SOURCES 
    ActionPotential.cpp 
    Axon.cpp AxonTerminal.cpp
    ChemicalSynapse.cpp 
    Configuration.cpp
    Dendrite.cpp DendriteReceptor.cpp DendriticSomaticCalculator.cpp 
    Logger.cpp 
    Neuron.cpp 
    Neurotransmitter.cpp 
    NeuWillow.cpp 
    PreSynapticVesicle.cpp 
    Simulation.cpp 
    Soma.cpp 
    UniqueIdGenerator.cpp 
    Myelination/Internode.cpp Myelination/MyelinSheath.cpp Myelination/RanvierNode.cpp)

add_executable(neuwillow ${SOURCES})