#include "greeter.hpp"

#include <fmt/format.h>

namespace ink {

std::string Greeter::MakeGreetingFor(std::string_view who) const {
  return fmt::format("Hello, {}!", who);
}

}  // namespace ink
