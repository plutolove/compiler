#pragma once
#include <memory>
#include <string>
namespace sql {

struct AstNode;

using AstNodePtr = std::shared_ptr<AstNode>;
using AstNodeRawPtr = AstNode*;

enum class AstNodeType {
  Unknow,
  SelectStmt,
};

struct AstNode {
  AstNode() : ntype_(AstNodeType::Unknow) {}
  AstNode(AstNodeType type) : ntype_(type) {}
  virtual ~AstNode() = default;
  virtual std::string toString() const = 0;
  AstNodeType getType() const { return ntype_; }
  AstNodeType ntype_;
};

}  // namespace sql