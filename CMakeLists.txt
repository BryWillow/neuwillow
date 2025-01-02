cmake_minimum_required(VERSION 3.31.3)

project(neuwillow)

set(CMAKE_CXX_STANDARD 17)
set(CXX_STANDARD_REQUIRED ON)

include_directories(include)

set(SOURCES
    src/Neuron.cpp
    src/Dendrite.cpp
    src/DendriteReceptor.cpp
    src/IonChannel.cpp
    src/Soma.cpp
    src/action_potential_trigger.cpp
    src/Axons/Axon.cpp
    src/Axons/AxonHillock.cpp
    src/Axons/AxonTerminal.cpp
    src/InterNode.cpp
    src/MyelinSheath.cpp
    src/ChemicaclSynapse.cpp
    src/PreSynapticVesicle.cpp
    src/Neurotransmitter.cpp
    src/synapse_fired.cpp
    src/action_potential_fired.cpp    
    src/UniqueIdGenerator.cpp
    src/Simulation.cpp
)

add_executable(neuwillow ${SOURCES})