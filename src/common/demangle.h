#pragma once

#include <memory>
#include <string>

std::string demangle(const char* name, int& status);

inline std::string demangle(const char* name) {
  int status = 0;
  return demangle(name, status);
}

struct FreeingDeleter {
  template <typename PointerType>
  void operator()(PointerType ptr) {
    std::free(ptr);
  }
};

typedef std::unique_ptr<char, FreeingDeleter> DemangleResult;

DemangleResult tryDemangle(const char* name);