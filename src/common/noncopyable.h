#pragma once

namespace common {

class noncopyable {
 public:
  noncopyable() = default;
  ~noncopyable() = default;

  noncopyable(const noncopyable&) = delete;
  noncopyable& operator=(const noncopyable) = delete;
};

}  // namespace common