#include <chrono>
#include <iostream>
#include <random>
#include <thread>

#include "cxxopts.hpp"
#include "spdlog/async.h"
#include "spdlog/sinks/stdout_color_sinks.h"
#include "spdlog/spdlog.h"

#include "bambazeled/modules/cpp_lib/cpp_lib.h"

int main(int argc, char* argv[]) {

 // Cxxopts parameter contrainers
  int init_value = 0;

  // Init the cxxopts
  cxxopts::Options options("ExampleApp",
                           "An example c++ applicationg that uses a local library module");
  // Add some cxxopts options
  // clang-format off
  options.add_options()
    ("h,help", "Print help")
    ("v,value", "Initial positive value",cxxopts::value<int>(init_value))
  ;
  // clang-format on

  // Parse our command line input and feed them to cxxopts
  auto result = options.parse(argc, argv);

  // Print help and exit, if requested
  if (result.count("help")) {
    std::cout << options.help() << std::endl;
    exit(-1);
  }

  // Setup a logger using an async sink (and the ability to add more if desired)
  spdlog::init_thread_pool(8192, 1);
  auto stdout_sink = std::make_shared<spdlog::sinks::stdout_color_sink_mt>();
  // auto rotating_file_sink = std::make_shared<spdlog::sinks::rotating_file_sink_mt>("mylog.txt",
  // 1024*1024*10, 3);
  std::vector<spdlog::sink_ptr> sinks{stdout_sink /*, rotating_file_sink*/};
  auto logger = std::make_shared<spdlog::async_logger>("cpp_app", sinks.begin(), sinks.end(),
                                                       spdlog::thread_pool(),
                                                       spdlog::async_overflow_policy::block);
  spdlog::register_logger(logger);
  logger->info("Test message");

  // Create our library object and feed it our initial value
  auto obj = bambazeled::cpp_lib::CppLib(init_value);
  logger->info("Starting value: {}", obj.getValue());

  // Iterate a few times to show it doing stuff
  while (true) {
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(0, 100);
    // Feed random unbiased integer into the lib
    obj.incrementBy(uni(rng));
    // Print our new value
    logger->info("New value: {}", obj.getValue());
    // Sleep for a bit
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
  }

  return 0;
}
