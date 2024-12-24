Building NeuWillow:

NeuWillow was created using the following cross-platform technology:

* O/S: MacOS Sequoia 15.0.1
* C++ Compiler: clang 16.0.26.4
* IDE: VSCode: Microsoft's C/C++, and C/C++ Extensions modules.
* CMake/CTest: Downloaded from their website.
* GitHub Repositories:
  * Logging: [spdlog](https://github.com/gabime/spdlog)
  * Testing / MOQs: [googletest](https://github.com/google/googletest)
  * Configuration: [tomlplusplus](https://github.com/marzer/tomlplusplus)
  * Dependency Injection: [googlefruit](https://github.com/google/fruit)
  * *Note*: All repos above are cross-platform and integrate with CMake.
  * *Note*: I used the header-only options, but you can also use Fetch your CMakeLists.txt.
* I used CMake when building NeuWillow.
  * Switch to the CMake icon, and choose Run->Debug and set breakpoints as necessary.