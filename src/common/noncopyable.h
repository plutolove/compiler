#pragma once

namespace util {

class noncopyable {
 public:
  noncopyable() = default;
  ~noncopyable() = default;

  noncopyable(const noncopyable&) = delete;
  noncopyable& operator=(const noncopyable) = delete;
};

}  // namespace util
