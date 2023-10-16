#include "greeter.hpp"

namespace ink {

std::string Greeter::MakeGreetingFor(std::string_view who) const {
  std::string res = "Hello, ";
  res += who;
  res += "!";
  return res;
}

}  // namespace ink
