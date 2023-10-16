#pragma once

#include <string_view>
#include <string>

namespace ink {

class Greeter final {
 public:
  std::string MakeGreetingFor(std::string_view who) const;
};

}  // namespace ink
