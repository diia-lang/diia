#include "../parser.h"

namespace mavka::parser {
  std::any MavkaASTVisitor::visitAssign(MavkaParser::AssignContext* context) {
    const auto op = context->assign_op()->getText();
    const auto визначити_субʼєкт_асд_дані = new ВизначитиСубʼєктАСДДані();
    визначити_субʼєкт_асд_дані->ідентифікатор =
        AAV(visitContext(context->as_identifier));
    if (op == "=" || op == "це") {
      визначити_субʼєкт_асд_дані->значення =
          AAV(visitContext(context->as_value));
    } else if (op == "+=" || op == "-=" || op == "*=" || op == "/=" ||
               op == "%=" || op == "//=" || op == "**=" || op == "^=" ||
               op == "|=" || op == "&=" || op == "<<=" || op == ">>=" ||
               op == ">>>=") {
      const auto операція_асд_дані = new ОпераціяАСДДані();
      операція_асд_дані->ліво =
          AAV(visitIdentifierAsSubject(context->as_identifier));
      операція_асд_дані->право = AAV(visitContext(context->as_value));
      if (op == "+=") {
        операція_асд_дані->операція = ОпераціяДодати;
      } else if (op == "-=") {
        операція_асд_дані->операція = ОпераціяВідняти;
      } else if (op == "*=") {
        операція_асд_дані->операція = ОпераціяПомножити;
      } else if (op == "/=") {
        операція_асд_дані->операція = ОпераціяПоділити;
      } else if (op == "%=") {
        операція_асд_дані->операція = ОпераціяПоділитиЗаМодулем;
      } else if (op == "//=") {
        операція_асд_дані->операція = ОпераціяПоділитиНаціло;
      } else if (op == "**=") {
        операція_асд_дані->операція = ОпераціяПіднестиДоСтепеня;
      } else if (op == "^=") {
        операція_асд_дані->операція = ОпераціяДвійковеВиключнеАбо;
      } else if (op == "|=") {
        операція_асд_дані->операція = ОпераціяДвійковеАбо;
      } else if (op == "&=") {
        операція_асд_дані->операція = ОпераціяДвійковеІ;
      } else if (op == "<<=") {
        операція_асд_дані->операція = ОпераціяДвійковийЗсувВліво;
      } else if (op == ">>=") {
        операція_асд_дані->операція = ОпераціяДвійковийЗсувВправо;
      } else if (op == ">>>=") {
        операція_асд_дані->операція = ОпераціяДвійковийЗсувВправоЗЗаповненням;
      } else {
        throw std::runtime_error("Unknown operation: " + op);
      }
      визначити_субʼєкт_асд_дані->значення =
          AV(this, context, АСДВидОперація, операція_асд_дані);
    }
    return AV(this, context, АСДВидВизначитиСубʼєкт,
              визначити_субʼєкт_асд_дані);
  }
} // namespace mavka::parser