#include "../../mama.h"

namespace mavka::mama {
  MaCompilationResult compile_as_node(MaMa* M,
                                      MaCode* code,
                                      mavka::ast::AsNode* as_node) {
    return error(mavka::ast::make_ast_some(as_node),
                 "Вказівка \"як\" тимчасово недоступна.");
  }
} // namespace mavka::mama
