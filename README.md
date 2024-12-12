# neuwillow

Project Overview:
NeuWillow is designed to be a fun-filled neuroscience modeling platform. "Neu", you can probably guess is an abbreviation for neuron, and "Willow" is my favorite tree. This might seem like an odd name, but (1) it's memorable, and (2) the tree branches and leaves resemble the a neuron's dendrites. Maybe the name is kind of corny, but it makes sense to me.

Project Goals: High-Level:
1. Create your own neural network, specifying the number of neurons you would like to participate.
2. Provide an initial state / configuration about each neuron in JSON format. A README for config files will follow shortly.
3. Observe the state and behavior of the neural network at each step: e.g.,
    a. ion channels opening or closing 
    b. whether or not an actioni potential might be fired 
    c. which neurotransmitters are packaged into pre-synaptic vesicles
    d. which neurotransmitters bind to the post-synaptic neurons, are diffused, or go through the re-uptake process.

Building NeuWillow:
1. I created this project on MacOS Sequoia 15.0.1 using the clang 16.0.26.4 compiler.
2. I used the following tools to create the project: VSCode, and the C/C++, C/C++ Extensions modules in VSCode. 
3. I manually installed CMake from their website.
3. This project has the following dependencies, all using headers only from github. Use Fetch if need be.
   * Logging      : spdlog
   * Testing      : googletest
   * Config       : tomlplusplus
   * DI Container : googlefruit
   All dependencies are cross-platform, and provide their own CMakeLists.txt, along with examples.
4. To upgrade any dependencies you can (a) download the new headers, or (b) adjust CMakeLists to use Fetch.
