#ifndef BAMBAZELED_CPP_LIB_CPP_LIB_H_
#define BAMBAZELED_CPP_LIB_CPP_LIB_H_

namespace bambazeled {
namespace cpp_lib {

class CppLib {
 public:
  CppLib(int init = 0);
  void incrementBy(int value);
  inline int getValue() { return value_; };

 private:
  int value_;
  void reset();
};

}  // namespace cpp_lib
}  // namespace bambazeled

#endif  // BAMBAZELED_CPP_LIB_CPP_LIB_H_
