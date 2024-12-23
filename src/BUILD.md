# neuwillow

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