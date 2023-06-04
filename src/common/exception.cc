#include "common/exception.h"

namespace sql {

Exception& Exception::operator=(const Exception& exc) {
  if (&exc != this) {
    Exception* newPNested = exc._pNested ? exc._pNested->clone() : 0;
    delete _pNested;
    _msg = exc._msg;
    _pNested = newPNested;
    _code = exc._code;
  }
  return *this;
}

const char* Exception::name() const noexcept { return "Exception"; }

const char* Exception::className() const noexcept {
  return typeid(*this).name();
}

const char* Exception::what() const noexcept { return _msg.c_str(); }

Exception* Exception::clone() const { return new Exception(*this); }

void Exception::rethrow() const { throw *this; }

Exception::~Exception() noexcept {
  if (_pNested) delete _pNested;
}

}  // namespace sql