#include <chrono>
#include <iostream>
#include <random>
#include <thread>

#include "bambazeled/modules/cpp_lib/cpp_lib.h"
#include "cxxopts.hpp"

int main(int argc, char* argv[]) {
  // Containers for cxxopts
  int init_value = 0;
  // Init the cxxopts
  cxxopts::Options options("ExampleApp",
                           "An example c++ applicationg that uses a local library module");
  // Add some options
  // clang-format off
  options.add_options()
    ("h,help", "Print help")
    ("v,value", "Initial positive value",cxxopts::value<int>(init_value))
  ;
  // clang-format on

  // Parse our command line input
  auto result = options.parse(argc, argv);

  // Print help and exit, if requested
  if (result.count("help")) {
    std::cout << options.help() << std::endl;
    exit(-1);
  }

  // Create our object and feed it our initial value
  auto obj = bambazeled::cpp_lib::CppLib(init_value);
  std::cout << "Starting value: " << obj.getValue() << std::endl;

  // Iterate a few times to show it doing stuff
  while (true) {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(0, 100);
    // Feed random unbiased integer into the lib
    obj.incrementBy(uni(rng));
    // Print our new value
    std::cout << "New value: " << obj.getValue() << std::endl;
    // Sleep for a bit
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
  }

  return 0;
}
