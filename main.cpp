#include "core/include/greeter.hpp"

#include <iostream>

int main() {
  ink::Greeter greeter;
  auto greeting = greeter.MakeGreetingFor("World");
  std::cout << greeting << '\n';
}
