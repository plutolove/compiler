#pragma once
#include <string>
namespace sql {

struct AstNode {
  virtual std::string to_string() = 0;
};

}  // namespace sql