cmake_minimum_required(VERSION 3.30)

project(neuwillow)

set(SPDLOG_FMT_EXTERNAL_HO, TRUE)

include_directories(ext/spdlog/)

set(SOURCES
    src/neuron_structure.cpp
    src/Dendrite.cpp
    src/DendriteFactory.cpp    
    src/dendrite_receptor.cpp
    src/ion_channel.cpp
    src/soma_structure.cpp
    src/action_potential_trigger.cpp
    src/axon_structure.cpp
    src/axon_hillock.cpp
    src/axon_terminal.cpp
    src/internode.cpp
    src/myelin_sheath.cpp
    src/ranvier_node.cpp
    src/chemical_synapse.cpp
    src/pre_synaptic_vesicle.cpp
    src/neurotransmitter.cpp
    src/synapse_fired.cpp
    src/action_potential_fired.cpp    
    src/unique_id_generator.cpp
    src/simulator.cpp
)

add_executable(neuwillow ${SOURCES})