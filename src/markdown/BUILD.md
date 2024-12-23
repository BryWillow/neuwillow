Building NeuWillow:

I created this project on MacOS Sequoia 15.0.1 using the clang 16.0.26.4 compiler.
I used the following tools to create the project: VSCode, and the C/C++, C/C++ Extensions modules in VSCode.
I manually installed CMake from their website.
This project has the following dependencies, all using headers only from github. Use Fetch if need be.
Logging : spdlog
Testing : googletest
Config : tomlplusplus
DI Container : googlefruit
All dependencies are cross-platform, and provide their own CMakeLists.txt, along with examples.
To upgrade any dependencies you can (a) download the new headers, or (b) adjust CMakeLists to use Fetch.
Open the top-level "neuWillow" folder and (1) VSCode shouldwill automatically build the entire project.
Optionally you can make use of the top-level "neuWillow" CMakeLists.txt file directly.