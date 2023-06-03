#pragma once
#include <exception>
#include <string>

#include "fmt/format.h"

namespace util {

class Exception : public std::exception {
 public:
  template <typename... Args>
  Exception(int code, const std::string& fmt, Args&&... args)
      : Exception(fmt::format(fmt, std::forward<Args>(args)...), code) {}

  Exception(const std::string& msg, int code) : _code(code), _msg(msg) {}
  Exception& operator=(const Exception& exc);
  virtual const char* name() const noexcept;

  virtual const char* className() const noexcept;

  virtual const char* what() const noexcept;
  virtual Exception* clone() const;

  virtual void rethrow() const;
  ~Exception() noexcept;

 private:
  int _code;
  std::string _msg;
  Exception* _pNested{nullptr};
};

}  // namespace util