#define CATCH_CONFIG_MAIN

#include <string>

#include "catch.hpp"
#include "integer.h"

using namespace std;

namespace upn {
  
  TEST_CASE("Add integers") {
    upn::integer i("100");
    upn::integer j("12392932490383");
    upn::integer result = i + j;
    upn::integer correct("12392932490483");
    REQUIRE(result == correct);
  }

  TEST_CASE("Add integers NEQ") {
    upn::integer i("800000000000000");
    upn::integer j("700000000000000");
    upn::integer result = i + j;
    upn::integer correct("32");
    REQUIRE(result != correct);
  }

}
