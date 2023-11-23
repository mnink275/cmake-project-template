#include <greeter.hpp>

#include <fmt/core.h>

int main() {
  ink::Greeter greeter;
  auto greeting = greeter.MakeGreetingFor("World");
  fmt::print("Greeting: {}\n", greeting);
}
