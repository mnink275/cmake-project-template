#include <greeter.hpp>

#include <fmt/format.h>

namespace ink {

namespace {

#ifdef NDEBUG
constexpr bool kDebugEnabled = false;
#else
constexpr bool kDebugEnabled = true;
#endif

}  // namespace

std::string Greeter::MakeGreetingFor(std::string_view who) const {
  std::string_view build_type = kDebugEnabled ? "Debug" : "Release";
  return fmt::format("Hello, {}! {} build.", who, build_type);
}

}  // namespace ink
