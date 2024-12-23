# neuwillow

****Workflow:****

The purpose is to examine a *single* neuron.

1. Configure the pre-synaptic neuron, and post-synaptic neuron (neuron under test).
    a. Configuration options are located in src\config\simulation_parameters.hpp.
       i. How many synapses do the neurons have, the size of the synaptic cleft,
          neurotransmitters involved, 
       How many dendrites, dendrite receptor sites, the ion channels, soma,
          action potentials, myelin / sheath / axon, neurotransmitters in vesicles, ...

2. Call simulation.start(config_file_you_just_created)
3. The pre-synaptic neuron, as expected does not do much, except send neurotransmitters
   into the synapse / neuron under test. As expected, the neurotransmitters are the only 
   communication between the pre-synaptic neuron and neuron under test.
4. Depending on your configuration, 



