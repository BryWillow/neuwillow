# neuwillow

****Background:****

The Weeping Willow is my favorite tree. I find them fascinating as often times they can grow so tall, 
with branches so long, they touch the ground and form a canopy we can't see inside. When you part the 
branches, walk inside, you can often disappear in the silence. You become aware of all its intricacies,
overlapping paths, of branches, networks big and small, all of which are a product of its unique pattern of growth.
To me this tree is mysterious, and I've wondered what what makes it thrive, and what it hides.
However, the lifespan of these trees can be relatiely short, and they are susceptible to disease.
That said, "neu" is simply an abbreviation of neuron, and "willow", my favorite tree.
I, personally, felt a lot of parallels between these two things and the human brain. Hence the name, "neuwillow".

****Project Overiew:****

The purpose of the NeuWillow project is to be a fast, versatile, neuroscience modeling platform.
Specifically, you can isolate the behavior of a single or netework of neurons.
From creating creating portions of neurons, like the number of receptors each dendrite has,
ion / leak channels, voltages, action potentials, myelin and axons, vesicles of neurotransmitters, etc.
The idea is that you can either choose whether to have the network "learn" based on existing models,
or create your own models from scratch. All simulations are highly configurable, which will be explained in detail.

****Building NeuWillow:****
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

****General Workflow:****
[General Workflow]/WORKFLOW.md

****Configuration:****
[Configuration] /CONFIGURATION.md

****Current Limitations:****
[Limitations] /LIMITATIONS.md
