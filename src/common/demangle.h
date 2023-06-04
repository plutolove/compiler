#pragma once

#include <memory>
#include <string>

namespace detail {

std::string demangle(const char* name, int& status);

struct FreeingDeleter {
  template <typename PointerType>
  void operator()(PointerType ptr) {
    std::free(ptr);
  }
};

typedef std::unique_ptr<char, FreeingDeleter> DemangleResult;

DemangleResult tryDemangle(const char* name);

}  // namespace detail

inline std::string demangle(const char* name) {
  int status = 0;
  return detail::demangle(name, status);
}

inline std::string demangle(const std::string& name) {
  return demangle(name.c_str());
}