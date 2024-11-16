# neuwillow

NeuWillow is designed to be a fun-filled neuroscience modeling platform. "Neu", you can probably guess is an abbreviation for neuron, and "Willow" is my favorite tree. This might seem like an odd name, but (1) it's memorable, and (2) the tree branches and leaves resemble the a neuron's dendrites. Maybe the name is kind of corny, but it makes sense to me.

Project Goals: High-Level:
1. Create your own neural network, specifying the number of neurons you would like to participate.
2. Provide an initial state / configuration about each neuron in JSON format. A README for config files will follow shortly.
3. Observe the state and behavior of the neural network at each step: e.g.,
    a. ion channels opening or closing 
    b. whether or not an actioni potential might be fired 
    c. which neurotransmitters are packaged into pre-synaptic vesicles
    d. which neurotransmitters bind to the post-synaptic neurons, are diffused, or go through the re-uptake process.

Building the Repository:
1. The project uses CMake, and can be built on all operating systems.
2. Run the usual "git clone" on the github website.
3. Run cmake to build the project and you're done.

Configuration:
As mentioned above, configuration is specified using JSON. Below is an example, but a complete tutorial will follow.
{
  "neurons" : [
    {
      "dendrites" : [
        {          
          "dendriteReceptor" [
            "synapticInput": "dopamine",
            "synapticInput": "adrenaline"
          ]
        }
      ],
      "insideVoltage" : -70
      "outsideVoltage" : 100
      "ionChannels: [
        ...
      ]
      "soma" : "..."
      "axon" : "..."
      "myelinSheath" : "true"
    }, // end neuron 1
  ]
}