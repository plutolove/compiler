#pragma once
#include <memory>
#include <string>

namespace sql {

struct AstNode;

using AstNodePtr = std::shared_ptr<AstNode>;
using AstNodeRawPtr = AstNode*;

enum class AstNodeType : int32_t {
  Unknow = 0,
  SelectStmt,
  BinaryOP,
  UnaryOp
};

struct AstNode {
  AstNode() : ntype_(AstNodeType::Unknow) {}
  AstNode(AstNodeType type) : ntype_(type) {}
  virtual ~AstNode() = default;
  virtual std::string toString() const { return "AstNde"; }
  AstNodeType getType() const { return ntype_; }

  AstNodeType ntype_;
};

}  // namespace sql