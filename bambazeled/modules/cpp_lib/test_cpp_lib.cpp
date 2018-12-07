#include "catch.hpp"
#include "cpp_lib.h"

/// Set of test cases for the c++ library

TEST_CASE("Unit tests for the cpp library", "[cpp_lib]") {
  SECTION("Constructor default") {
    auto o = bambazeled::cpp_lib::CppLib();
    REQUIRE(o.getValue() == 0);
  }

  SECTION("Constructor value") {
    auto o = bambazeled::cpp_lib::CppLib(10);
    REQUIRE(o.getValue() == 10);
  }

  SECTION("Constructor invalid value") { REQUIRE_THROWS(bambazeled::cpp_lib::CppLib(-10)); }

  SECTION("Increment by") {
    auto o = bambazeled::cpp_lib::CppLib(10);
    o.incrementBy(10);
    REQUIRE(o.getValue() == 20);
    o.incrementBy(100);
    REQUIRE(o.getValue() == 120);
    o.incrementBy(-10);
    REQUIRE(o.getValue() == 110);
  }

  SECTION("Reset at limit") {
    auto o = bambazeled::cpp_lib::CppLib(9900);
    o.incrementBy(150);
    REQUIRE(o.getValue() == 150);
  }
}
