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

Notes Re: Building the Repository:
1. I created this project using the following tools: VSCode, CMake, and GTest on MacOS.
2. You might need to download the above packages manually, as VSCode did not provide packages.
3. Required VSCode Plugins: C/C++, C++ Build Tools (VSCode doesn't provide one.)
5. Optional VSCode plugins: CMake and GTest Build Tools for syntax help.
6. Required: CMake. I installed from their website.
8. I had issues with Ninja and had to re-install using homebrew.
      Add unit tests here: neuWillow/test/testrunner/NeuWillowTestingExe. Not an ideal path. TBD.
      See ExampleTests.exe for how to write unit tests. When adding new files update CMakeLists.txt.
      I read several posts about why simply globbing *.cpp was a bad idea...
9. The project uses CMake, and can be built on all operating systems.
10. Run the usual "git clone" on the github website.
11. Run the top-level cmake to build all the project and you're done.
   
Configuration:
TBD: Likely TOML.

Loggind:
TBD: Likely spdlog.
