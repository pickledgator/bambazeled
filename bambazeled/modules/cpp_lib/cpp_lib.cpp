#include <stdexcept>

#include "cpp_lib.h"

namespace bambazeled {
namespace cpp_lib {

CppLib::CppLib(int init /* = 0 */) {
  if(init < 0) {
    throw std::invalid_argument("Initial value must be positive.");
  }
  value_ = init;
}

void CppLib::incrementBy(int value) {
  if (value_ + value >= 10000) {
    reset();
  }
  value_ += value;
}

void CppLib::reset() { value_ = 0; }

}  // namespace cpp_lib
}  // namespace bambazeled
