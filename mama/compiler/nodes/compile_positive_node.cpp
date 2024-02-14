#include "../../mama.h"

namespace mavka::mama {
  MaCompilationResult compile_positive_node(
      MaMa* M,
      MaCode* code,
      const mavka::ast::PositiveNode* positive_node) {
    const auto result = compile_node(M, code, positive_node->value);
    if (result.error) {
      return result;
    }
    code->instructions.push_back(MaInstruction{OP_POSITIVE});
    return success();
  }
} // namespace mavka::mama