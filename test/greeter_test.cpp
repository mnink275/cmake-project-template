#include <gtest/gtest.h>

#include <core/include/greeter.hpp>

namespace ink::test {

TEST(Greeter, MakeGreetingFor) {
  Greeter greeter;
  EXPECT_EQ(greeter.MakeGreetingFor("C++"), "Hello, C++!");
}

}  // namespace ink::test
