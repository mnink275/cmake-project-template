#include <gtest/gtest.h>

#include <greeter.hpp>

namespace ink::test {

TEST(Greeter, MakeGreetingFor) {
  Greeter greeter;
  EXPECT_EQ(greeter.MakeGreetingFor("C++"), "Hello, C++! Debug build.");
}

}  // namespace ink::test
