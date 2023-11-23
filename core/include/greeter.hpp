#pragma once

#include <string>
#include <string_view>

namespace ink {

class Greeter final {
 public:
  std::string MakeGreetingFor(std::string_view who) const;
};

}  // namespace ink
