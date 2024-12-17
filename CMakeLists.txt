cmake_minimum_required(VERSION 3.30)

project(neuwillow)

# It would be great to do this dynamically, avoiding GLOB.
# TODO: Investigate other solutions.
set(SOURCES
    src/neuron/neuron_structure.cpp
    src/neuron/dendrite/dendrite_structure.cpp
    src/neuron/dendrite/dendrite_receptor.cpp
    src/neuron/ion_channel.cpp
    src/neuron/soma/soma_structure.cpp
    src/neuron/action_potential/action_potential_trigger.cpp
    src/neuron/axon/axon_structure.cpp
    src/neuron/axon/axon_hillock.cpp
    src/neuron/axon/axon_terminal.cpp
    src/neuron/axon/myelination/internode.cpp
    src/neuron/axon/myelination/myelin_sheath.cpp
    src/neuron/axon/myelination/ranvier_node.cpp
    src/neuron/synapse/chemical_synapse.cpp
    src/neuron/synapse/pre_synaptic_vesicle.cpp
    src/neuron/synapse/neurotransmitter.cpp
    src/events/synapse_fired.cpp
    src/events/action_potential_fired.cpp    
    src/util/unique_id_generator.cpp
    src/simulator.cpp
)

add_executable(neuwillow ${SOURCES})

target_include_directories(neuwillow
    PRIVATE
        ${PROJECT_SOURCE_DIR}/include)
