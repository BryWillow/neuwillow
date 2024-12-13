# neuwillow

**Background:**
The purpose of NeuWillow is to be a neuroscience modeling platform.
"Neu" stands for Neuron, and "Willow" stands for my favorite tree, the Weeping Willow.
A Weeping Willow tree comes in so many sizes, variations, and number of connected branches, resembing denrdites.
This particular tree can a lot of mystery to it, as often its branches touch the ground and you can't see inside.
The toal of this project is to help remove and better understand some of this mystery.

**Project Overview:**
NeuWillow is designed to be a neuroscience modeling platform. "Neu", you can probably guess is an abbreviation for neuron, and "Willow" is my favorite tree. This might seem like an odd name, but (1) it's memorable, and (2) the tree branches and leaves resemble the a neuron's dendrites. Maybe the name is kind of corny, but it makes sense to me.

**Project Goals: High-Level:**
1. Create your own neural network, specifying the number of neurons you would like to participate.
2. Provide an initial state / configuration about each neuron in JSON format. A README for config files will follow shortly.
3. Observe the state and behavior of the neural network at each step: e.g.,
    a. ion channels opening or closing 
    b. whether or not an actioni potential might be fired 
    c. which neurotransmitters are packaged into pre-synaptic vesicles
    d. which neurotransmitters bind to the post-synaptic neurons, are diffused, or go through the re-uptake process.

**Building NeuWillow:**
1. I created this project on MacOS Sequoia 15.0.1 using the clang 16.0.26.4 compiler.
2. I used the following tools to create the project: VSCode, and the C/C++, C/C++ Extensions modules in VSCode. 
3. I manually installed CMake from their website.
4. This project has the following dependencies, all using headers only from github. Use Fetch if need be.
   * Logging      : spdlog
   * Testing      : googletest
   * Config       : tomlplusplus
   * DI Container : googlefruit
5. All dependencies are cross-platform, and provide their own CMakeLists.txt, along with examples.
6. To upgrade any dependencies you can (a) download the new headers, or (b) adjust CMakeLists to use Fetch.
7. Open the top-level "neuWillow" folder and (1) VSCode will  automatically build the entire project.
8. Optionally you can make use of the top-level "neuWillow" CMakeLists.txt file directly.

