#pragma once
#include <exception>
#include <string>

#include "fmt/format.h"

namespace sql {

class Exception : public std::exception {
 public:
  template <typename... Args>
  Exception(int code, const std::string& fmt, Args&&... args)
      : Exception(fmt::format(fmt, std::forward<Args>(args)...), code) {}

  template <typename... Args>
  Exception(const std::string& file, const std::string& function, int64_t line,
            int code, const std::string& fmt, Args&&... args)
      : _code(code),
        _msg(fmt::format("{}, file: {}, function: {}, line: {}", file, function,
                         line, fmt::format(fmt, std::forward<Args>(args)...))) {
  }

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

}  // namespace sql

#define ThrowException(...) \
  (throw sql::Exception(__FILE__, __FUNCTION__, __LINE__, __VA_ARGS__))
