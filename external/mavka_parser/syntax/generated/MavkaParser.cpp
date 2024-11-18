
// Generated from MavkaParser.g4 by ANTLR 4.13.0


#include "MavkaParserListener.h"
#include "MavkaParserVisitor.h"

#include "MavkaParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct MavkaParserStaticData final {
  MavkaParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  MavkaParserStaticData(const MavkaParserStaticData&) = delete;
  MavkaParserStaticData(MavkaParserStaticData&&) = delete;
  MavkaParserStaticData& operator=(const MavkaParserStaticData&) = delete;
  MavkaParserStaticData& operator=(MavkaParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag mavkaparserParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
MavkaParserStaticData *mavkaparserParserStaticData = nullptr;

void mavkaparserParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (mavkaparserParserStaticData != nullptr) {
    return;
  }
#else
  assert(mavkaparserParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<MavkaParserStaticData>(
    std::vector<std::string>{
      "file", "program", "atom", "object_arg", "dict_arg", "call_arg", "operation", 
      "op_pow", "op_div_div", "op_lshift", "op_rshift", "op_urshift", "op_lt", 
      "op_lte", "op_gt", "op_gte", "op_eq", "op_neq", "op_land", "op_lor", 
      "op_not_contains", "op_not_is", "gendef", "expr", "structure_define", 
      "structure_element", "diia_define", "diia_param", "assign", "set", 
      "position_set", "if", "while", "body", "body_element", "return", "module", 
      "type", "types", "param", "take", "take_part", "give", "give_element", 
      "try", "throw", "nl", "nls"
    },
    std::vector<std::string>{
      "", "'\\u043A\\u0456\\u043D\\u0435\\u0446\\u044C'", "'\\u0434\\u0456\\u044F'", 
      "'\\u0441\\u0442\\u0440\\u0443\\u043A\\u0442\\u0443\\u0440\\u0430'", 
      "'\\u043F\\u0435\\u0440\\u0435\\u0431\\u0440\\u0430\\u0442\\u0438'", 
      "'\\u0446\\u0438\\u043A\\u043B'", "'\\u044F\\u043A\\u0449\\u043E'", 
      "'\\u0447\\u0435\\u043A\\u0430\\u0442\\u0438'", "'\\u0432\\u0437\\u044F\\u0442\\u0438'", 
      "'\\u0434\\u0430\\u0442\\u0438'", "'\\u044F\\u043A'", "'\\u0442\\u0430'", 
      "'\\u0454'", "'\\u0441\\u043F\\u0435\\u0446'", "'\\u0432\\u0435\\u0440\\u043D\\u0443\\u0442\\u0438'", 
      "'\\u0442\\u0440\\u0438\\u0432\\u0430\\u043B\\u0430'", "'\\u0441\\u0443\\u0431\\u02BC\\u0454\\u043A\\u0442'", 
      "'\\u0456'", "'\\u0430\\u0431\\u043E'", "'\\u0441\\u043F\\u0440\\u043E\\u0431\\u0443\\u0432\\u0430\\u0442\\u0438'", 
      "'\\u0437\\u043B\\u043E\\u0432\\u0438\\u0442\\u0438'", "'\\u0456\\u043D\\u0430\\u043A\\u0448\\u0435'", 
      "'\\u0432\\u043F\\u0430\\u0441\\u0442\\u0438'", "'\\u043F\\u043E\\u043A\\u0438'", 
      "'\\u043C\\u043E\\u0434\\u0443\\u043B\\u044C'", "'\\u0440\\u0456\\u0432\\u043D\\u043E'", 
      "'\\u0431\\u0456\\u043B\\u044C\\u0448\\u0435'", "'\\u043C\\u0435\\u043D\\u0448\\u0435'", 
      "'\\u043C\\u0456\\u0441\\u0442\\u0438\\u0442\\u044C'", "'\\u043C\\u0430\\u043A\\u0435\\u0442'", 
      "'\\u043D\\u0435'", "'\\u043F\\u0440\\u0435\\u0434\\u043E\\u043A'", 
      "'\\u0446\\u0435'", "'\\u043F\\u0435\\u0440\\u0435\\u043B\\u0456\\u043A'", 
      "'\\u043A\\u043E\\u043C\\u043F\\u043E\\u0437\\u0438\\u0446\\u0456\\u044F'", 
      "'\\u0437\\u043E\\u0432\\u043D\\u0456\\u0448\\u043D\\u044F'", "'\\u0432\\u043D\\u0443\\u0442\\u0440\\u0456\\u0448\\u043D\\u044F'", 
      "'\\u043C\\u0456\\u0441\\u0446\\u0435\\u0432\\u0430'", "'\\u0432\\u043B\\u0430\\u0441\\u0442\\u0438\\u0432\\u0456\\u0441\\u0442\\u044C'", 
      "'='", "'>'", "'<'", "'.'", "'+'", "'-'", "'*'", "'/'", "'%'", "'^'", 
      "'&'", "'|'", "'('", "')'", "'['", "']'", "'\\u003F'", "':'", "'~'", 
      "'''", "'\"'", "'!'", "','"
    },
    std::vector<std::string>{
      "", "KW_END", "KW_DIIA", "KW_STRUCTURE", "KW_FOR", "KW_CYCLE", "KW_IF", 
      "KW_WAIT", "KW_TAKE", "KW_GIVE", "KW_AS", "KW_TA", "KW_IS", "KW_SPEC", 
      "KW_RETURN", "KW_ASYNC", "KW_SUBJECT", "KW_AND", "KW_OR", "KW_TRY", 
      "KW_CATCH", "KW_ELSE", "KW_THROW", "KW_WHILE", "KW_MODULE", "KW_EQ_WORD", 
      "KW_GR_WORD", "KW_SM_WORD", "KW_HAS_WORD", "KW_MOCKUP", "KW_NOT", 
      "KW_PARENT", "KW_TSE", "KW_PERELIK", "KW_COMPOSITION", "KW_PUBLIC", 
      "KW_PRIVATE", "KW_PROTECTED", "KW_PROPERTY", "EQUAL", "GREATER", "LESSER", 
      "DOT", "PLUS", "MINUS", "MULTIPLY", "DIVIDE", "MOD", "POWER", "AND", 
      "OR", "PAREN_OPEN", "PAREN_CLOSE", "BRACKET_OPEN", "BRACKET_CLOSE", 
      "QUESTION", "COLON", "TILDA", "QUOTE", "DOUBLE_QUOTE", "EXCLAMATION", 
      "COMA", "NUMBER", "INTEGER", "FLOAT", "HEX", "BIN", "ID", "STRING_MULTILINE", 
      "STRING", "CHARACTER", "COMMENT", "LINE_COMMENT", "NL", "WS"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,74,784,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,7,
  	28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,2,34,7,34,2,35,7,
  	35,2,36,7,36,2,37,7,37,2,38,7,38,2,39,7,39,2,40,7,40,2,41,7,41,2,42,7,
  	42,2,43,7,43,2,44,7,44,2,45,7,45,2,46,7,46,2,47,7,47,1,0,1,0,1,0,1,1,
  	1,1,1,1,1,1,1,1,5,1,105,8,1,10,1,12,1,108,9,1,1,1,1,1,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,3,2,120,8,2,1,2,1,2,3,2,124,8,2,1,2,1,2,3,2,128,8,2,1,
  	2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,1,2,
  	1,2,1,2,1,2,1,2,1,2,1,2,5,2,154,8,2,10,2,12,2,157,9,2,3,2,159,8,2,1,2,
  	1,2,1,2,5,2,164,8,2,10,2,12,2,167,9,2,1,3,1,3,1,3,1,3,1,3,1,3,1,4,1,4,
  	3,4,177,8,4,1,4,1,4,3,4,181,8,4,1,4,3,4,184,8,4,1,4,1,4,1,4,1,4,1,4,1,
  	5,1,5,1,5,1,5,1,5,3,5,196,8,5,1,5,1,5,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,5,6,211,8,6,10,6,12,6,214,9,6,3,6,216,8,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,235,8,6,10,6,
  	12,6,238,9,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,5,6,251,8,6,
  	10,6,12,6,254,9,6,3,6,256,8,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,3,6,277,8,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,
  	6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,1,6,
  	1,6,1,6,1,6,5,6,445,8,6,10,6,12,6,448,9,6,1,7,1,7,1,7,1,8,1,8,1,8,1,9,
  	1,9,1,9,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,12,1,12,1,13,1,13,1,13,1,
  	13,3,13,472,8,13,1,14,1,14,1,15,1,15,1,15,1,15,3,15,480,8,15,1,16,1,16,
  	1,16,3,16,485,8,16,1,17,1,17,1,17,1,17,3,17,491,8,17,1,18,1,18,1,18,3,
  	18,496,8,18,1,19,1,19,1,19,3,19,501,8,19,1,20,1,20,1,20,1,21,1,21,1,21,
  	1,22,1,22,1,23,1,23,1,24,1,24,1,24,1,24,3,24,517,8,24,1,24,1,24,1,24,
  	1,24,1,24,1,24,1,24,5,24,526,8,24,10,24,12,24,529,9,24,3,24,531,8,24,
  	1,24,1,24,1,24,1,25,1,25,1,26,3,26,539,8,26,1,26,3,26,542,8,26,1,26,1,
  	26,1,26,1,26,3,26,548,8,26,1,26,3,26,551,8,26,1,26,1,26,1,26,1,26,1,26,
  	1,26,1,26,1,26,5,26,561,8,26,10,26,12,26,564,9,26,3,26,566,8,26,1,26,
  	1,26,1,26,3,26,571,8,26,1,26,1,26,1,26,1,26,3,26,577,8,26,1,26,1,26,1,
  	26,1,27,1,27,1,28,1,28,1,28,1,28,3,28,588,8,28,1,28,1,28,1,29,1,29,1,
  	29,1,29,1,29,1,29,1,30,1,30,1,30,1,30,1,30,1,30,1,30,1,31,1,31,1,31,1,
  	31,1,31,1,31,3,31,611,8,31,1,31,1,31,1,31,1,31,1,31,3,31,618,8,31,1,31,
  	1,31,1,31,3,31,623,8,31,1,32,1,32,1,32,1,32,1,32,1,32,3,32,631,8,32,1,
  	32,1,32,1,33,1,33,1,33,1,33,5,33,639,8,33,10,33,12,33,642,9,33,1,34,1,
  	34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,1,34,3,34,658,
  	8,34,1,35,1,35,3,35,662,8,35,1,36,1,36,3,36,666,8,36,1,36,1,36,1,36,1,
  	36,3,36,672,8,36,1,36,1,36,1,37,1,37,1,37,1,37,1,37,1,37,1,37,1,37,3,
  	37,684,8,37,1,37,1,37,1,37,1,37,1,37,1,37,5,37,692,8,37,10,37,12,37,695,
  	9,37,1,38,1,38,1,38,1,38,1,38,1,38,5,38,703,8,38,10,38,12,38,706,9,38,
  	1,39,1,39,3,39,710,8,39,1,39,1,39,3,39,714,8,39,1,40,1,40,3,40,718,8,
  	40,1,40,1,40,1,40,5,40,723,8,40,10,40,12,40,726,9,40,1,41,1,41,1,42,1,
  	42,1,42,1,42,1,42,1,42,1,42,5,42,737,8,42,10,42,12,42,740,9,42,1,43,1,
  	43,1,43,1,43,1,43,1,43,3,43,748,8,43,1,44,1,44,1,44,1,44,1,44,3,44,755,
  	8,44,1,44,1,44,3,44,759,8,44,1,44,1,44,1,44,1,44,3,44,765,8,44,1,44,1,
  	44,1,45,1,45,3,45,771,8,45,1,46,4,46,774,8,46,11,46,12,46,775,1,47,5,
  	47,779,8,47,10,47,12,47,782,9,47,1,47,0,3,4,12,74,48,0,2,4,6,8,10,12,
  	14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,46,48,50,52,54,56,58,
  	60,62,64,66,68,70,72,74,76,78,80,82,84,86,88,90,92,94,0,3,2,0,27,27,41,
  	41,2,0,26,26,40,40,2,0,67,67,69,69,846,0,96,1,0,0,0,2,99,1,0,0,0,4,127,
  	1,0,0,0,6,168,1,0,0,0,8,183,1,0,0,0,10,195,1,0,0,0,12,276,1,0,0,0,14,
  	449,1,0,0,0,16,452,1,0,0,0,18,455,1,0,0,0,20,458,1,0,0,0,22,461,1,0,0,
  	0,24,465,1,0,0,0,26,471,1,0,0,0,28,473,1,0,0,0,30,479,1,0,0,0,32,484,
  	1,0,0,0,34,490,1,0,0,0,36,495,1,0,0,0,38,500,1,0,0,0,40,502,1,0,0,0,42,
  	505,1,0,0,0,44,508,1,0,0,0,46,510,1,0,0,0,48,512,1,0,0,0,50,535,1,0,0,
  	0,52,538,1,0,0,0,54,581,1,0,0,0,56,583,1,0,0,0,58,591,1,0,0,0,60,597,
  	1,0,0,0,62,604,1,0,0,0,64,624,1,0,0,0,66,634,1,0,0,0,68,657,1,0,0,0,70,
  	659,1,0,0,0,72,663,1,0,0,0,74,683,1,0,0,0,76,696,1,0,0,0,78,707,1,0,0,
  	0,80,715,1,0,0,0,82,727,1,0,0,0,84,729,1,0,0,0,86,741,1,0,0,0,88,749,
  	1,0,0,0,90,768,1,0,0,0,92,773,1,0,0,0,94,780,1,0,0,0,96,97,3,2,1,0,97,
  	98,5,0,0,1,98,1,1,0,0,0,99,100,3,94,47,0,100,106,3,68,34,0,101,102,3,
  	92,46,0,102,103,3,68,34,0,103,105,1,0,0,0,104,101,1,0,0,0,105,108,1,0,
  	0,0,106,104,1,0,0,0,106,107,1,0,0,0,107,109,1,0,0,0,108,106,1,0,0,0,109,
  	110,3,94,47,0,110,3,1,0,0,0,111,112,6,2,-1,0,112,113,5,51,0,0,113,114,
  	3,94,47,0,114,115,3,46,23,0,115,116,3,94,47,0,116,117,5,52,0,0,117,128,
  	1,0,0,0,118,120,5,67,0,0,119,118,1,0,0,0,119,120,1,0,0,0,120,121,1,0,
  	0,0,121,128,5,69,0,0,122,124,5,67,0,0,123,122,1,0,0,0,123,124,1,0,0,0,
  	124,125,1,0,0,0,125,128,5,70,0,0,126,128,5,67,0,0,127,111,1,0,0,0,127,
  	119,1,0,0,0,127,123,1,0,0,0,127,126,1,0,0,0,128,165,1,0,0,0,129,130,10,
  	3,0,0,130,131,3,94,47,0,131,132,5,42,0,0,132,133,3,94,47,0,133,134,5,
  	67,0,0,134,164,1,0,0,0,135,136,10,2,0,0,136,137,3,94,47,0,137,138,5,53,
  	0,0,138,139,3,94,47,0,139,140,3,46,23,0,140,141,3,94,47,0,141,142,5,54,
  	0,0,142,164,1,0,0,0,143,144,10,1,0,0,144,145,5,51,0,0,145,158,3,94,47,
  	0,146,147,3,10,5,0,147,155,3,94,47,0,148,149,3,94,47,0,149,150,5,61,0,
  	0,150,151,3,94,47,0,151,152,3,10,5,0,152,154,1,0,0,0,153,148,1,0,0,0,
  	154,157,1,0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,159,1,0,0,0,157,155,
  	1,0,0,0,158,146,1,0,0,0,158,159,1,0,0,0,159,160,1,0,0,0,160,161,3,94,
  	47,0,161,162,5,52,0,0,162,164,1,0,0,0,163,129,1,0,0,0,163,135,1,0,0,0,
  	163,143,1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,0,165,166,1,0,0,0,166,5,
  	1,0,0,0,167,165,1,0,0,0,168,169,5,67,0,0,169,170,3,94,47,0,170,171,5,
  	39,0,0,171,172,3,94,47,0,172,173,3,46,23,0,173,7,1,0,0,0,174,184,5,62,
  	0,0,175,177,5,67,0,0,176,175,1,0,0,0,176,177,1,0,0,0,177,178,1,0,0,0,
  	178,184,5,69,0,0,179,181,5,67,0,0,180,179,1,0,0,0,180,181,1,0,0,0,181,
  	182,1,0,0,0,182,184,5,70,0,0,183,174,1,0,0,0,183,176,1,0,0,0,183,180,
  	1,0,0,0,184,185,1,0,0,0,185,186,3,94,47,0,186,187,5,39,0,0,187,188,3,
  	94,47,0,188,189,3,46,23,0,189,9,1,0,0,0,190,191,5,67,0,0,191,192,3,94,
  	47,0,192,193,5,39,0,0,193,194,3,94,47,0,194,196,1,0,0,0,195,190,1,0,0,
  	0,195,196,1,0,0,0,196,197,1,0,0,0,197,198,3,46,23,0,198,11,1,0,0,0,199,
  	200,6,6,-1,0,200,277,5,62,0,0,201,277,3,4,2,0,202,203,5,51,0,0,203,215,
  	3,94,47,0,204,212,3,6,3,0,205,206,3,94,47,0,206,207,5,61,0,0,207,208,
  	3,94,47,0,208,209,3,6,3,0,209,211,1,0,0,0,210,205,1,0,0,0,211,214,1,0,
  	0,0,212,210,1,0,0,0,212,213,1,0,0,0,213,216,1,0,0,0,214,212,1,0,0,0,215,
  	204,1,0,0,0,215,216,1,0,0,0,216,217,1,0,0,0,217,218,3,94,47,0,218,219,
  	5,52,0,0,219,277,1,0,0,0,220,221,5,53,0,0,221,222,3,94,47,0,222,223,5,
  	39,0,0,223,224,3,94,47,0,224,225,5,54,0,0,225,277,1,0,0,0,226,227,5,53,
  	0,0,227,228,3,94,47,0,228,236,3,8,4,0,229,230,3,94,47,0,230,231,5,61,
  	0,0,231,232,3,94,47,0,232,233,3,8,4,0,233,235,1,0,0,0,234,229,1,0,0,0,
  	235,238,1,0,0,0,236,234,1,0,0,0,236,237,1,0,0,0,237,239,1,0,0,0,238,236,
  	1,0,0,0,239,240,3,94,47,0,240,241,5,54,0,0,241,277,1,0,0,0,242,243,5,
  	53,0,0,243,255,3,94,47,0,244,252,3,46,23,0,245,246,3,94,47,0,246,247,
  	5,61,0,0,247,248,3,94,47,0,248,249,3,46,23,0,249,251,1,0,0,0,250,245,
  	1,0,0,0,251,254,1,0,0,0,252,250,1,0,0,0,252,253,1,0,0,0,253,256,1,0,0,
  	0,254,252,1,0,0,0,255,244,1,0,0,0,255,256,1,0,0,0,256,257,1,0,0,0,257,
  	258,3,94,47,0,258,259,5,54,0,0,259,277,1,0,0,0,260,261,5,60,0,0,261,262,
  	3,94,47,0,262,263,3,12,6,30,263,277,1,0,0,0,264,265,5,57,0,0,265,266,
  	3,94,47,0,266,267,3,12,6,29,267,277,1,0,0,0,268,269,5,43,0,0,269,270,
  	3,94,47,0,270,271,3,12,6,28,271,277,1,0,0,0,272,273,5,44,0,0,273,274,
  	3,94,47,0,274,275,3,12,6,27,275,277,1,0,0,0,276,199,1,0,0,0,276,201,1,
  	0,0,0,276,202,1,0,0,0,276,220,1,0,0,0,276,226,1,0,0,0,276,242,1,0,0,0,
  	276,260,1,0,0,0,276,264,1,0,0,0,276,268,1,0,0,0,276,272,1,0,0,0,277,446,
  	1,0,0,0,278,279,10,26,0,0,279,280,3,94,47,0,280,281,3,14,7,0,281,282,
  	3,94,47,0,282,283,3,12,6,27,283,445,1,0,0,0,284,285,10,25,0,0,285,286,
  	3,94,47,0,286,287,5,45,0,0,287,288,3,94,47,0,288,289,3,12,6,26,289,445,
  	1,0,0,0,290,291,10,24,0,0,291,292,3,94,47,0,292,293,3,16,8,0,293,294,
  	3,94,47,0,294,295,3,12,6,25,295,445,1,0,0,0,296,297,10,23,0,0,297,298,
  	3,94,47,0,298,299,5,46,0,0,299,300,3,94,47,0,300,301,3,12,6,24,301,445,
  	1,0,0,0,302,303,10,22,0,0,303,304,3,94,47,0,304,305,5,47,0,0,305,306,
  	3,94,47,0,306,307,3,12,6,23,307,445,1,0,0,0,308,309,10,21,0,0,309,310,
  	3,94,47,0,310,311,5,43,0,0,311,312,3,94,47,0,312,313,3,12,6,22,313,445,
  	1,0,0,0,314,315,10,20,0,0,315,316,3,94,47,0,316,317,5,44,0,0,317,318,
  	3,94,47,0,318,319,3,12,6,21,319,445,1,0,0,0,320,321,10,19,0,0,321,322,
  	3,94,47,0,322,323,3,18,9,0,323,324,3,94,47,0,324,325,3,12,6,20,325,445,
  	1,0,0,0,326,327,10,18,0,0,327,328,3,94,47,0,328,329,3,20,10,0,329,330,
  	3,94,47,0,330,331,3,12,6,19,331,445,1,0,0,0,332,333,10,17,0,0,333,334,
  	3,94,47,0,334,335,3,22,11,0,335,336,3,94,47,0,336,337,3,12,6,18,337,445,
  	1,0,0,0,338,339,10,16,0,0,339,340,3,94,47,0,340,341,3,24,12,0,341,342,
  	3,94,47,0,342,343,3,12,6,17,343,445,1,0,0,0,344,345,10,15,0,0,345,346,
  	3,94,47,0,346,347,3,26,13,0,347,348,3,94,47,0,348,349,3,12,6,16,349,445,
  	1,0,0,0,350,351,10,14,0,0,351,352,3,94,47,0,352,353,3,28,14,0,353,354,
  	3,94,47,0,354,355,3,12,6,15,355,445,1,0,0,0,356,357,10,13,0,0,357,358,
  	3,94,47,0,358,359,3,30,15,0,359,360,3,94,47,0,360,361,3,12,6,14,361,445,
  	1,0,0,0,362,363,10,12,0,0,363,364,3,94,47,0,364,365,5,28,0,0,365,366,
  	3,94,47,0,366,367,3,12,6,13,367,445,1,0,0,0,368,369,10,11,0,0,369,370,
  	3,94,47,0,370,371,3,40,20,0,371,372,3,94,47,0,372,373,3,12,6,12,373,445,
  	1,0,0,0,374,375,10,10,0,0,375,376,3,94,47,0,376,377,5,12,0,0,377,378,
  	3,94,47,0,378,379,3,12,6,11,379,445,1,0,0,0,380,381,10,9,0,0,381,382,
  	3,94,47,0,382,383,3,42,21,0,383,384,3,94,47,0,384,385,3,12,6,10,385,445,
  	1,0,0,0,386,387,10,8,0,0,387,388,3,94,47,0,388,389,3,32,16,0,389,390,
  	3,94,47,0,390,391,3,12,6,9,391,445,1,0,0,0,392,393,10,7,0,0,393,394,3,
  	94,47,0,394,395,3,34,17,0,395,396,3,94,47,0,396,397,3,12,6,8,397,445,
  	1,0,0,0,398,399,10,6,0,0,399,400,3,94,47,0,400,401,5,49,0,0,401,402,3,
  	94,47,0,402,403,3,12,6,7,403,445,1,0,0,0,404,405,10,5,0,0,405,406,3,94,
  	47,0,406,407,5,48,0,0,407,408,3,94,47,0,408,409,3,12,6,6,409,445,1,0,
  	0,0,410,411,10,4,0,0,411,412,3,94,47,0,412,413,5,50,0,0,413,414,3,94,
  	47,0,414,415,3,12,6,5,415,445,1,0,0,0,416,417,10,3,0,0,417,418,3,94,47,
  	0,418,419,3,36,18,0,419,420,3,94,47,0,420,421,3,12,6,4,421,445,1,0,0,
  	0,422,423,10,2,0,0,423,424,3,94,47,0,424,425,3,38,19,0,425,426,3,94,47,
  	0,426,427,3,12,6,3,427,445,1,0,0,0,428,429,10,1,0,0,429,430,3,94,47,0,
  	430,431,5,55,0,0,431,432,3,94,47,0,432,433,3,12,6,0,433,434,3,94,47,0,
  	434,435,5,56,0,0,435,436,3,94,47,0,436,437,3,12,6,2,437,445,1,0,0,0,438,
  	439,10,31,0,0,439,440,3,94,47,0,440,441,5,10,0,0,441,442,3,94,47,0,442,
  	443,3,74,37,0,443,445,1,0,0,0,444,278,1,0,0,0,444,284,1,0,0,0,444,290,
  	1,0,0,0,444,296,1,0,0,0,444,302,1,0,0,0,444,308,1,0,0,0,444,314,1,0,0,
  	0,444,320,1,0,0,0,444,326,1,0,0,0,444,332,1,0,0,0,444,338,1,0,0,0,444,
  	344,1,0,0,0,444,350,1,0,0,0,444,356,1,0,0,0,444,362,1,0,0,0,444,368,1,
  	0,0,0,444,374,1,0,0,0,444,380,1,0,0,0,444,386,1,0,0,0,444,392,1,0,0,0,
  	444,398,1,0,0,0,444,404,1,0,0,0,444,410,1,0,0,0,444,416,1,0,0,0,444,422,
  	1,0,0,0,444,428,1,0,0,0,444,438,1,0,0,0,445,448,1,0,0,0,446,444,1,0,0,
  	0,446,447,1,0,0,0,447,13,1,0,0,0,448,446,1,0,0,0,449,450,5,45,0,0,450,
  	451,5,45,0,0,451,15,1,0,0,0,452,453,5,46,0,0,453,454,5,46,0,0,454,17,
  	1,0,0,0,455,456,5,41,0,0,456,457,5,41,0,0,457,19,1,0,0,0,458,459,5,40,
  	0,0,459,460,5,40,0,0,460,21,1,0,0,0,461,462,5,40,0,0,462,463,5,40,0,0,
  	463,464,5,40,0,0,464,23,1,0,0,0,465,466,7,0,0,0,466,25,1,0,0,0,467,468,
  	5,41,0,0,468,472,5,39,0,0,469,470,5,30,0,0,470,472,5,26,0,0,471,467,1,
  	0,0,0,471,469,1,0,0,0,472,27,1,0,0,0,473,474,7,1,0,0,474,29,1,0,0,0,475,
  	476,5,40,0,0,476,480,5,39,0,0,477,478,5,30,0,0,478,480,5,27,0,0,479,475,
  	1,0,0,0,479,477,1,0,0,0,480,31,1,0,0,0,481,482,5,39,0,0,482,485,5,39,
  	0,0,483,485,5,25,0,0,484,481,1,0,0,0,484,483,1,0,0,0,485,33,1,0,0,0,486,
  	487,5,60,0,0,487,491,5,39,0,0,488,489,5,30,0,0,489,491,5,25,0,0,490,486,
  	1,0,0,0,490,488,1,0,0,0,491,35,1,0,0,0,492,493,5,49,0,0,493,496,5,49,
  	0,0,494,496,5,17,0,0,495,492,1,0,0,0,495,494,1,0,0,0,496,37,1,0,0,0,497,
  	498,5,50,0,0,498,501,5,50,0,0,499,501,5,18,0,0,500,497,1,0,0,0,500,499,
  	1,0,0,0,501,39,1,0,0,0,502,503,5,30,0,0,503,504,5,28,0,0,504,41,1,0,0,
  	0,505,506,5,30,0,0,506,507,5,12,0,0,507,43,1,0,0,0,508,509,5,67,0,0,509,
  	45,1,0,0,0,510,511,3,12,6,0,511,47,1,0,0,0,512,513,5,3,0,0,513,516,5,
  	67,0,0,514,515,5,12,0,0,515,517,3,4,2,0,516,514,1,0,0,0,516,517,1,0,0,
  	0,517,518,1,0,0,0,518,530,3,92,46,0,519,520,3,50,25,0,520,527,3,94,47,
  	0,521,522,3,92,46,0,522,523,3,94,47,0,523,524,3,50,25,0,524,526,1,0,0,
  	0,525,521,1,0,0,0,526,529,1,0,0,0,527,525,1,0,0,0,527,528,1,0,0,0,528,
  	531,1,0,0,0,529,527,1,0,0,0,530,519,1,0,0,0,530,531,1,0,0,0,531,532,1,
  	0,0,0,532,533,3,94,47,0,533,534,5,1,0,0,534,49,1,0,0,0,535,536,3,78,39,
  	0,536,51,1,0,0,0,537,539,5,15,0,0,538,537,1,0,0,0,538,539,1,0,0,0,539,
  	541,1,0,0,0,540,542,5,13,0,0,541,540,1,0,0,0,541,542,1,0,0,0,542,543,
  	1,0,0,0,543,550,5,2,0,0,544,545,3,4,2,0,545,546,5,42,0,0,546,548,1,0,
  	0,0,547,544,1,0,0,0,547,548,1,0,0,0,548,549,1,0,0,0,549,551,5,67,0,0,
  	550,547,1,0,0,0,550,551,1,0,0,0,551,552,1,0,0,0,552,553,5,51,0,0,553,
  	565,3,94,47,0,554,555,3,54,27,0,555,562,3,94,47,0,556,557,5,61,0,0,557,
  	558,3,94,47,0,558,559,3,54,27,0,559,561,1,0,0,0,560,556,1,0,0,0,561,564,
  	1,0,0,0,562,560,1,0,0,0,562,563,1,0,0,0,563,566,1,0,0,0,564,562,1,0,0,
  	0,565,554,1,0,0,0,565,566,1,0,0,0,566,567,1,0,0,0,567,568,3,94,47,0,568,
  	570,5,52,0,0,569,571,3,76,38,0,570,569,1,0,0,0,570,571,1,0,0,0,571,572,
  	1,0,0,0,572,576,3,92,46,0,573,574,3,66,33,0,574,575,3,92,46,0,575,577,
  	1,0,0,0,576,573,1,0,0,0,576,577,1,0,0,0,577,578,1,0,0,0,578,579,3,94,
  	47,0,579,580,5,1,0,0,580,53,1,0,0,0,581,582,3,78,39,0,582,55,1,0,0,0,
  	583,587,5,67,0,0,584,588,5,39,0,0,585,586,5,56,0,0,586,588,5,39,0,0,587,
  	584,1,0,0,0,587,585,1,0,0,0,588,589,1,0,0,0,589,590,3,46,23,0,590,57,
  	1,0,0,0,591,592,3,4,2,0,592,593,5,42,0,0,593,594,5,67,0,0,594,595,5,39,
  	0,0,595,596,3,46,23,0,596,59,1,0,0,0,597,598,3,4,2,0,598,599,5,53,0,0,
  	599,600,3,46,23,0,600,601,5,54,0,0,601,602,5,39,0,0,602,603,3,46,23,0,
  	603,61,1,0,0,0,604,605,5,6,0,0,605,606,3,46,23,0,606,610,3,92,46,0,607,
  	608,3,66,33,0,608,609,3,92,46,0,609,611,1,0,0,0,610,607,1,0,0,0,610,611,
  	1,0,0,0,611,622,1,0,0,0,612,613,5,21,0,0,613,614,3,92,46,0,614,615,3,
  	66,33,0,615,616,3,92,46,0,616,618,1,0,0,0,617,612,1,0,0,0,617,618,1,0,
  	0,0,618,619,1,0,0,0,619,623,5,1,0,0,620,621,5,21,0,0,621,623,3,62,31,
  	0,622,617,1,0,0,0,622,620,1,0,0,0,623,63,1,0,0,0,624,625,5,23,0,0,625,
  	626,3,12,6,0,626,630,3,92,46,0,627,628,3,66,33,0,628,629,3,92,46,0,629,
  	631,1,0,0,0,630,627,1,0,0,0,630,631,1,0,0,0,631,632,1,0,0,0,632,633,5,
  	1,0,0,633,65,1,0,0,0,634,640,3,68,34,0,635,636,3,92,46,0,636,637,3,68,
  	34,0,637,639,1,0,0,0,638,635,1,0,0,0,639,642,1,0,0,0,640,638,1,0,0,0,
  	640,641,1,0,0,0,641,67,1,0,0,0,642,640,1,0,0,0,643,658,3,48,24,0,644,
  	658,3,52,26,0,645,658,3,56,28,0,646,658,3,58,29,0,647,658,3,60,30,0,648,
  	658,3,62,31,0,649,658,3,64,32,0,650,658,3,46,23,0,651,658,3,70,35,0,652,
  	658,3,88,44,0,653,658,3,90,45,0,654,658,3,80,40,0,655,658,3,72,36,0,656,
  	658,3,84,42,0,657,643,1,0,0,0,657,644,1,0,0,0,657,645,1,0,0,0,657,646,
  	1,0,0,0,657,647,1,0,0,0,657,648,1,0,0,0,657,649,1,0,0,0,657,650,1,0,0,
  	0,657,651,1,0,0,0,657,652,1,0,0,0,657,653,1,0,0,0,657,654,1,0,0,0,657,
  	655,1,0,0,0,657,656,1,0,0,0,658,69,1,0,0,0,659,661,5,14,0,0,660,662,3,
  	46,23,0,661,660,1,0,0,0,661,662,1,0,0,0,662,71,1,0,0,0,663,665,5,24,0,
  	0,664,666,5,67,0,0,665,664,1,0,0,0,665,666,1,0,0,0,666,667,1,0,0,0,667,
  	671,3,92,46,0,668,669,3,66,33,0,669,670,3,92,46,0,670,672,1,0,0,0,671,
  	668,1,0,0,0,671,672,1,0,0,0,672,673,1,0,0,0,673,674,5,1,0,0,674,73,1,
  	0,0,0,675,676,6,37,-1,0,676,677,5,51,0,0,677,678,3,94,47,0,678,679,3,
  	46,23,0,679,680,3,94,47,0,680,681,5,52,0,0,681,684,1,0,0,0,682,684,5,
  	67,0,0,683,675,1,0,0,0,683,682,1,0,0,0,684,693,1,0,0,0,685,686,10,1,0,
  	0,686,687,3,94,47,0,687,688,5,42,0,0,688,689,3,94,47,0,689,690,5,67,0,
  	0,690,692,1,0,0,0,691,685,1,0,0,0,692,695,1,0,0,0,693,691,1,0,0,0,693,
  	694,1,0,0,0,694,75,1,0,0,0,695,693,1,0,0,0,696,704,3,74,37,0,697,698,
  	3,94,47,0,698,699,5,18,0,0,699,700,3,94,47,0,700,701,3,74,37,0,701,703,
  	1,0,0,0,702,697,1,0,0,0,703,706,1,0,0,0,704,702,1,0,0,0,704,705,1,0,0,
  	0,705,77,1,0,0,0,706,704,1,0,0,0,707,709,5,67,0,0,708,710,3,76,38,0,709,
  	708,1,0,0,0,709,710,1,0,0,0,710,713,1,0,0,0,711,712,5,39,0,0,712,714,
  	3,46,23,0,713,711,1,0,0,0,713,714,1,0,0,0,714,79,1,0,0,0,715,717,5,8,
  	0,0,716,718,5,67,0,0,717,716,1,0,0,0,717,718,1,0,0,0,718,719,1,0,0,0,
  	719,724,3,82,41,0,720,721,5,42,0,0,721,723,3,82,41,0,722,720,1,0,0,0,
  	723,726,1,0,0,0,724,722,1,0,0,0,724,725,1,0,0,0,725,81,1,0,0,0,726,724,
  	1,0,0,0,727,728,7,2,0,0,728,83,1,0,0,0,729,730,5,9,0,0,730,738,3,86,43,
  	0,731,732,3,94,47,0,732,733,5,61,0,0,733,734,3,94,47,0,734,735,3,86,43,
  	0,735,737,1,0,0,0,736,731,1,0,0,0,737,740,1,0,0,0,738,736,1,0,0,0,738,
  	739,1,0,0,0,739,85,1,0,0,0,740,738,1,0,0,0,741,747,5,67,0,0,742,743,3,
  	94,47,0,743,744,5,10,0,0,744,745,3,94,47,0,745,746,5,67,0,0,746,748,1,
  	0,0,0,747,742,1,0,0,0,747,748,1,0,0,0,748,87,1,0,0,0,749,750,5,19,0,0,
  	750,754,3,92,46,0,751,752,3,66,33,0,752,753,3,92,46,0,753,755,1,0,0,0,
  	754,751,1,0,0,0,754,755,1,0,0,0,755,756,1,0,0,0,756,758,5,20,0,0,757,
  	759,5,67,0,0,758,757,1,0,0,0,758,759,1,0,0,0,759,760,1,0,0,0,760,764,
  	3,92,46,0,761,762,3,66,33,0,762,763,3,92,46,0,763,765,1,0,0,0,764,761,
  	1,0,0,0,764,765,1,0,0,0,765,766,1,0,0,0,766,767,5,1,0,0,767,89,1,0,0,
  	0,768,770,5,22,0,0,769,771,3,46,23,0,770,769,1,0,0,0,770,771,1,0,0,0,
  	771,91,1,0,0,0,772,774,5,73,0,0,773,772,1,0,0,0,774,775,1,0,0,0,775,773,
  	1,0,0,0,775,776,1,0,0,0,776,93,1,0,0,0,777,779,5,73,0,0,778,777,1,0,0,
  	0,779,782,1,0,0,0,780,778,1,0,0,0,780,781,1,0,0,0,781,95,1,0,0,0,782,
  	780,1,0,0,0,62,106,119,123,127,155,158,163,165,176,180,183,195,212,215,
  	236,252,255,276,444,446,471,479,484,490,495,500,516,527,530,538,541,547,
  	550,562,565,570,576,587,610,617,622,630,640,657,661,665,671,683,693,704,
  	709,713,717,724,738,747,754,758,764,770,775,780
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  mavkaparserParserStaticData = staticData.release();
}

}

MavkaParser::MavkaParser(TokenStream *input) : MavkaParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

MavkaParser::MavkaParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  MavkaParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *mavkaparserParserStaticData->atn, mavkaparserParserStaticData->decisionToDFA, mavkaparserParserStaticData->sharedContextCache, options);
}

MavkaParser::~MavkaParser() {
  delete _interpreter;
}

const atn::ATN& MavkaParser::getATN() const {
  return *mavkaparserParserStaticData->atn;
}

std::string MavkaParser::getGrammarFileName() const {
  return "MavkaParser.g4";
}

const std::vector<std::string>& MavkaParser::getRuleNames() const {
  return mavkaparserParserStaticData->ruleNames;
}

const dfa::Vocabulary& MavkaParser::getVocabulary() const {
  return mavkaparserParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView MavkaParser::getSerializedATN() const {
  return mavkaparserParserStaticData->serializedATN;
}


//----------------- FileContext ------------------------------------------------------------------

MavkaParser::FileContext::FileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::FileContext::EOF() {
  return getToken(MavkaParser::EOF, 0);
}

MavkaParser::ProgramContext* MavkaParser::FileContext::program() {
  return getRuleContext<MavkaParser::ProgramContext>(0);
}


size_t MavkaParser::FileContext::getRuleIndex() const {
  return MavkaParser::RuleFile;
}

void MavkaParser::FileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterFile(this);
}

void MavkaParser::FileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitFile(this);
}


std::any MavkaParser::FileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitFile(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::FileContext* MavkaParser::file() {
  FileContext *_localctx = _tracker.createInstance<FileContext>(_ctx, getState());
  enterRule(_localctx, 0, MavkaParser::RuleFile);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(96);
    antlrcpp::downCast<FileContext *>(_localctx)->f_program = program();
    setState(97);
    match(MavkaParser::EOF);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

MavkaParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::ProgramContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::ProgramContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::Body_elementContext *> MavkaParser::ProgramContext::body_element() {
  return getRuleContexts<MavkaParser::Body_elementContext>();
}

MavkaParser::Body_elementContext* MavkaParser::ProgramContext::body_element(size_t i) {
  return getRuleContext<MavkaParser::Body_elementContext>(i);
}

std::vector<MavkaParser::NlContext *> MavkaParser::ProgramContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::ProgramContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}


size_t MavkaParser::ProgramContext::getRuleIndex() const {
  return MavkaParser::RuleProgram;
}

void MavkaParser::ProgramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterProgram(this);
}

void MavkaParser::ProgramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitProgram(this);
}


std::any MavkaParser::ProgramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitProgram(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::ProgramContext* MavkaParser::program() {
  ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, getState());
  enterRule(_localctx, 2, MavkaParser::RuleProgram);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(99);
    nls();
    setState(100);
    body_element();
    setState(106);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(101);
        nl();
        setState(102);
        body_element(); 
      }
      setState(108);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
    setState(109);
    nls();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AtomContext ------------------------------------------------------------------

MavkaParser::AtomContext::AtomContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MavkaParser::AtomContext::getRuleIndex() const {
  return MavkaParser::RuleAtom;
}

void MavkaParser::AtomContext::copyFrom(AtomContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Atom_nestedContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Atom_nestedContext::PAREN_OPEN() {
  return getToken(MavkaParser::PAREN_OPEN, 0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Atom_nestedContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Atom_nestedContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

MavkaParser::ExprContext* MavkaParser::Atom_nestedContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

tree::TerminalNode* MavkaParser::Atom_nestedContext::PAREN_CLOSE() {
  return getToken(MavkaParser::PAREN_CLOSE, 0);
}

MavkaParser::Atom_nestedContext::Atom_nestedContext(AtomContext *ctx) { copyFrom(ctx); }

void MavkaParser::Atom_nestedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_nested(this);
}
void MavkaParser::Atom_nestedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_nested(this);
}

std::any MavkaParser::Atom_nestedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitAtom_nested(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_stringContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Operation_stringContext::STRING() {
  return getToken(MavkaParser::STRING, 0);
}

tree::TerminalNode* MavkaParser::Operation_stringContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::Operation_stringContext::Operation_stringContext(AtomContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_stringContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_string(this);
}
void MavkaParser::Operation_stringContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_string(this);
}

std::any MavkaParser::Operation_stringContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_string(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Atom_getContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Atom_getContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Atom_getContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Atom_getContext::DOT() {
  return getToken(MavkaParser::DOT, 0);
}

MavkaParser::AtomContext* MavkaParser::Atom_getContext::atom() {
  return getRuleContext<MavkaParser::AtomContext>(0);
}

tree::TerminalNode* MavkaParser::Atom_getContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::Atom_getContext::Atom_getContext(AtomContext *ctx) { copyFrom(ctx); }

void MavkaParser::Atom_getContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_get(this);
}
void MavkaParser::Atom_getContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_get(this);
}

std::any MavkaParser::Atom_getContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitAtom_get(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Atom_subjectContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Atom_subjectContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::Atom_subjectContext::Atom_subjectContext(AtomContext *ctx) { copyFrom(ctx); }

void MavkaParser::Atom_subjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_subject(this);
}
void MavkaParser::Atom_subjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_subject(this);
}

std::any MavkaParser::Atom_subjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitAtom_subject(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Atom_position_getContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Atom_position_getContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Atom_position_getContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Atom_position_getContext::BRACKET_OPEN() {
  return getToken(MavkaParser::BRACKET_OPEN, 0);
}

tree::TerminalNode* MavkaParser::Atom_position_getContext::BRACKET_CLOSE() {
  return getToken(MavkaParser::BRACKET_CLOSE, 0);
}

MavkaParser::AtomContext* MavkaParser::Atom_position_getContext::atom() {
  return getRuleContext<MavkaParser::AtomContext>(0);
}

MavkaParser::ExprContext* MavkaParser::Atom_position_getContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::Atom_position_getContext::Atom_position_getContext(AtomContext *ctx) { copyFrom(ctx); }

void MavkaParser::Atom_position_getContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_position_get(this);
}
void MavkaParser::Atom_position_getContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_position_get(this);
}

std::any MavkaParser::Atom_position_getContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitAtom_position_get(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_symbolContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Operation_symbolContext::CHARACTER() {
  return getToken(MavkaParser::CHARACTER, 0);
}

tree::TerminalNode* MavkaParser::Operation_symbolContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::Operation_symbolContext::Operation_symbolContext(AtomContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_symbolContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_symbol(this);
}
void MavkaParser::Operation_symbolContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_symbol(this);
}

std::any MavkaParser::Operation_symbolContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_symbol(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Atom_callContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Atom_callContext::PAREN_OPEN() {
  return getToken(MavkaParser::PAREN_OPEN, 0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Atom_callContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Atom_callContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Atom_callContext::PAREN_CLOSE() {
  return getToken(MavkaParser::PAREN_CLOSE, 0);
}

MavkaParser::AtomContext* MavkaParser::Atom_callContext::atom() {
  return getRuleContext<MavkaParser::AtomContext>(0);
}

std::vector<MavkaParser::Call_argContext *> MavkaParser::Atom_callContext::call_arg() {
  return getRuleContexts<MavkaParser::Call_argContext>();
}

MavkaParser::Call_argContext* MavkaParser::Atom_callContext::call_arg(size_t i) {
  return getRuleContext<MavkaParser::Call_argContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::Atom_callContext::COMA() {
  return getTokens(MavkaParser::COMA);
}

tree::TerminalNode* MavkaParser::Atom_callContext::COMA(size_t i) {
  return getToken(MavkaParser::COMA, i);
}

MavkaParser::Atom_callContext::Atom_callContext(AtomContext *ctx) { copyFrom(ctx); }

void MavkaParser::Atom_callContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAtom_call(this);
}
void MavkaParser::Atom_callContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAtom_call(this);
}

std::any MavkaParser::Atom_callContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitAtom_call(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::AtomContext* MavkaParser::atom() {
   return atom(0);
}

MavkaParser::AtomContext* MavkaParser::atom(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MavkaParser::AtomContext *_localctx = _tracker.createInstance<AtomContext>(_ctx, parentState);
  MavkaParser::AtomContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, MavkaParser::RuleAtom, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Atom_nestedContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(112);
      match(MavkaParser::PAREN_OPEN);
      setState(113);
      nls();
      setState(114);
      expr();
      setState(115);
      nls();
      setState(116);
      match(MavkaParser::PAREN_CLOSE);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Operation_stringContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(119);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ID) {
        setState(118);
        antlrcpp::downCast<Operation_stringContext *>(_localctx)->tt = match(MavkaParser::ID);
      }
      setState(121);
      match(MavkaParser::STRING);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Operation_symbolContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(123);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ID) {
        setState(122);
        antlrcpp::downCast<Operation_symbolContext *>(_localctx)->tt = match(MavkaParser::ID);
      }
      setState(125);
      match(MavkaParser::CHARACTER);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Atom_subjectContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(126);
      antlrcpp::downCast<Atom_subjectContext *>(_localctx)->id = match(MavkaParser::ID);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(165);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(163);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Atom_getContext>(_tracker.createInstance<AtomContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->object = previousContext;
          pushNewRecursionContext(newContext, startState, RuleAtom);
          setState(129);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(130);
          nls();
          setState(131);
          match(MavkaParser::DOT);
          setState(132);
          nls();
          setState(133);
          antlrcpp::downCast<Atom_getContext *>(_localctx)->id = match(MavkaParser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Atom_position_getContext>(_tracker.createInstance<AtomContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->object = previousContext;
          pushNewRecursionContext(newContext, startState, RuleAtom);
          setState(135);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(136);
          nls();
          setState(137);
          match(MavkaParser::BRACKET_OPEN);
          setState(138);
          nls();
          setState(139);
          antlrcpp::downCast<Atom_position_getContext *>(_localctx)->position = expr();
          setState(140);
          nls();
          setState(141);
          match(MavkaParser::BRACKET_CLOSE);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Atom_callContext>(_tracker.createInstance<AtomContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->object = previousContext;
          pushNewRecursionContext(newContext, startState, RuleAtom);
          setState(143);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(144);
          match(MavkaParser::PAREN_OPEN);
          setState(145);
          nls();
          setState(158);
          _errHandler->sync(this);

          _la = _input->LA(1);
          if (((((_la - 43) & ~ 0x3fULL) == 0) &&
            ((1ULL << (_la - 43)) & 218776835) != 0)) {
            setState(146);
            call_arg();
            setState(147);
            nls();
            setState(155);
            _errHandler->sync(this);
            alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
            while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
              if (alt == 1) {
                setState(148);
                nls();
                setState(149);
                match(MavkaParser::COMA);
                setState(150);
                nls();
                setState(151);
                call_arg(); 
              }
              setState(157);
              _errHandler->sync(this);
              alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx);
            }
          }
          setState(160);
          nls();
          setState(161);
          match(MavkaParser::PAREN_CLOSE);
          break;
        }

        default:
          break;
        } 
      }
      setState(167);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Object_argContext ------------------------------------------------------------------

MavkaParser::Object_argContext::Object_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Object_argContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Object_argContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Object_argContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

MavkaParser::ExprContext* MavkaParser::Object_argContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

tree::TerminalNode* MavkaParser::Object_argContext::ID() {
  return getToken(MavkaParser::ID, 0);
}


size_t MavkaParser::Object_argContext::getRuleIndex() const {
  return MavkaParser::RuleObject_arg;
}

void MavkaParser::Object_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterObject_arg(this);
}

void MavkaParser::Object_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitObject_arg(this);
}


std::any MavkaParser::Object_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitObject_arg(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Object_argContext* MavkaParser::object_arg() {
  Object_argContext *_localctx = _tracker.createInstance<Object_argContext>(_ctx, getState());
  enterRule(_localctx, 6, MavkaParser::RuleObject_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(168);
    antlrcpp::downCast<Object_argContext *>(_localctx)->id = match(MavkaParser::ID);
    setState(169);
    nls();
    setState(170);
    match(MavkaParser::EQUAL);
    setState(171);
    nls();
    setState(172);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Dict_argContext ------------------------------------------------------------------

MavkaParser::Dict_argContext::Dict_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Dict_argContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Dict_argContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Dict_argContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

MavkaParser::ExprContext* MavkaParser::Dict_argContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

tree::TerminalNode* MavkaParser::Dict_argContext::NUMBER() {
  return getToken(MavkaParser::NUMBER, 0);
}

tree::TerminalNode* MavkaParser::Dict_argContext::STRING() {
  return getToken(MavkaParser::STRING, 0);
}

tree::TerminalNode* MavkaParser::Dict_argContext::CHARACTER() {
  return getToken(MavkaParser::CHARACTER, 0);
}

tree::TerminalNode* MavkaParser::Dict_argContext::ID() {
  return getToken(MavkaParser::ID, 0);
}


size_t MavkaParser::Dict_argContext::getRuleIndex() const {
  return MavkaParser::RuleDict_arg;
}

void MavkaParser::Dict_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDict_arg(this);
}

void MavkaParser::Dict_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDict_arg(this);
}


std::any MavkaParser::Dict_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitDict_arg(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Dict_argContext* MavkaParser::dict_arg() {
  Dict_argContext *_localctx = _tracker.createInstance<Dict_argContext>(_ctx, getState());
  enterRule(_localctx, 8, MavkaParser::RuleDict_arg);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(183);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
    case 1: {
      setState(174);
      antlrcpp::downCast<Dict_argContext *>(_localctx)->key_number = match(MavkaParser::NUMBER);
      break;
    }

    case 2: {
      setState(176);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ID) {
        setState(175);
        antlrcpp::downCast<Dict_argContext *>(_localctx)->key_string_tt = match(MavkaParser::ID);
      }
      setState(178);
      antlrcpp::downCast<Dict_argContext *>(_localctx)->key_string = match(MavkaParser::STRING);
      break;
    }

    case 3: {
      setState(180);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ID) {
        setState(179);
        antlrcpp::downCast<Dict_argContext *>(_localctx)->key_symbol_tt = match(MavkaParser::ID);
      }
      setState(182);
      antlrcpp::downCast<Dict_argContext *>(_localctx)->key_symbol = match(MavkaParser::CHARACTER);
      break;
    }

    default:
      break;
    }
    setState(185);
    nls();
    setState(186);
    match(MavkaParser::EQUAL);
    setState(187);
    nls();
    setState(188);
    antlrcpp::downCast<Dict_argContext *>(_localctx)->value = expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Call_argContext ------------------------------------------------------------------

MavkaParser::Call_argContext::Call_argContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::ExprContext* MavkaParser::Call_argContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Call_argContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Call_argContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Call_argContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

tree::TerminalNode* MavkaParser::Call_argContext::ID() {
  return getToken(MavkaParser::ID, 0);
}


size_t MavkaParser::Call_argContext::getRuleIndex() const {
  return MavkaParser::RuleCall_arg;
}

void MavkaParser::Call_argContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterCall_arg(this);
}

void MavkaParser::Call_argContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitCall_arg(this);
}


std::any MavkaParser::Call_argContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitCall_arg(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Call_argContext* MavkaParser::call_arg() {
  Call_argContext *_localctx = _tracker.createInstance<Call_argContext>(_ctx, getState());
  enterRule(_localctx, 10, MavkaParser::RuleCall_arg);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(195);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx)) {
    case 1: {
      setState(190);
      antlrcpp::downCast<Call_argContext *>(_localctx)->id = match(MavkaParser::ID);
      setState(191);
      nls();
      setState(192);
      match(MavkaParser::EQUAL);
      setState(193);
      nls();
      break;
    }

    default:
      break;
    }
    setState(197);
    expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- OperationContext ------------------------------------------------------------------

MavkaParser::OperationContext::OperationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MavkaParser::OperationContext::getRuleIndex() const {
  return MavkaParser::RuleOperation;
}

void MavkaParser::OperationContext::copyFrom(OperationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Operation_powContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_powContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_powContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_powContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_powContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_powContext* MavkaParser::Operation_powContext::op_pow() {
  return getRuleContext<MavkaParser::Op_powContext>(0);
}

MavkaParser::Operation_powContext::Operation_powContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_powContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_pow(this);
}
void MavkaParser::Operation_powContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_pow(this);
}

std::any MavkaParser::Operation_powContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_pow(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_gteContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_gteContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_gteContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_gteContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_gteContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_gteContext* MavkaParser::Operation_gteContext::op_gte() {
  return getRuleContext<MavkaParser::Op_gteContext>(0);
}

MavkaParser::Operation_gteContext::Operation_gteContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_gteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_gte(this);
}
void MavkaParser::Operation_gteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_gte(this);
}

std::any MavkaParser::Operation_gteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_gte(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_dict_emptyContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Operation_dict_emptyContext::BRACKET_OPEN() {
  return getToken(MavkaParser::BRACKET_OPEN, 0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_dict_emptyContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_dict_emptyContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_dict_emptyContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

tree::TerminalNode* MavkaParser::Operation_dict_emptyContext::BRACKET_CLOSE() {
  return getToken(MavkaParser::BRACKET_CLOSE, 0);
}

MavkaParser::Operation_dict_emptyContext::Operation_dict_emptyContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_dict_emptyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_dict_empty(this);
}
void MavkaParser::Operation_dict_emptyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_dict_empty(this);
}

std::any MavkaParser::Operation_dict_emptyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_dict_empty(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_dictContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Operation_dictContext::BRACKET_OPEN() {
  return getToken(MavkaParser::BRACKET_OPEN, 0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_dictContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_dictContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::Dict_argContext *> MavkaParser::Operation_dictContext::dict_arg() {
  return getRuleContexts<MavkaParser::Dict_argContext>();
}

MavkaParser::Dict_argContext* MavkaParser::Operation_dictContext::dict_arg(size_t i) {
  return getRuleContext<MavkaParser::Dict_argContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_dictContext::BRACKET_CLOSE() {
  return getToken(MavkaParser::BRACKET_CLOSE, 0);
}

std::vector<tree::TerminalNode *> MavkaParser::Operation_dictContext::COMA() {
  return getTokens(MavkaParser::COMA);
}

tree::TerminalNode* MavkaParser::Operation_dictContext::COMA(size_t i) {
  return getToken(MavkaParser::COMA, i);
}

MavkaParser::Operation_dictContext::Operation_dictContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_dictContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_dict(this);
}
void MavkaParser::Operation_dictContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_dict(this);
}

std::any MavkaParser::Operation_dictContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_dict(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_neqContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_neqContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_neqContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_neqContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_neqContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_neqContext* MavkaParser::Operation_neqContext::op_neq() {
  return getRuleContext<MavkaParser::Op_neqContext>(0);
}

MavkaParser::Operation_neqContext::Operation_neqContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_neqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_neq(this);
}
void MavkaParser::Operation_neqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_neq(this);
}

std::any MavkaParser::Operation_neqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_neq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_xorContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_xorContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_xorContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_xorContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_xorContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_xorContext::POWER() {
  return getToken(MavkaParser::POWER, 0);
}

MavkaParser::Operation_xorContext::Operation_xorContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_xorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_xor(this);
}
void MavkaParser::Operation_xorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_xor(this);
}

std::any MavkaParser::Operation_xorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_xor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_lteContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_lteContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_lteContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_lteContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_lteContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_lteContext* MavkaParser::Operation_lteContext::op_lte() {
  return getRuleContext<MavkaParser::Op_lteContext>(0);
}

MavkaParser::Operation_lteContext::Operation_lteContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_lteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_lte(this);
}
void MavkaParser::Operation_lteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_lte(this);
}

std::any MavkaParser::Operation_lteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_lte(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_pre_plusContext ------------------------------------------------------------------

MavkaParser::NlsContext* MavkaParser::Operation_pre_plusContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}

tree::TerminalNode* MavkaParser::Operation_pre_plusContext::PLUS() {
  return getToken(MavkaParser::PLUS, 0);
}

MavkaParser::OperationContext* MavkaParser::Operation_pre_plusContext::operation() {
  return getRuleContext<MavkaParser::OperationContext>(0);
}

MavkaParser::Operation_pre_plusContext::Operation_pre_plusContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_pre_plusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_pre_plus(this);
}
void MavkaParser::Operation_pre_plusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_pre_plus(this);
}

std::any MavkaParser::Operation_pre_plusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_pre_plus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_addContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_addContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_addContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_addContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_addContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_addContext::PLUS() {
  return getToken(MavkaParser::PLUS, 0);
}

MavkaParser::Operation_addContext::Operation_addContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_addContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_add(this);
}
void MavkaParser::Operation_addContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_add(this);
}

std::any MavkaParser::Operation_addContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_add(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_ltContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_ltContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_ltContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_ltContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_ltContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_ltContext* MavkaParser::Operation_ltContext::op_lt() {
  return getRuleContext<MavkaParser::Op_ltContext>(0);
}

MavkaParser::Operation_ltContext::Operation_ltContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_ltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_lt(this);
}
void MavkaParser::Operation_ltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_lt(this);
}

std::any MavkaParser::Operation_ltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_lt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_pre_minusContext ------------------------------------------------------------------

MavkaParser::NlsContext* MavkaParser::Operation_pre_minusContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}

tree::TerminalNode* MavkaParser::Operation_pre_minusContext::MINUS() {
  return getToken(MavkaParser::MINUS, 0);
}

MavkaParser::OperationContext* MavkaParser::Operation_pre_minusContext::operation() {
  return getRuleContext<MavkaParser::OperationContext>(0);
}

MavkaParser::Operation_pre_minusContext::Operation_pre_minusContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_pre_minusContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_pre_minus(this);
}
void MavkaParser::Operation_pre_minusContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_pre_minus(this);
}

std::any MavkaParser::Operation_pre_minusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_pre_minus(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_landContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_landContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_landContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_landContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_landContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_landContext* MavkaParser::Operation_landContext::op_land() {
  return getRuleContext<MavkaParser::Op_landContext>(0);
}

MavkaParser::Operation_landContext::Operation_landContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_landContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_land(this);
}
void MavkaParser::Operation_landContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_land(this);
}

std::any MavkaParser::Operation_landContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_land(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_objectContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Operation_objectContext::PAREN_OPEN() {
  return getToken(MavkaParser::PAREN_OPEN, 0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_objectContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_objectContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_objectContext::PAREN_CLOSE() {
  return getToken(MavkaParser::PAREN_CLOSE, 0);
}

std::vector<MavkaParser::Object_argContext *> MavkaParser::Operation_objectContext::object_arg() {
  return getRuleContexts<MavkaParser::Object_argContext>();
}

MavkaParser::Object_argContext* MavkaParser::Operation_objectContext::object_arg(size_t i) {
  return getRuleContext<MavkaParser::Object_argContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::Operation_objectContext::COMA() {
  return getTokens(MavkaParser::COMA);
}

tree::TerminalNode* MavkaParser::Operation_objectContext::COMA(size_t i) {
  return getToken(MavkaParser::COMA, i);
}

MavkaParser::Operation_objectContext::Operation_objectContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_objectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_object(this);
}
void MavkaParser::Operation_objectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_object(this);
}

std::any MavkaParser::Operation_objectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_object(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_orContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_orContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_orContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_orContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_orContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_orContext::OR() {
  return getToken(MavkaParser::OR, 0);
}

MavkaParser::Operation_orContext::Operation_orContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_orContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_or(this);
}
void MavkaParser::Operation_orContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_or(this);
}

std::any MavkaParser::Operation_orContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_or(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_pre_notContext ------------------------------------------------------------------

MavkaParser::NlsContext* MavkaParser::Operation_pre_notContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}

tree::TerminalNode* MavkaParser::Operation_pre_notContext::EXCLAMATION() {
  return getToken(MavkaParser::EXCLAMATION, 0);
}

MavkaParser::OperationContext* MavkaParser::Operation_pre_notContext::operation() {
  return getRuleContext<MavkaParser::OperationContext>(0);
}

MavkaParser::Operation_pre_notContext::Operation_pre_notContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_pre_notContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_pre_not(this);
}
void MavkaParser::Operation_pre_notContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_pre_not(this);
}

std::any MavkaParser::Operation_pre_notContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_pre_not(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_containsContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_containsContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_containsContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_containsContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_containsContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_containsContext::KW_HAS_WORD() {
  return getToken(MavkaParser::KW_HAS_WORD, 0);
}

MavkaParser::Operation_containsContext::Operation_containsContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_containsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_contains(this);
}
void MavkaParser::Operation_containsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_contains(this);
}

std::any MavkaParser::Operation_containsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_contains(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_div_divContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_div_divContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_div_divContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_div_divContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_div_divContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_div_divContext* MavkaParser::Operation_div_divContext::op_div_div() {
  return getRuleContext<MavkaParser::Op_div_divContext>(0);
}

MavkaParser::Operation_div_divContext::Operation_div_divContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_div_divContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_div_div(this);
}
void MavkaParser::Operation_div_divContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_div_div(this);
}

std::any MavkaParser::Operation_div_divContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_div_div(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_not_isContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_not_isContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_not_isContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_not_isContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_not_isContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_not_isContext* MavkaParser::Operation_not_isContext::op_not_is() {
  return getRuleContext<MavkaParser::Op_not_isContext>(0);
}

MavkaParser::Operation_not_isContext::Operation_not_isContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_not_isContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_not_is(this);
}
void MavkaParser::Operation_not_isContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_not_is(this);
}

std::any MavkaParser::Operation_not_isContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_not_is(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_asContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_asContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_asContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

MavkaParser::OperationContext* MavkaParser::Operation_asContext::operation() {
  return getRuleContext<MavkaParser::OperationContext>(0);
}

tree::TerminalNode* MavkaParser::Operation_asContext::KW_AS() {
  return getToken(MavkaParser::KW_AS, 0);
}

MavkaParser::TypeContext* MavkaParser::Operation_asContext::type() {
  return getRuleContext<MavkaParser::TypeContext>(0);
}

MavkaParser::Operation_asContext::Operation_asContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_asContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_as(this);
}
void MavkaParser::Operation_asContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_as(this);
}

std::any MavkaParser::Operation_asContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_as(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_atomContext ------------------------------------------------------------------

MavkaParser::AtomContext* MavkaParser::Operation_atomContext::atom() {
  return getRuleContext<MavkaParser::AtomContext>(0);
}

MavkaParser::Operation_atomContext::Operation_atomContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_atomContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_atom(this);
}
void MavkaParser::Operation_atomContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_atom(this);
}

std::any MavkaParser::Operation_atomContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_atom(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_subContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_subContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_subContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_subContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_subContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_subContext::MINUS() {
  return getToken(MavkaParser::MINUS, 0);
}

MavkaParser::Operation_subContext::Operation_subContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_subContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_sub(this);
}
void MavkaParser::Operation_subContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_sub(this);
}

std::any MavkaParser::Operation_subContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_sub(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_modContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_modContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_modContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_modContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_modContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_modContext::MOD() {
  return getToken(MavkaParser::MOD, 0);
}

MavkaParser::Operation_modContext::Operation_modContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_modContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_mod(this);
}
void MavkaParser::Operation_modContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_mod(this);
}

std::any MavkaParser::Operation_modContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_mod(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_isContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_isContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_isContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_isContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_isContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_isContext::KW_IS() {
  return getToken(MavkaParser::KW_IS, 0);
}

MavkaParser::Operation_isContext::Operation_isContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_isContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_is(this);
}
void MavkaParser::Operation_isContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_is(this);
}

std::any MavkaParser::Operation_isContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_is(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_mulContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_mulContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_mulContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_mulContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_mulContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_mulContext::MULTIPLY() {
  return getToken(MavkaParser::MULTIPLY, 0);
}

MavkaParser::Operation_mulContext::Operation_mulContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_mulContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_mul(this);
}
void MavkaParser::Operation_mulContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_mul(this);
}

std::any MavkaParser::Operation_mulContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_mul(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_gtContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_gtContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_gtContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_gtContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_gtContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_gtContext* MavkaParser::Operation_gtContext::op_gt() {
  return getRuleContext<MavkaParser::Op_gtContext>(0);
}

MavkaParser::Operation_gtContext::Operation_gtContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_gtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_gt(this);
}
void MavkaParser::Operation_gtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_gt(this);
}

std::any MavkaParser::Operation_gtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_gt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_eqContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_eqContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_eqContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_eqContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_eqContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_eqContext* MavkaParser::Operation_eqContext::op_eq() {
  return getRuleContext<MavkaParser::Op_eqContext>(0);
}

MavkaParser::Operation_eqContext::Operation_eqContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_eqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_eq(this);
}
void MavkaParser::Operation_eqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_eq(this);
}

std::any MavkaParser::Operation_eqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_eq(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_arrayContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Operation_arrayContext::BRACKET_OPEN() {
  return getToken(MavkaParser::BRACKET_OPEN, 0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_arrayContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_arrayContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_arrayContext::BRACKET_CLOSE() {
  return getToken(MavkaParser::BRACKET_CLOSE, 0);
}

std::vector<MavkaParser::ExprContext *> MavkaParser::Operation_arrayContext::expr() {
  return getRuleContexts<MavkaParser::ExprContext>();
}

MavkaParser::ExprContext* MavkaParser::Operation_arrayContext::expr(size_t i) {
  return getRuleContext<MavkaParser::ExprContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::Operation_arrayContext::COMA() {
  return getTokens(MavkaParser::COMA);
}

tree::TerminalNode* MavkaParser::Operation_arrayContext::COMA(size_t i) {
  return getToken(MavkaParser::COMA, i);
}

MavkaParser::Operation_arrayContext::Operation_arrayContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_arrayContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_array(this);
}
void MavkaParser::Operation_arrayContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_array(this);
}

std::any MavkaParser::Operation_arrayContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_array(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_pre_bw_notContext ------------------------------------------------------------------

MavkaParser::NlsContext* MavkaParser::Operation_pre_bw_notContext::nls() {
  return getRuleContext<MavkaParser::NlsContext>(0);
}

tree::TerminalNode* MavkaParser::Operation_pre_bw_notContext::TILDA() {
  return getToken(MavkaParser::TILDA, 0);
}

MavkaParser::OperationContext* MavkaParser::Operation_pre_bw_notContext::operation() {
  return getRuleContext<MavkaParser::OperationContext>(0);
}

MavkaParser::Operation_pre_bw_notContext::Operation_pre_bw_notContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_pre_bw_notContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_pre_bw_not(this);
}
void MavkaParser::Operation_pre_bw_notContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_pre_bw_not(this);
}

std::any MavkaParser::Operation_pre_bw_notContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_pre_bw_not(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_lorContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_lorContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_lorContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_lorContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_lorContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_lorContext* MavkaParser::Operation_lorContext::op_lor() {
  return getRuleContext<MavkaParser::Op_lorContext>(0);
}

MavkaParser::Operation_lorContext::Operation_lorContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_lorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_lor(this);
}
void MavkaParser::Operation_lorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_lor(this);
}

std::any MavkaParser::Operation_lorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_lor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_ternaryContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_ternaryContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_ternaryContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_ternaryContext::QUESTION() {
  return getToken(MavkaParser::QUESTION, 0);
}

tree::TerminalNode* MavkaParser::Operation_ternaryContext::COLON() {
  return getToken(MavkaParser::COLON, 0);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_ternaryContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_ternaryContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Operation_ternaryContext::Operation_ternaryContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_ternaryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_ternary(this);
}
void MavkaParser::Operation_ternaryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_ternary(this);
}

std::any MavkaParser::Operation_ternaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_ternary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_urshiftContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_urshiftContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_urshiftContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_urshiftContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_urshiftContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_urshiftContext* MavkaParser::Operation_urshiftContext::op_urshift() {
  return getRuleContext<MavkaParser::Op_urshiftContext>(0);
}

MavkaParser::Operation_urshiftContext::Operation_urshiftContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_urshiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_urshift(this);
}
void MavkaParser::Operation_urshiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_urshift(this);
}

std::any MavkaParser::Operation_urshiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_urshift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_not_containsContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_not_containsContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_not_containsContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_not_containsContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_not_containsContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_not_containsContext* MavkaParser::Operation_not_containsContext::op_not_contains() {
  return getRuleContext<MavkaParser::Op_not_containsContext>(0);
}

MavkaParser::Operation_not_containsContext::Operation_not_containsContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_not_containsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_not_contains(this);
}
void MavkaParser::Operation_not_containsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_not_contains(this);
}

std::any MavkaParser::Operation_not_containsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_not_contains(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_divContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_divContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_divContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_divContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_divContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_divContext::DIVIDE() {
  return getToken(MavkaParser::DIVIDE, 0);
}

MavkaParser::Operation_divContext::Operation_divContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_divContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_div(this);
}
void MavkaParser::Operation_divContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_div(this);
}

std::any MavkaParser::Operation_divContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_div(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_rshiftContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_rshiftContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_rshiftContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_rshiftContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_rshiftContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_rshiftContext* MavkaParser::Operation_rshiftContext::op_rshift() {
  return getRuleContext<MavkaParser::Op_rshiftContext>(0);
}

MavkaParser::Operation_rshiftContext::Operation_rshiftContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_rshiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_rshift(this);
}
void MavkaParser::Operation_rshiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_rshift(this);
}

std::any MavkaParser::Operation_rshiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_rshift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_lshiftContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_lshiftContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_lshiftContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_lshiftContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_lshiftContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

MavkaParser::Op_lshiftContext* MavkaParser::Operation_lshiftContext::op_lshift() {
  return getRuleContext<MavkaParser::Op_lshiftContext>(0);
}

MavkaParser::Operation_lshiftContext::Operation_lshiftContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_lshiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_lshift(this);
}
void MavkaParser::Operation_lshiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_lshift(this);
}

std::any MavkaParser::Operation_lshiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_lshift(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_numberContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Operation_numberContext::NUMBER() {
  return getToken(MavkaParser::NUMBER, 0);
}

MavkaParser::Operation_numberContext::Operation_numberContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_numberContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_number(this);
}
void MavkaParser::Operation_numberContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_number(this);
}

std::any MavkaParser::Operation_numberContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_number(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Operation_andContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Operation_andContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Operation_andContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<MavkaParser::OperationContext *> MavkaParser::Operation_andContext::operation() {
  return getRuleContexts<MavkaParser::OperationContext>();
}

MavkaParser::OperationContext* MavkaParser::Operation_andContext::operation(size_t i) {
  return getRuleContext<MavkaParser::OperationContext>(i);
}

tree::TerminalNode* MavkaParser::Operation_andContext::AND() {
  return getToken(MavkaParser::AND, 0);
}

MavkaParser::Operation_andContext::Operation_andContext(OperationContext *ctx) { copyFrom(ctx); }

void MavkaParser::Operation_andContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOperation_and(this);
}
void MavkaParser::Operation_andContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOperation_and(this);
}

std::any MavkaParser::Operation_andContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOperation_and(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::OperationContext* MavkaParser::operation() {
   return operation(0);
}

MavkaParser::OperationContext* MavkaParser::operation(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MavkaParser::OperationContext *_localctx = _tracker.createInstance<OperationContext>(_ctx, parentState);
  MavkaParser::OperationContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 12;
  enterRecursionRule(_localctx, 12, MavkaParser::RuleOperation, precedence);

    size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(276);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Operation_numberContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(200);
      match(MavkaParser::NUMBER);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Operation_atomContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(201);
      atom(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Operation_objectContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(202);
      match(MavkaParser::PAREN_OPEN);
      setState(203);
      nls();
      setState(215);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::ID) {
        setState(204);
        object_arg();
        setState(212);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(205);
            nls();
            setState(206);
            match(MavkaParser::COMA);
            setState(207);
            nls();
            setState(208);
            object_arg(); 
          }
          setState(214);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
        }
      }
      setState(217);
      nls();
      setState(218);
      match(MavkaParser::PAREN_CLOSE);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<Operation_dict_emptyContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(220);
      match(MavkaParser::BRACKET_OPEN);
      setState(221);
      nls();
      setState(222);
      match(MavkaParser::EQUAL);
      setState(223);
      nls();
      setState(224);
      match(MavkaParser::BRACKET_CLOSE);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<Operation_dictContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(226);
      match(MavkaParser::BRACKET_OPEN);
      setState(227);
      nls();
      setState(228);
      dict_arg();
      setState(236);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(229);
          nls();
          setState(230);
          match(MavkaParser::COMA);
          setState(231);
          nls();
          setState(232);
          dict_arg(); 
        }
        setState(238);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx);
      }
      setState(239);
      nls();
      setState(240);
      match(MavkaParser::BRACKET_CLOSE);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<Operation_arrayContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(242);
      match(MavkaParser::BRACKET_OPEN);
      setState(243);
      nls();
      setState(255);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (((((_la - 43) & ~ 0x3fULL) == 0) &&
        ((1ULL << (_la - 43)) & 218776835) != 0)) {
        setState(244);
        expr();
        setState(252);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
        while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
          if (alt == 1) {
            setState(245);
            nls();
            setState(246);
            match(MavkaParser::COMA);
            setState(247);
            nls();
            setState(248);
            expr(); 
          }
          setState(254);
          _errHandler->sync(this);
          alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx);
        }
      }
      setState(257);
      nls();
      setState(258);
      match(MavkaParser::BRACKET_CLOSE);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<Operation_pre_notContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(260);
      antlrcpp::downCast<Operation_pre_notContext *>(_localctx)->op = match(MavkaParser::EXCLAMATION);
      setState(261);
      nls();
      setState(262);
      antlrcpp::downCast<Operation_pre_notContext *>(_localctx)->right = operation(30);
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<Operation_pre_bw_notContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(264);
      antlrcpp::downCast<Operation_pre_bw_notContext *>(_localctx)->op = match(MavkaParser::TILDA);
      setState(265);
      nls();
      setState(266);
      antlrcpp::downCast<Operation_pre_bw_notContext *>(_localctx)->right = operation(29);
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<Operation_pre_plusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(268);
      antlrcpp::downCast<Operation_pre_plusContext *>(_localctx)->op = match(MavkaParser::PLUS);
      setState(269);
      nls();
      setState(270);
      antlrcpp::downCast<Operation_pre_plusContext *>(_localctx)->right = operation(28);
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<Operation_pre_minusContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(272);
      antlrcpp::downCast<Operation_pre_minusContext *>(_localctx)->op = match(MavkaParser::MINUS);
      setState(273);
      nls();
      setState(274);
      antlrcpp::downCast<Operation_pre_minusContext *>(_localctx)->right = operation(27);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(446);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(444);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Operation_powContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(278);

          if (!(precpred(_ctx, 26))) throw FailedPredicateException(this, "precpred(_ctx, 26)");
          setState(279);
          nls();
          setState(280);
          antlrcpp::downCast<Operation_powContext *>(_localctx)->op = op_pow();
          setState(281);
          nls();
          setState(282);
          antlrcpp::downCast<Operation_powContext *>(_localctx)->right = operation(27);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Operation_mulContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(284);

          if (!(precpred(_ctx, 25))) throw FailedPredicateException(this, "precpred(_ctx, 25)");
          setState(285);
          nls();
          setState(286);
          antlrcpp::downCast<Operation_mulContext *>(_localctx)->op = match(MavkaParser::MULTIPLY);
          setState(287);
          nls();
          setState(288);
          antlrcpp::downCast<Operation_mulContext *>(_localctx)->right = operation(26);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Operation_div_divContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(290);

          if (!(precpred(_ctx, 24))) throw FailedPredicateException(this, "precpred(_ctx, 24)");
          setState(291);
          nls();
          setState(292);
          antlrcpp::downCast<Operation_div_divContext *>(_localctx)->op = op_div_div();
          setState(293);
          nls();
          setState(294);
          antlrcpp::downCast<Operation_div_divContext *>(_localctx)->right = operation(25);
          break;
        }

        case 4: {
          auto newContext = _tracker.createInstance<Operation_divContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(296);

          if (!(precpred(_ctx, 23))) throw FailedPredicateException(this, "precpred(_ctx, 23)");
          setState(297);
          nls();
          setState(298);
          antlrcpp::downCast<Operation_divContext *>(_localctx)->op = match(MavkaParser::DIVIDE);
          setState(299);
          nls();
          setState(300);
          antlrcpp::downCast<Operation_divContext *>(_localctx)->right = operation(24);
          break;
        }

        case 5: {
          auto newContext = _tracker.createInstance<Operation_modContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(302);

          if (!(precpred(_ctx, 22))) throw FailedPredicateException(this, "precpred(_ctx, 22)");
          setState(303);
          nls();
          setState(304);
          antlrcpp::downCast<Operation_modContext *>(_localctx)->op = match(MavkaParser::MOD);
          setState(305);
          nls();
          setState(306);
          antlrcpp::downCast<Operation_modContext *>(_localctx)->right = operation(23);
          break;
        }

        case 6: {
          auto newContext = _tracker.createInstance<Operation_addContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(308);

          if (!(precpred(_ctx, 21))) throw FailedPredicateException(this, "precpred(_ctx, 21)");
          setState(309);
          nls();
          setState(310);
          antlrcpp::downCast<Operation_addContext *>(_localctx)->op = match(MavkaParser::PLUS);
          setState(311);
          nls();
          setState(312);
          antlrcpp::downCast<Operation_addContext *>(_localctx)->right = operation(22);
          break;
        }

        case 7: {
          auto newContext = _tracker.createInstance<Operation_subContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(314);

          if (!(precpred(_ctx, 20))) throw FailedPredicateException(this, "precpred(_ctx, 20)");
          setState(315);
          nls();
          setState(316);
          antlrcpp::downCast<Operation_subContext *>(_localctx)->op = match(MavkaParser::MINUS);
          setState(317);
          nls();
          setState(318);
          antlrcpp::downCast<Operation_subContext *>(_localctx)->right = operation(21);
          break;
        }

        case 8: {
          auto newContext = _tracker.createInstance<Operation_lshiftContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(320);

          if (!(precpred(_ctx, 19))) throw FailedPredicateException(this, "precpred(_ctx, 19)");
          setState(321);
          nls();
          setState(322);
          antlrcpp::downCast<Operation_lshiftContext *>(_localctx)->op = op_lshift();
          setState(323);
          nls();
          setState(324);
          antlrcpp::downCast<Operation_lshiftContext *>(_localctx)->right = operation(20);
          break;
        }

        case 9: {
          auto newContext = _tracker.createInstance<Operation_rshiftContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(326);

          if (!(precpred(_ctx, 18))) throw FailedPredicateException(this, "precpred(_ctx, 18)");
          setState(327);
          nls();
          setState(328);
          antlrcpp::downCast<Operation_rshiftContext *>(_localctx)->op = op_rshift();
          setState(329);
          nls();
          setState(330);
          antlrcpp::downCast<Operation_rshiftContext *>(_localctx)->right = operation(19);
          break;
        }

        case 10: {
          auto newContext = _tracker.createInstance<Operation_urshiftContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(332);

          if (!(precpred(_ctx, 17))) throw FailedPredicateException(this, "precpred(_ctx, 17)");
          setState(333);
          nls();
          setState(334);
          antlrcpp::downCast<Operation_urshiftContext *>(_localctx)->op = op_urshift();
          setState(335);
          nls();
          setState(336);
          antlrcpp::downCast<Operation_urshiftContext *>(_localctx)->right = operation(18);
          break;
        }

        case 11: {
          auto newContext = _tracker.createInstance<Operation_ltContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(338);

          if (!(precpred(_ctx, 16))) throw FailedPredicateException(this, "precpred(_ctx, 16)");
          setState(339);
          nls();
          setState(340);
          antlrcpp::downCast<Operation_ltContext *>(_localctx)->op = op_lt();
          setState(341);
          nls();
          setState(342);
          antlrcpp::downCast<Operation_ltContext *>(_localctx)->right = operation(17);
          break;
        }

        case 12: {
          auto newContext = _tracker.createInstance<Operation_lteContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(344);

          if (!(precpred(_ctx, 15))) throw FailedPredicateException(this, "precpred(_ctx, 15)");
          setState(345);
          nls();
          setState(346);
          antlrcpp::downCast<Operation_lteContext *>(_localctx)->op = op_lte();
          setState(347);
          nls();
          setState(348);
          antlrcpp::downCast<Operation_lteContext *>(_localctx)->right = operation(16);
          break;
        }

        case 13: {
          auto newContext = _tracker.createInstance<Operation_gtContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(350);

          if (!(precpred(_ctx, 14))) throw FailedPredicateException(this, "precpred(_ctx, 14)");
          setState(351);
          nls();
          setState(352);
          antlrcpp::downCast<Operation_gtContext *>(_localctx)->op = op_gt();
          setState(353);
          nls();
          setState(354);
          antlrcpp::downCast<Operation_gtContext *>(_localctx)->right = operation(15);
          break;
        }

        case 14: {
          auto newContext = _tracker.createInstance<Operation_gteContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(356);

          if (!(precpred(_ctx, 13))) throw FailedPredicateException(this, "precpred(_ctx, 13)");
          setState(357);
          nls();
          setState(358);
          antlrcpp::downCast<Operation_gteContext *>(_localctx)->op = op_gte();
          setState(359);
          nls();
          setState(360);
          antlrcpp::downCast<Operation_gteContext *>(_localctx)->right = operation(14);
          break;
        }

        case 15: {
          auto newContext = _tracker.createInstance<Operation_containsContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(362);

          if (!(precpred(_ctx, 12))) throw FailedPredicateException(this, "precpred(_ctx, 12)");
          setState(363);
          nls();
          setState(364);
          antlrcpp::downCast<Operation_containsContext *>(_localctx)->op = match(MavkaParser::KW_HAS_WORD);
          setState(365);
          nls();
          setState(366);
          antlrcpp::downCast<Operation_containsContext *>(_localctx)->right = operation(13);
          break;
        }

        case 16: {
          auto newContext = _tracker.createInstance<Operation_not_containsContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(368);

          if (!(precpred(_ctx, 11))) throw FailedPredicateException(this, "precpred(_ctx, 11)");
          setState(369);
          nls();
          setState(370);
          antlrcpp::downCast<Operation_not_containsContext *>(_localctx)->op = op_not_contains();
          setState(371);
          nls();
          setState(372);
          antlrcpp::downCast<Operation_not_containsContext *>(_localctx)->right = operation(12);
          break;
        }

        case 17: {
          auto newContext = _tracker.createInstance<Operation_isContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(374);

          if (!(precpred(_ctx, 10))) throw FailedPredicateException(this, "precpred(_ctx, 10)");
          setState(375);
          nls();
          setState(376);
          antlrcpp::downCast<Operation_isContext *>(_localctx)->op = match(MavkaParser::KW_IS);
          setState(377);
          nls();
          setState(378);
          antlrcpp::downCast<Operation_isContext *>(_localctx)->right = operation(11);
          break;
        }

        case 18: {
          auto newContext = _tracker.createInstance<Operation_not_isContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(380);

          if (!(precpred(_ctx, 9))) throw FailedPredicateException(this, "precpred(_ctx, 9)");
          setState(381);
          nls();
          setState(382);
          antlrcpp::downCast<Operation_not_isContext *>(_localctx)->op = op_not_is();
          setState(383);
          nls();
          setState(384);
          antlrcpp::downCast<Operation_not_isContext *>(_localctx)->right = operation(10);
          break;
        }

        case 19: {
          auto newContext = _tracker.createInstance<Operation_eqContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(386);

          if (!(precpred(_ctx, 8))) throw FailedPredicateException(this, "precpred(_ctx, 8)");
          setState(387);
          nls();
          setState(388);
          antlrcpp::downCast<Operation_eqContext *>(_localctx)->op = op_eq();
          setState(389);
          nls();
          setState(390);
          antlrcpp::downCast<Operation_eqContext *>(_localctx)->right = operation(9);
          break;
        }

        case 20: {
          auto newContext = _tracker.createInstance<Operation_neqContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(392);

          if (!(precpred(_ctx, 7))) throw FailedPredicateException(this, "precpred(_ctx, 7)");
          setState(393);
          nls();
          setState(394);
          antlrcpp::downCast<Operation_neqContext *>(_localctx)->op = op_neq();
          setState(395);
          nls();
          setState(396);
          antlrcpp::downCast<Operation_neqContext *>(_localctx)->right = operation(8);
          break;
        }

        case 21: {
          auto newContext = _tracker.createInstance<Operation_andContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(398);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(399);
          nls();
          setState(400);
          antlrcpp::downCast<Operation_andContext *>(_localctx)->op = match(MavkaParser::AND);
          setState(401);
          nls();
          setState(402);
          antlrcpp::downCast<Operation_andContext *>(_localctx)->right = operation(7);
          break;
        }

        case 22: {
          auto newContext = _tracker.createInstance<Operation_xorContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(404);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(405);
          nls();
          setState(406);
          antlrcpp::downCast<Operation_xorContext *>(_localctx)->op = match(MavkaParser::POWER);
          setState(407);
          nls();
          setState(408);
          antlrcpp::downCast<Operation_xorContext *>(_localctx)->right = operation(6);
          break;
        }

        case 23: {
          auto newContext = _tracker.createInstance<Operation_orContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(410);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(411);
          nls();
          setState(412);
          antlrcpp::downCast<Operation_orContext *>(_localctx)->op = match(MavkaParser::OR);
          setState(413);
          nls();
          setState(414);
          antlrcpp::downCast<Operation_orContext *>(_localctx)->right = operation(5);
          break;
        }

        case 24: {
          auto newContext = _tracker.createInstance<Operation_landContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(416);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(417);
          nls();
          setState(418);
          antlrcpp::downCast<Operation_landContext *>(_localctx)->op = op_land();
          setState(419);
          nls();
          setState(420);
          antlrcpp::downCast<Operation_landContext *>(_localctx)->right = operation(4);
          break;
        }

        case 25: {
          auto newContext = _tracker.createInstance<Operation_lorContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(422);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(423);
          nls();
          setState(424);
          antlrcpp::downCast<Operation_lorContext *>(_localctx)->op = op_lor();
          setState(425);
          nls();
          setState(426);
          antlrcpp::downCast<Operation_lorContext *>(_localctx)->right = operation(3);
          break;
        }

        case 26: {
          auto newContext = _tracker.createInstance<Operation_ternaryContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->cond = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(428);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(429);
          nls();
          setState(430);
          match(MavkaParser::QUESTION);
          setState(431);
          nls();
          setState(432);
          antlrcpp::downCast<Operation_ternaryContext *>(_localctx)->ifok = operation(0);
          setState(433);
          nls();
          setState(434);
          match(MavkaParser::COLON);
          setState(435);
          nls();
          setState(436);
          antlrcpp::downCast<Operation_ternaryContext *>(_localctx)->ifnot = operation(2);
          break;
        }

        case 27: {
          auto newContext = _tracker.createInstance<Operation_asContext>(_tracker.createInstance<OperationContext>(parentContext, parentState));
          _localctx = newContext;
          newContext->left = previousContext;
          pushNewRecursionContext(newContext, startState, RuleOperation);
          setState(438);

          if (!(precpred(_ctx, 31))) throw FailedPredicateException(this, "precpred(_ctx, 31)");
          setState(439);
          nls();
          setState(440);
          antlrcpp::downCast<Operation_asContext *>(_localctx)->op = match(MavkaParser::KW_AS);
          setState(441);
          nls();

          setState(442);
          antlrcpp::downCast<Operation_asContext *>(_localctx)->right_type = type(0);
          break;
        }

        default:
          break;
        } 
      }
      setState(448);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Op_powContext ------------------------------------------------------------------

MavkaParser::Op_powContext::Op_powContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Op_powContext::MULTIPLY() {
  return getTokens(MavkaParser::MULTIPLY);
}

tree::TerminalNode* MavkaParser::Op_powContext::MULTIPLY(size_t i) {
  return getToken(MavkaParser::MULTIPLY, i);
}


size_t MavkaParser::Op_powContext::getRuleIndex() const {
  return MavkaParser::RuleOp_pow;
}

void MavkaParser::Op_powContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_pow(this);
}

void MavkaParser::Op_powContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_pow(this);
}


std::any MavkaParser::Op_powContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_pow(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_powContext* MavkaParser::op_pow() {
  Op_powContext *_localctx = _tracker.createInstance<Op_powContext>(_ctx, getState());
  enterRule(_localctx, 14, MavkaParser::RuleOp_pow);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(449);
    match(MavkaParser::MULTIPLY);
    setState(450);
    match(MavkaParser::MULTIPLY);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_div_divContext ------------------------------------------------------------------

MavkaParser::Op_div_divContext::Op_div_divContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Op_div_divContext::DIVIDE() {
  return getTokens(MavkaParser::DIVIDE);
}

tree::TerminalNode* MavkaParser::Op_div_divContext::DIVIDE(size_t i) {
  return getToken(MavkaParser::DIVIDE, i);
}


size_t MavkaParser::Op_div_divContext::getRuleIndex() const {
  return MavkaParser::RuleOp_div_div;
}

void MavkaParser::Op_div_divContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_div_div(this);
}

void MavkaParser::Op_div_divContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_div_div(this);
}


std::any MavkaParser::Op_div_divContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_div_div(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_div_divContext* MavkaParser::op_div_div() {
  Op_div_divContext *_localctx = _tracker.createInstance<Op_div_divContext>(_ctx, getState());
  enterRule(_localctx, 16, MavkaParser::RuleOp_div_div);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(452);
    match(MavkaParser::DIVIDE);
    setState(453);
    match(MavkaParser::DIVIDE);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_lshiftContext ------------------------------------------------------------------

MavkaParser::Op_lshiftContext::Op_lshiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Op_lshiftContext::LESSER() {
  return getTokens(MavkaParser::LESSER);
}

tree::TerminalNode* MavkaParser::Op_lshiftContext::LESSER(size_t i) {
  return getToken(MavkaParser::LESSER, i);
}


size_t MavkaParser::Op_lshiftContext::getRuleIndex() const {
  return MavkaParser::RuleOp_lshift;
}

void MavkaParser::Op_lshiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_lshift(this);
}

void MavkaParser::Op_lshiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_lshift(this);
}


std::any MavkaParser::Op_lshiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_lshift(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_lshiftContext* MavkaParser::op_lshift() {
  Op_lshiftContext *_localctx = _tracker.createInstance<Op_lshiftContext>(_ctx, getState());
  enterRule(_localctx, 18, MavkaParser::RuleOp_lshift);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(455);
    match(MavkaParser::LESSER);
    setState(456);
    match(MavkaParser::LESSER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_rshiftContext ------------------------------------------------------------------

MavkaParser::Op_rshiftContext::Op_rshiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Op_rshiftContext::GREATER() {
  return getTokens(MavkaParser::GREATER);
}

tree::TerminalNode* MavkaParser::Op_rshiftContext::GREATER(size_t i) {
  return getToken(MavkaParser::GREATER, i);
}


size_t MavkaParser::Op_rshiftContext::getRuleIndex() const {
  return MavkaParser::RuleOp_rshift;
}

void MavkaParser::Op_rshiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_rshift(this);
}

void MavkaParser::Op_rshiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_rshift(this);
}


std::any MavkaParser::Op_rshiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_rshift(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_rshiftContext* MavkaParser::op_rshift() {
  Op_rshiftContext *_localctx = _tracker.createInstance<Op_rshiftContext>(_ctx, getState());
  enterRule(_localctx, 20, MavkaParser::RuleOp_rshift);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(458);
    match(MavkaParser::GREATER);
    setState(459);
    match(MavkaParser::GREATER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_urshiftContext ------------------------------------------------------------------

MavkaParser::Op_urshiftContext::Op_urshiftContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Op_urshiftContext::GREATER() {
  return getTokens(MavkaParser::GREATER);
}

tree::TerminalNode* MavkaParser::Op_urshiftContext::GREATER(size_t i) {
  return getToken(MavkaParser::GREATER, i);
}


size_t MavkaParser::Op_urshiftContext::getRuleIndex() const {
  return MavkaParser::RuleOp_urshift;
}

void MavkaParser::Op_urshiftContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_urshift(this);
}

void MavkaParser::Op_urshiftContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_urshift(this);
}


std::any MavkaParser::Op_urshiftContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_urshift(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_urshiftContext* MavkaParser::op_urshift() {
  Op_urshiftContext *_localctx = _tracker.createInstance<Op_urshiftContext>(_ctx, getState());
  enterRule(_localctx, 22, MavkaParser::RuleOp_urshift);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(461);
    match(MavkaParser::GREATER);
    setState(462);
    match(MavkaParser::GREATER);
    setState(463);
    match(MavkaParser::GREATER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_ltContext ------------------------------------------------------------------

MavkaParser::Op_ltContext::Op_ltContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Op_ltContext::LESSER() {
  return getToken(MavkaParser::LESSER, 0);
}

tree::TerminalNode* MavkaParser::Op_ltContext::KW_SM_WORD() {
  return getToken(MavkaParser::KW_SM_WORD, 0);
}


size_t MavkaParser::Op_ltContext::getRuleIndex() const {
  return MavkaParser::RuleOp_lt;
}

void MavkaParser::Op_ltContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_lt(this);
}

void MavkaParser::Op_ltContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_lt(this);
}


std::any MavkaParser::Op_ltContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_lt(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_ltContext* MavkaParser::op_lt() {
  Op_ltContext *_localctx = _tracker.createInstance<Op_ltContext>(_ctx, getState());
  enterRule(_localctx, 24, MavkaParser::RuleOp_lt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(465);
    _la = _input->LA(1);
    if (!(_la == MavkaParser::KW_SM_WORD

    || _la == MavkaParser::LESSER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_lteContext ------------------------------------------------------------------

MavkaParser::Op_lteContext::Op_lteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Op_lteContext::LESSER() {
  return getToken(MavkaParser::LESSER, 0);
}

tree::TerminalNode* MavkaParser::Op_lteContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

tree::TerminalNode* MavkaParser::Op_lteContext::KW_NOT() {
  return getToken(MavkaParser::KW_NOT, 0);
}

tree::TerminalNode* MavkaParser::Op_lteContext::KW_GR_WORD() {
  return getToken(MavkaParser::KW_GR_WORD, 0);
}


size_t MavkaParser::Op_lteContext::getRuleIndex() const {
  return MavkaParser::RuleOp_lte;
}

void MavkaParser::Op_lteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_lte(this);
}

void MavkaParser::Op_lteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_lte(this);
}


std::any MavkaParser::Op_lteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_lte(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_lteContext* MavkaParser::op_lte() {
  Op_lteContext *_localctx = _tracker.createInstance<Op_lteContext>(_ctx, getState());
  enterRule(_localctx, 26, MavkaParser::RuleOp_lte);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(471);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::LESSER: {
        enterOuterAlt(_localctx, 1);
        setState(467);
        match(MavkaParser::LESSER);
        setState(468);
        match(MavkaParser::EQUAL);
        break;
      }

      case MavkaParser::KW_NOT: {
        enterOuterAlt(_localctx, 2);
        setState(469);
        match(MavkaParser::KW_NOT);
        setState(470);
        match(MavkaParser::KW_GR_WORD);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_gtContext ------------------------------------------------------------------

MavkaParser::Op_gtContext::Op_gtContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Op_gtContext::GREATER() {
  return getToken(MavkaParser::GREATER, 0);
}

tree::TerminalNode* MavkaParser::Op_gtContext::KW_GR_WORD() {
  return getToken(MavkaParser::KW_GR_WORD, 0);
}


size_t MavkaParser::Op_gtContext::getRuleIndex() const {
  return MavkaParser::RuleOp_gt;
}

void MavkaParser::Op_gtContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_gt(this);
}

void MavkaParser::Op_gtContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_gt(this);
}


std::any MavkaParser::Op_gtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_gt(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_gtContext* MavkaParser::op_gt() {
  Op_gtContext *_localctx = _tracker.createInstance<Op_gtContext>(_ctx, getState());
  enterRule(_localctx, 28, MavkaParser::RuleOp_gt);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(473);
    _la = _input->LA(1);
    if (!(_la == MavkaParser::KW_GR_WORD

    || _la == MavkaParser::GREATER)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_gteContext ------------------------------------------------------------------

MavkaParser::Op_gteContext::Op_gteContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Op_gteContext::GREATER() {
  return getToken(MavkaParser::GREATER, 0);
}

tree::TerminalNode* MavkaParser::Op_gteContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

tree::TerminalNode* MavkaParser::Op_gteContext::KW_NOT() {
  return getToken(MavkaParser::KW_NOT, 0);
}

tree::TerminalNode* MavkaParser::Op_gteContext::KW_SM_WORD() {
  return getToken(MavkaParser::KW_SM_WORD, 0);
}


size_t MavkaParser::Op_gteContext::getRuleIndex() const {
  return MavkaParser::RuleOp_gte;
}

void MavkaParser::Op_gteContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_gte(this);
}

void MavkaParser::Op_gteContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_gte(this);
}


std::any MavkaParser::Op_gteContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_gte(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_gteContext* MavkaParser::op_gte() {
  Op_gteContext *_localctx = _tracker.createInstance<Op_gteContext>(_ctx, getState());
  enterRule(_localctx, 30, MavkaParser::RuleOp_gte);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(479);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::GREATER: {
        enterOuterAlt(_localctx, 1);
        setState(475);
        match(MavkaParser::GREATER);
        setState(476);
        match(MavkaParser::EQUAL);
        break;
      }

      case MavkaParser::KW_NOT: {
        enterOuterAlt(_localctx, 2);
        setState(477);
        match(MavkaParser::KW_NOT);
        setState(478);
        match(MavkaParser::KW_SM_WORD);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_eqContext ------------------------------------------------------------------

MavkaParser::Op_eqContext::Op_eqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Op_eqContext::EQUAL() {
  return getTokens(MavkaParser::EQUAL);
}

tree::TerminalNode* MavkaParser::Op_eqContext::EQUAL(size_t i) {
  return getToken(MavkaParser::EQUAL, i);
}

tree::TerminalNode* MavkaParser::Op_eqContext::KW_EQ_WORD() {
  return getToken(MavkaParser::KW_EQ_WORD, 0);
}


size_t MavkaParser::Op_eqContext::getRuleIndex() const {
  return MavkaParser::RuleOp_eq;
}

void MavkaParser::Op_eqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_eq(this);
}

void MavkaParser::Op_eqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_eq(this);
}


std::any MavkaParser::Op_eqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_eq(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_eqContext* MavkaParser::op_eq() {
  Op_eqContext *_localctx = _tracker.createInstance<Op_eqContext>(_ctx, getState());
  enterRule(_localctx, 32, MavkaParser::RuleOp_eq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(484);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::EQUAL: {
        enterOuterAlt(_localctx, 1);
        setState(481);
        match(MavkaParser::EQUAL);
        setState(482);
        match(MavkaParser::EQUAL);
        break;
      }

      case MavkaParser::KW_EQ_WORD: {
        enterOuterAlt(_localctx, 2);
        setState(483);
        match(MavkaParser::KW_EQ_WORD);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_neqContext ------------------------------------------------------------------

MavkaParser::Op_neqContext::Op_neqContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Op_neqContext::EXCLAMATION() {
  return getToken(MavkaParser::EXCLAMATION, 0);
}

tree::TerminalNode* MavkaParser::Op_neqContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

tree::TerminalNode* MavkaParser::Op_neqContext::KW_NOT() {
  return getToken(MavkaParser::KW_NOT, 0);
}

tree::TerminalNode* MavkaParser::Op_neqContext::KW_EQ_WORD() {
  return getToken(MavkaParser::KW_EQ_WORD, 0);
}


size_t MavkaParser::Op_neqContext::getRuleIndex() const {
  return MavkaParser::RuleOp_neq;
}

void MavkaParser::Op_neqContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_neq(this);
}

void MavkaParser::Op_neqContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_neq(this);
}


std::any MavkaParser::Op_neqContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_neq(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_neqContext* MavkaParser::op_neq() {
  Op_neqContext *_localctx = _tracker.createInstance<Op_neqContext>(_ctx, getState());
  enterRule(_localctx, 34, MavkaParser::RuleOp_neq);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(490);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::EXCLAMATION: {
        enterOuterAlt(_localctx, 1);
        setState(486);
        match(MavkaParser::EXCLAMATION);
        setState(487);
        match(MavkaParser::EQUAL);
        break;
      }

      case MavkaParser::KW_NOT: {
        enterOuterAlt(_localctx, 2);
        setState(488);
        match(MavkaParser::KW_NOT);
        setState(489);
        match(MavkaParser::KW_EQ_WORD);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_landContext ------------------------------------------------------------------

MavkaParser::Op_landContext::Op_landContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Op_landContext::AND() {
  return getTokens(MavkaParser::AND);
}

tree::TerminalNode* MavkaParser::Op_landContext::AND(size_t i) {
  return getToken(MavkaParser::AND, i);
}

tree::TerminalNode* MavkaParser::Op_landContext::KW_AND() {
  return getToken(MavkaParser::KW_AND, 0);
}


size_t MavkaParser::Op_landContext::getRuleIndex() const {
  return MavkaParser::RuleOp_land;
}

void MavkaParser::Op_landContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_land(this);
}

void MavkaParser::Op_landContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_land(this);
}


std::any MavkaParser::Op_landContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_land(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_landContext* MavkaParser::op_land() {
  Op_landContext *_localctx = _tracker.createInstance<Op_landContext>(_ctx, getState());
  enterRule(_localctx, 36, MavkaParser::RuleOp_land);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(495);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::AND: {
        enterOuterAlt(_localctx, 1);
        setState(492);
        match(MavkaParser::AND);
        setState(493);
        match(MavkaParser::AND);
        break;
      }

      case MavkaParser::KW_AND: {
        enterOuterAlt(_localctx, 2);
        setState(494);
        match(MavkaParser::KW_AND);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_lorContext ------------------------------------------------------------------

MavkaParser::Op_lorContext::Op_lorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Op_lorContext::OR() {
  return getTokens(MavkaParser::OR);
}

tree::TerminalNode* MavkaParser::Op_lorContext::OR(size_t i) {
  return getToken(MavkaParser::OR, i);
}

tree::TerminalNode* MavkaParser::Op_lorContext::KW_OR() {
  return getToken(MavkaParser::KW_OR, 0);
}


size_t MavkaParser::Op_lorContext::getRuleIndex() const {
  return MavkaParser::RuleOp_lor;
}

void MavkaParser::Op_lorContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_lor(this);
}

void MavkaParser::Op_lorContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_lor(this);
}


std::any MavkaParser::Op_lorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_lor(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_lorContext* MavkaParser::op_lor() {
  Op_lorContext *_localctx = _tracker.createInstance<Op_lorContext>(_ctx, getState());
  enterRule(_localctx, 38, MavkaParser::RuleOp_lor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(500);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::OR: {
        enterOuterAlt(_localctx, 1);
        setState(497);
        match(MavkaParser::OR);
        setState(498);
        match(MavkaParser::OR);
        break;
      }

      case MavkaParser::KW_OR: {
        enterOuterAlt(_localctx, 2);
        setState(499);
        match(MavkaParser::KW_OR);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_not_containsContext ------------------------------------------------------------------

MavkaParser::Op_not_containsContext::Op_not_containsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Op_not_containsContext::KW_NOT() {
  return getToken(MavkaParser::KW_NOT, 0);
}

tree::TerminalNode* MavkaParser::Op_not_containsContext::KW_HAS_WORD() {
  return getToken(MavkaParser::KW_HAS_WORD, 0);
}


size_t MavkaParser::Op_not_containsContext::getRuleIndex() const {
  return MavkaParser::RuleOp_not_contains;
}

void MavkaParser::Op_not_containsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_not_contains(this);
}

void MavkaParser::Op_not_containsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_not_contains(this);
}


std::any MavkaParser::Op_not_containsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_not_contains(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_not_containsContext* MavkaParser::op_not_contains() {
  Op_not_containsContext *_localctx = _tracker.createInstance<Op_not_containsContext>(_ctx, getState());
  enterRule(_localctx, 40, MavkaParser::RuleOp_not_contains);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(502);
    match(MavkaParser::KW_NOT);
    setState(503);
    match(MavkaParser::KW_HAS_WORD);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Op_not_isContext ------------------------------------------------------------------

MavkaParser::Op_not_isContext::Op_not_isContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Op_not_isContext::KW_NOT() {
  return getToken(MavkaParser::KW_NOT, 0);
}

tree::TerminalNode* MavkaParser::Op_not_isContext::KW_IS() {
  return getToken(MavkaParser::KW_IS, 0);
}


size_t MavkaParser::Op_not_isContext::getRuleIndex() const {
  return MavkaParser::RuleOp_not_is;
}

void MavkaParser::Op_not_isContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterOp_not_is(this);
}

void MavkaParser::Op_not_isContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitOp_not_is(this);
}


std::any MavkaParser::Op_not_isContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitOp_not_is(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Op_not_isContext* MavkaParser::op_not_is() {
  Op_not_isContext *_localctx = _tracker.createInstance<Op_not_isContext>(_ctx, getState());
  enterRule(_localctx, 42, MavkaParser::RuleOp_not_is);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(505);
    match(MavkaParser::KW_NOT);
    setState(506);
    match(MavkaParser::KW_IS);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GendefContext ------------------------------------------------------------------

MavkaParser::GendefContext::GendefContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::GendefContext::ID() {
  return getToken(MavkaParser::ID, 0);
}


size_t MavkaParser::GendefContext::getRuleIndex() const {
  return MavkaParser::RuleGendef;
}

void MavkaParser::GendefContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGendef(this);
}

void MavkaParser::GendefContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGendef(this);
}


std::any MavkaParser::GendefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitGendef(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::GendefContext* MavkaParser::gendef() {
  GendefContext *_localctx = _tracker.createInstance<GendefContext>(_ctx, getState());
  enterRule(_localctx, 44, MavkaParser::RuleGendef);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(508);
    match(MavkaParser::ID);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExprContext ------------------------------------------------------------------

MavkaParser::ExprContext::ExprContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MavkaParser::ExprContext::getRuleIndex() const {
  return MavkaParser::RuleExpr;
}

void MavkaParser::ExprContext::copyFrom(ExprContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_operationContext ------------------------------------------------------------------

MavkaParser::OperationContext* MavkaParser::Expr_operationContext::operation() {
  return getRuleContext<MavkaParser::OperationContext>(0);
}

MavkaParser::Expr_operationContext::Expr_operationContext(ExprContext *ctx) { copyFrom(ctx); }

void MavkaParser::Expr_operationContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterExpr_operation(this);
}
void MavkaParser::Expr_operationContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitExpr_operation(this);
}

std::any MavkaParser::Expr_operationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitExpr_operation(this);
  else
    return visitor->visitChildren(this);
}
MavkaParser::ExprContext* MavkaParser::expr() {
  ExprContext *_localctx = _tracker.createInstance<ExprContext>(_ctx, getState());
  enterRule(_localctx, 46, MavkaParser::RuleExpr);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    _localctx = _tracker.createInstance<MavkaParser::Expr_operationContext>(_localctx);
    enterOuterAlt(_localctx, 1);
    setState(510);
    operation(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Structure_defineContext ------------------------------------------------------------------

MavkaParser::Structure_defineContext::Structure_defineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Structure_defineContext::KW_STRUCTURE() {
  return getToken(MavkaParser::KW_STRUCTURE, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::Structure_defineContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::Structure_defineContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Structure_defineContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Structure_defineContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Structure_defineContext::KW_END() {
  return getToken(MavkaParser::KW_END, 0);
}

tree::TerminalNode* MavkaParser::Structure_defineContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

tree::TerminalNode* MavkaParser::Structure_defineContext::KW_IS() {
  return getToken(MavkaParser::KW_IS, 0);
}

std::vector<MavkaParser::Structure_elementContext *> MavkaParser::Structure_defineContext::structure_element() {
  return getRuleContexts<MavkaParser::Structure_elementContext>();
}

MavkaParser::Structure_elementContext* MavkaParser::Structure_defineContext::structure_element(size_t i) {
  return getRuleContext<MavkaParser::Structure_elementContext>(i);
}

MavkaParser::AtomContext* MavkaParser::Structure_defineContext::atom() {
  return getRuleContext<MavkaParser::AtomContext>(0);
}


size_t MavkaParser::Structure_defineContext::getRuleIndex() const {
  return MavkaParser::RuleStructure_define;
}

void MavkaParser::Structure_defineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructure_define(this);
}

void MavkaParser::Structure_defineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructure_define(this);
}


std::any MavkaParser::Structure_defineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitStructure_define(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Structure_defineContext* MavkaParser::structure_define() {
  Structure_defineContext *_localctx = _tracker.createInstance<Structure_defineContext>(_ctx, getState());
  enterRule(_localctx, 48, MavkaParser::RuleStructure_define);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(512);
    match(MavkaParser::KW_STRUCTURE);
    setState(513);
    antlrcpp::downCast<Structure_defineContext *>(_localctx)->id = match(MavkaParser::ID);
    setState(516);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::KW_IS) {
      setState(514);
      match(MavkaParser::KW_IS);
      setState(515);
      antlrcpp::downCast<Structure_defineContext *>(_localctx)->s_parent = atom(0);
    }
    setState(518);
    nl();
    setState(530);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(519);
      structure_element();
      setState(520);
      nls();
      setState(527);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
      while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
        if (alt == 1) {
          setState(521);
          nl();
          setState(522);
          nls();
          setState(523);
          structure_element(); 
        }
        setState(529);
        _errHandler->sync(this);
        alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 27, _ctx);
      }
    }
    setState(532);
    nls();
    setState(533);
    match(MavkaParser::KW_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Structure_elementContext ------------------------------------------------------------------

MavkaParser::Structure_elementContext::Structure_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::ParamContext* MavkaParser::Structure_elementContext::param() {
  return getRuleContext<MavkaParser::ParamContext>(0);
}


size_t MavkaParser::Structure_elementContext::getRuleIndex() const {
  return MavkaParser::RuleStructure_element;
}

void MavkaParser::Structure_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterStructure_element(this);
}

void MavkaParser::Structure_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitStructure_element(this);
}


std::any MavkaParser::Structure_elementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitStructure_element(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Structure_elementContext* MavkaParser::structure_element() {
  Structure_elementContext *_localctx = _tracker.createInstance<Structure_elementContext>(_ctx, getState());
  enterRule(_localctx, 50, MavkaParser::RuleStructure_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(535);
    param();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Diia_defineContext ------------------------------------------------------------------

MavkaParser::Diia_defineContext::Diia_defineContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Diia_defineContext::KW_DIIA() {
  return getToken(MavkaParser::KW_DIIA, 0);
}

tree::TerminalNode* MavkaParser::Diia_defineContext::PAREN_OPEN() {
  return getToken(MavkaParser::PAREN_OPEN, 0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Diia_defineContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Diia_defineContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Diia_defineContext::PAREN_CLOSE() {
  return getToken(MavkaParser::PAREN_CLOSE, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::Diia_defineContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::Diia_defineContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

tree::TerminalNode* MavkaParser::Diia_defineContext::KW_END() {
  return getToken(MavkaParser::KW_END, 0);
}

std::vector<MavkaParser::Diia_paramContext *> MavkaParser::Diia_defineContext::diia_param() {
  return getRuleContexts<MavkaParser::Diia_paramContext>();
}

MavkaParser::Diia_paramContext* MavkaParser::Diia_defineContext::diia_param(size_t i) {
  return getRuleContext<MavkaParser::Diia_paramContext>(i);
}

tree::TerminalNode* MavkaParser::Diia_defineContext::KW_ASYNC() {
  return getToken(MavkaParser::KW_ASYNC, 0);
}

tree::TerminalNode* MavkaParser::Diia_defineContext::KW_SPEC() {
  return getToken(MavkaParser::KW_SPEC, 0);
}

tree::TerminalNode* MavkaParser::Diia_defineContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::TypesContext* MavkaParser::Diia_defineContext::types() {
  return getRuleContext<MavkaParser::TypesContext>(0);
}

MavkaParser::BodyContext* MavkaParser::Diia_defineContext::body() {
  return getRuleContext<MavkaParser::BodyContext>(0);
}

tree::TerminalNode* MavkaParser::Diia_defineContext::DOT() {
  return getToken(MavkaParser::DOT, 0);
}

std::vector<tree::TerminalNode *> MavkaParser::Diia_defineContext::COMA() {
  return getTokens(MavkaParser::COMA);
}

tree::TerminalNode* MavkaParser::Diia_defineContext::COMA(size_t i) {
  return getToken(MavkaParser::COMA, i);
}

MavkaParser::AtomContext* MavkaParser::Diia_defineContext::atom() {
  return getRuleContext<MavkaParser::AtomContext>(0);
}


size_t MavkaParser::Diia_defineContext::getRuleIndex() const {
  return MavkaParser::RuleDiia_define;
}

void MavkaParser::Diia_defineContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiia_define(this);
}

void MavkaParser::Diia_defineContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiia_define(this);
}


std::any MavkaParser::Diia_defineContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitDiia_define(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Diia_defineContext* MavkaParser::diia_define() {
  Diia_defineContext *_localctx = _tracker.createInstance<Diia_defineContext>(_ctx, getState());
  enterRule(_localctx, 52, MavkaParser::RuleDiia_define);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(538);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::KW_ASYNC) {
      setState(537);
      antlrcpp::downCast<Diia_defineContext *>(_localctx)->d_async = match(MavkaParser::KW_ASYNC);
    }
    setState(541);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::KW_SPEC) {
      setState(540);
      antlrcpp::downCast<Diia_defineContext *>(_localctx)->d_spec = match(MavkaParser::KW_SPEC);
    }
    setState(543);
    match(MavkaParser::KW_DIIA);
    setState(550);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 32, _ctx)) {
    case 1: {
      setState(547);
      _errHandler->sync(this);

      switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 31, _ctx)) {
      case 1: {
        setState(544);
        antlrcpp::downCast<Diia_defineContext *>(_localctx)->d_structure = atom(0);
        setState(545);
        match(MavkaParser::DOT);
        break;
      }

      default:
        break;
      }
      setState(549);
      antlrcpp::downCast<Diia_defineContext *>(_localctx)->d_name = match(MavkaParser::ID);
      break;
    }

    default:
      break;
    }
    setState(552);
    match(MavkaParser::PAREN_OPEN);
    setState(553);
    nls();
    setState(565);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(554);
      diia_param();
      setState(555);
      nls();
      setState(562);
      _errHandler->sync(this);
      _la = _input->LA(1);
      while (_la == MavkaParser::COMA) {
        setState(556);
        match(MavkaParser::COMA);
        setState(557);
        nls();
        setState(558);
        diia_param();
        setState(564);
        _errHandler->sync(this);
        _la = _input->LA(1);
      }
    }
    setState(567);
    nls();
    setState(568);
    match(MavkaParser::PAREN_CLOSE);
    setState(570);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::PAREN_OPEN

    || _la == MavkaParser::ID) {
      setState(569);
      antlrcpp::downCast<Diia_defineContext *>(_localctx)->d_type = types();
    }
    setState(572);
    nl();
    setState(576);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5920008098487526220) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 13) != 0)) {
      setState(573);
      antlrcpp::downCast<Diia_defineContext *>(_localctx)->d_body = body();
      setState(574);
      nl();
    }
    setState(578);
    nls();
    setState(579);
    match(MavkaParser::KW_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Diia_paramContext ------------------------------------------------------------------

MavkaParser::Diia_paramContext::Diia_paramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::ParamContext* MavkaParser::Diia_paramContext::param() {
  return getRuleContext<MavkaParser::ParamContext>(0);
}


size_t MavkaParser::Diia_paramContext::getRuleIndex() const {
  return MavkaParser::RuleDiia_param;
}

void MavkaParser::Diia_paramContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterDiia_param(this);
}

void MavkaParser::Diia_paramContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitDiia_param(this);
}


std::any MavkaParser::Diia_paramContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitDiia_param(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Diia_paramContext* MavkaParser::diia_param() {
  Diia_paramContext *_localctx = _tracker.createInstance<Diia_paramContext>(_ctx, getState());
  enterRule(_localctx, 54, MavkaParser::RuleDiia_param);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(581);
    param();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- AssignContext ------------------------------------------------------------------

MavkaParser::AssignContext::AssignContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::AssignContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

tree::TerminalNode* MavkaParser::AssignContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

MavkaParser::ExprContext* MavkaParser::AssignContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

tree::TerminalNode* MavkaParser::AssignContext::COLON() {
  return getToken(MavkaParser::COLON, 0);
}


size_t MavkaParser::AssignContext::getRuleIndex() const {
  return MavkaParser::RuleAssign;
}

void MavkaParser::AssignContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterAssign(this);
}

void MavkaParser::AssignContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitAssign(this);
}


std::any MavkaParser::AssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitAssign(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::AssignContext* MavkaParser::assign() {
  AssignContext *_localctx = _tracker.createInstance<AssignContext>(_ctx, getState());
  enterRule(_localctx, 56, MavkaParser::RuleAssign);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(583);
    antlrcpp::downCast<AssignContext *>(_localctx)->id = match(MavkaParser::ID);
    setState(587);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::EQUAL: {
        setState(584);
        antlrcpp::downCast<AssignContext *>(_localctx)->simpleas = match(MavkaParser::EQUAL);
        break;
      }

      case MavkaParser::COLON: {
        setState(585);
        antlrcpp::downCast<AssignContext *>(_localctx)->parentas = match(MavkaParser::COLON);
        setState(586);
        match(MavkaParser::EQUAL);
        break;
      }

    default:
      throw NoViableAltException(this);
    }

    setState(589);
    antlrcpp::downCast<AssignContext *>(_localctx)->value_expr = expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- SetContext ------------------------------------------------------------------

MavkaParser::SetContext::SetContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::SetContext::DOT() {
  return getToken(MavkaParser::DOT, 0);
}

tree::TerminalNode* MavkaParser::SetContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

MavkaParser::AtomContext* MavkaParser::SetContext::atom() {
  return getRuleContext<MavkaParser::AtomContext>(0);
}

tree::TerminalNode* MavkaParser::SetContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::ExprContext* MavkaParser::SetContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}


size_t MavkaParser::SetContext::getRuleIndex() const {
  return MavkaParser::RuleSet;
}

void MavkaParser::SetContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterSet(this);
}

void MavkaParser::SetContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitSet(this);
}


std::any MavkaParser::SetContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitSet(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::SetContext* MavkaParser::set() {
  SetContext *_localctx = _tracker.createInstance<SetContext>(_ctx, getState());
  enterRule(_localctx, 58, MavkaParser::RuleSet);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(591);
    antlrcpp::downCast<SetContext *>(_localctx)->object = atom(0);
    setState(592);
    match(MavkaParser::DOT);
    setState(593);
    antlrcpp::downCast<SetContext *>(_localctx)->id = match(MavkaParser::ID);
    setState(594);
    match(MavkaParser::EQUAL);

    setState(595);
    antlrcpp::downCast<SetContext *>(_localctx)->value_expr = expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Position_setContext ------------------------------------------------------------------

MavkaParser::Position_setContext::Position_setContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Position_setContext::BRACKET_OPEN() {
  return getToken(MavkaParser::BRACKET_OPEN, 0);
}

tree::TerminalNode* MavkaParser::Position_setContext::BRACKET_CLOSE() {
  return getToken(MavkaParser::BRACKET_CLOSE, 0);
}

tree::TerminalNode* MavkaParser::Position_setContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

MavkaParser::AtomContext* MavkaParser::Position_setContext::atom() {
  return getRuleContext<MavkaParser::AtomContext>(0);
}

std::vector<MavkaParser::ExprContext *> MavkaParser::Position_setContext::expr() {
  return getRuleContexts<MavkaParser::ExprContext>();
}

MavkaParser::ExprContext* MavkaParser::Position_setContext::expr(size_t i) {
  return getRuleContext<MavkaParser::ExprContext>(i);
}


size_t MavkaParser::Position_setContext::getRuleIndex() const {
  return MavkaParser::RulePosition_set;
}

void MavkaParser::Position_setContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterPosition_set(this);
}

void MavkaParser::Position_setContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitPosition_set(this);
}


std::any MavkaParser::Position_setContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitPosition_set(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Position_setContext* MavkaParser::position_set() {
  Position_setContext *_localctx = _tracker.createInstance<Position_setContext>(_ctx, getState());
  enterRule(_localctx, 60, MavkaParser::RulePosition_set);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(597);
    antlrcpp::downCast<Position_setContext *>(_localctx)->object = atom(0);
    setState(598);
    match(MavkaParser::BRACKET_OPEN);
    setState(599);
    antlrcpp::downCast<Position_setContext *>(_localctx)->idx = expr();
    setState(600);
    match(MavkaParser::BRACKET_CLOSE);
    setState(601);
    match(MavkaParser::EQUAL);

    setState(602);
    antlrcpp::downCast<Position_setContext *>(_localctx)->value_expr = expr();
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- IfContext ------------------------------------------------------------------

MavkaParser::IfContext::IfContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::IfContext::KW_IF() {
  return getToken(MavkaParser::KW_IF, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::IfContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::IfContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

MavkaParser::ExprContext* MavkaParser::IfContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

tree::TerminalNode* MavkaParser::IfContext::KW_END() {
  return getToken(MavkaParser::KW_END, 0);
}

std::vector<MavkaParser::BodyContext *> MavkaParser::IfContext::body() {
  return getRuleContexts<MavkaParser::BodyContext>();
}

MavkaParser::BodyContext* MavkaParser::IfContext::body(size_t i) {
  return getRuleContext<MavkaParser::BodyContext>(i);
}

tree::TerminalNode* MavkaParser::IfContext::KW_ELSE() {
  return getToken(MavkaParser::KW_ELSE, 0);
}

MavkaParser::IfContext* MavkaParser::IfContext::if_() {
  return getRuleContext<MavkaParser::IfContext>(0);
}


size_t MavkaParser::IfContext::getRuleIndex() const {
  return MavkaParser::RuleIf;
}

void MavkaParser::IfContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterIf(this);
}

void MavkaParser::IfContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitIf(this);
}


std::any MavkaParser::IfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitIf(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::IfContext* MavkaParser::if_() {
  IfContext *_localctx = _tracker.createInstance<IfContext>(_ctx, getState());
  enterRule(_localctx, 62, MavkaParser::RuleIf);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(604);
    match(MavkaParser::KW_IF);
    setState(605);
    antlrcpp::downCast<IfContext *>(_localctx)->cond = expr();
    setState(606);
    nl();
    setState(610);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5920008098487526220) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 13) != 0)) {
      setState(607);
      antlrcpp::downCast<IfContext *>(_localctx)->ifok = body();
      setState(608);
      nl();
    }
    setState(622);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 40, _ctx)) {
    case 1: {
      setState(617);
      _errHandler->sync(this);

      _la = _input->LA(1);
      if (_la == MavkaParser::KW_ELSE) {
        setState(612);
        match(MavkaParser::KW_ELSE);
        setState(613);
        nl();
        setState(614);
        antlrcpp::downCast<IfContext *>(_localctx)->ifnot = body();
        setState(615);
        nl();
      }
      setState(619);
      match(MavkaParser::KW_END);
      break;
    }

    case 2: {
      setState(620);
      match(MavkaParser::KW_ELSE);
      setState(621);
      antlrcpp::downCast<IfContext *>(_localctx)->ifnotif = if_();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- WhileContext ------------------------------------------------------------------

MavkaParser::WhileContext::WhileContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::WhileContext::KW_WHILE() {
  return getToken(MavkaParser::KW_WHILE, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::WhileContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::WhileContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

tree::TerminalNode* MavkaParser::WhileContext::KW_END() {
  return getToken(MavkaParser::KW_END, 0);
}

MavkaParser::OperationContext* MavkaParser::WhileContext::operation() {
  return getRuleContext<MavkaParser::OperationContext>(0);
}

MavkaParser::BodyContext* MavkaParser::WhileContext::body() {
  return getRuleContext<MavkaParser::BodyContext>(0);
}


size_t MavkaParser::WhileContext::getRuleIndex() const {
  return MavkaParser::RuleWhile;
}

void MavkaParser::WhileContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterWhile(this);
}

void MavkaParser::WhileContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitWhile(this);
}


std::any MavkaParser::WhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitWhile(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::WhileContext* MavkaParser::while_() {
  WhileContext *_localctx = _tracker.createInstance<WhileContext>(_ctx, getState());
  enterRule(_localctx, 64, MavkaParser::RuleWhile);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(624);
    match(MavkaParser::KW_WHILE);
    setState(625);
    antlrcpp::downCast<WhileContext *>(_localctx)->cond = operation(0);
    setState(626);
    nl();
    setState(630);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5920008098487526220) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 13) != 0)) {
      setState(627);
      antlrcpp::downCast<WhileContext *>(_localctx)->w_body = body();
      setState(628);
      nl();
    }
    setState(632);
    match(MavkaParser::KW_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- BodyContext ------------------------------------------------------------------

MavkaParser::BodyContext::BodyContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::Body_elementContext *> MavkaParser::BodyContext::body_element() {
  return getRuleContexts<MavkaParser::Body_elementContext>();
}

MavkaParser::Body_elementContext* MavkaParser::BodyContext::body_element(size_t i) {
  return getRuleContext<MavkaParser::Body_elementContext>(i);
}

std::vector<MavkaParser::NlContext *> MavkaParser::BodyContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::BodyContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}


size_t MavkaParser::BodyContext::getRuleIndex() const {
  return MavkaParser::RuleBody;
}

void MavkaParser::BodyContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody(this);
}

void MavkaParser::BodyContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody(this);
}


std::any MavkaParser::BodyContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitBody(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::BodyContext* MavkaParser::body() {
  BodyContext *_localctx = _tracker.createInstance<BodyContext>(_ctx, getState());
  enterRule(_localctx, 66, MavkaParser::RuleBody);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(634);
    body_element();
    setState(640);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(635);
        nl();
        setState(636);
        body_element(); 
      }
      setState(642);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 42, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Body_elementContext ------------------------------------------------------------------

MavkaParser::Body_elementContext::Body_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

MavkaParser::Structure_defineContext* MavkaParser::Body_elementContext::structure_define() {
  return getRuleContext<MavkaParser::Structure_defineContext>(0);
}

MavkaParser::Diia_defineContext* MavkaParser::Body_elementContext::diia_define() {
  return getRuleContext<MavkaParser::Diia_defineContext>(0);
}

MavkaParser::AssignContext* MavkaParser::Body_elementContext::assign() {
  return getRuleContext<MavkaParser::AssignContext>(0);
}

MavkaParser::SetContext* MavkaParser::Body_elementContext::set() {
  return getRuleContext<MavkaParser::SetContext>(0);
}

MavkaParser::Position_setContext* MavkaParser::Body_elementContext::position_set() {
  return getRuleContext<MavkaParser::Position_setContext>(0);
}

MavkaParser::IfContext* MavkaParser::Body_elementContext::if_() {
  return getRuleContext<MavkaParser::IfContext>(0);
}

MavkaParser::WhileContext* MavkaParser::Body_elementContext::while_() {
  return getRuleContext<MavkaParser::WhileContext>(0);
}

MavkaParser::ExprContext* MavkaParser::Body_elementContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

MavkaParser::ReturnContext* MavkaParser::Body_elementContext::return_() {
  return getRuleContext<MavkaParser::ReturnContext>(0);
}

MavkaParser::TryContext* MavkaParser::Body_elementContext::try_() {
  return getRuleContext<MavkaParser::TryContext>(0);
}

MavkaParser::ThrowContext* MavkaParser::Body_elementContext::throw_() {
  return getRuleContext<MavkaParser::ThrowContext>(0);
}

MavkaParser::TakeContext* MavkaParser::Body_elementContext::take() {
  return getRuleContext<MavkaParser::TakeContext>(0);
}

MavkaParser::ModuleContext* MavkaParser::Body_elementContext::module() {
  return getRuleContext<MavkaParser::ModuleContext>(0);
}

MavkaParser::GiveContext* MavkaParser::Body_elementContext::give() {
  return getRuleContext<MavkaParser::GiveContext>(0);
}


size_t MavkaParser::Body_elementContext::getRuleIndex() const {
  return MavkaParser::RuleBody_element;
}

void MavkaParser::Body_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterBody_element(this);
}

void MavkaParser::Body_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitBody_element(this);
}


std::any MavkaParser::Body_elementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitBody_element(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Body_elementContext* MavkaParser::body_element() {
  Body_elementContext *_localctx = _tracker.createInstance<Body_elementContext>(_ctx, getState());
  enterRule(_localctx, 68, MavkaParser::RuleBody_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(657);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 43, _ctx)) {
    case 1: {
      enterOuterAlt(_localctx, 1);
      setState(643);
      structure_define();
      break;
    }

    case 2: {
      enterOuterAlt(_localctx, 2);
      setState(644);
      diia_define();
      break;
    }

    case 3: {
      enterOuterAlt(_localctx, 3);
      setState(645);
      assign();
      break;
    }

    case 4: {
      enterOuterAlt(_localctx, 4);
      setState(646);
      set();
      break;
    }

    case 5: {
      enterOuterAlt(_localctx, 5);
      setState(647);
      position_set();
      break;
    }

    case 6: {
      enterOuterAlt(_localctx, 6);
      setState(648);
      if_();
      break;
    }

    case 7: {
      enterOuterAlt(_localctx, 7);
      setState(649);
      while_();
      break;
    }

    case 8: {
      enterOuterAlt(_localctx, 8);
      setState(650);
      expr();
      break;
    }

    case 9: {
      enterOuterAlt(_localctx, 9);
      setState(651);
      return_();
      break;
    }

    case 10: {
      enterOuterAlt(_localctx, 10);
      setState(652);
      try_();
      break;
    }

    case 11: {
      enterOuterAlt(_localctx, 11);
      setState(653);
      throw_();
      break;
    }

    case 12: {
      enterOuterAlt(_localctx, 12);
      setState(654);
      take();
      break;
    }

    case 13: {
      enterOuterAlt(_localctx, 13);
      setState(655);
      module();
      break;
    }

    case 14: {
      enterOuterAlt(_localctx, 14);
      setState(656);
      give();
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ReturnContext ------------------------------------------------------------------

MavkaParser::ReturnContext::ReturnContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::ReturnContext::KW_RETURN() {
  return getToken(MavkaParser::KW_RETURN, 0);
}

MavkaParser::ExprContext* MavkaParser::ReturnContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}


size_t MavkaParser::ReturnContext::getRuleIndex() const {
  return MavkaParser::RuleReturn;
}

void MavkaParser::ReturnContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterReturn(this);
}

void MavkaParser::ReturnContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitReturn(this);
}


std::any MavkaParser::ReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitReturn(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::ReturnContext* MavkaParser::return_() {
  ReturnContext *_localctx = _tracker.createInstance<ReturnContext>(_ctx, getState());
  enterRule(_localctx, 70, MavkaParser::RuleReturn);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(659);
    match(MavkaParser::KW_RETURN);
    setState(661);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 43) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 43)) & 218776835) != 0)) {
      setState(660);
      antlrcpp::downCast<ReturnContext *>(_localctx)->value_expr = expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ModuleContext ------------------------------------------------------------------

MavkaParser::ModuleContext::ModuleContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::ModuleContext::KW_MODULE() {
  return getToken(MavkaParser::KW_MODULE, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::ModuleContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::ModuleContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

tree::TerminalNode* MavkaParser::ModuleContext::KW_END() {
  return getToken(MavkaParser::KW_END, 0);
}

tree::TerminalNode* MavkaParser::ModuleContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::BodyContext* MavkaParser::ModuleContext::body() {
  return getRuleContext<MavkaParser::BodyContext>(0);
}


size_t MavkaParser::ModuleContext::getRuleIndex() const {
  return MavkaParser::RuleModule;
}

void MavkaParser::ModuleContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterModule(this);
}

void MavkaParser::ModuleContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitModule(this);
}


std::any MavkaParser::ModuleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitModule(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::ModuleContext* MavkaParser::module() {
  ModuleContext *_localctx = _tracker.createInstance<ModuleContext>(_ctx, getState());
  enterRule(_localctx, 72, MavkaParser::RuleModule);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(663);
    match(MavkaParser::KW_MODULE);
    setState(665);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(664);
      antlrcpp::downCast<ModuleContext *>(_localctx)->id = match(MavkaParser::ID);
    }
    setState(667);
    nl();
    setState(671);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5920008098487526220) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 13) != 0)) {
      setState(668);
      antlrcpp::downCast<ModuleContext *>(_localctx)->body_ = body();
      setState(669);
      nl();
    }
    setState(673);
    match(MavkaParser::KW_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TypeContext ------------------------------------------------------------------

MavkaParser::TypeContext::TypeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t MavkaParser::TypeContext::getRuleIndex() const {
  return MavkaParser::RuleType;
}

void MavkaParser::TypeContext::copyFrom(TypeContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Type_getContext ------------------------------------------------------------------

std::vector<MavkaParser::NlsContext *> MavkaParser::Type_getContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Type_getContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Type_getContext::DOT() {
  return getToken(MavkaParser::DOT, 0);
}

MavkaParser::TypeContext* MavkaParser::Type_getContext::type() {
  return getRuleContext<MavkaParser::TypeContext>(0);
}

tree::TerminalNode* MavkaParser::Type_getContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::Type_getContext::Type_getContext(TypeContext *ctx) { copyFrom(ctx); }

void MavkaParser::Type_getContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_get(this);
}
void MavkaParser::Type_getContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_get(this);
}

std::any MavkaParser::Type_getContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitType_get(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_nestedContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Type_nestedContext::PAREN_OPEN() {
  return getToken(MavkaParser::PAREN_OPEN, 0);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Type_nestedContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Type_nestedContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

MavkaParser::ExprContext* MavkaParser::Type_nestedContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}

tree::TerminalNode* MavkaParser::Type_nestedContext::PAREN_CLOSE() {
  return getToken(MavkaParser::PAREN_CLOSE, 0);
}

MavkaParser::Type_nestedContext::Type_nestedContext(TypeContext *ctx) { copyFrom(ctx); }

void MavkaParser::Type_nestedContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_nested(this);
}
void MavkaParser::Type_nestedContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_nested(this);
}

std::any MavkaParser::Type_nestedContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitType_nested(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Type_subjectContext ------------------------------------------------------------------

tree::TerminalNode* MavkaParser::Type_subjectContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::Type_subjectContext::Type_subjectContext(TypeContext *ctx) { copyFrom(ctx); }

void MavkaParser::Type_subjectContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterType_subject(this);
}
void MavkaParser::Type_subjectContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitType_subject(this);
}

std::any MavkaParser::Type_subjectContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitType_subject(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::TypeContext* MavkaParser::type() {
   return type(0);
}

MavkaParser::TypeContext* MavkaParser::type(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  MavkaParser::TypeContext *_localctx = _tracker.createInstance<TypeContext>(_ctx, parentState);
  MavkaParser::TypeContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 74;
  enterRecursionRule(_localctx, 74, MavkaParser::RuleType, precedence);

    

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    unrollRecursionContexts(parentContext);
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(683);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case MavkaParser::PAREN_OPEN: {
        _localctx = _tracker.createInstance<Type_nestedContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;

        setState(676);
        match(MavkaParser::PAREN_OPEN);
        setState(677);
        nls();
        setState(678);
        expr();
        setState(679);
        nls();
        setState(680);
        match(MavkaParser::PAREN_CLOSE);
        break;
      }

      case MavkaParser::ID: {
        _localctx = _tracker.createInstance<Type_subjectContext>(_localctx);
        _ctx = _localctx;
        previousContext = _localctx;
        setState(682);
        antlrcpp::downCast<Type_subjectContext *>(_localctx)->id = match(MavkaParser::ID);
        break;
      }

    default:
      throw NoViableAltException(this);
    }
    _ctx->stop = _input->LT(-1);
    setState(693);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<Type_getContext>(_tracker.createInstance<TypeContext>(parentContext, parentState));
        _localctx = newContext;
        newContext->object = previousContext;
        pushNewRecursionContext(newContext, startState, RuleType);
        setState(685);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(686);
        nls();
        setState(687);
        match(MavkaParser::DOT);
        setState(688);
        nls();
        setState(689);
        antlrcpp::downCast<Type_getContext *>(_localctx)->id = match(MavkaParser::ID); 
      }
      setState(695);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 48, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TypesContext ------------------------------------------------------------------

MavkaParser::TypesContext::TypesContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<MavkaParser::TypeContext *> MavkaParser::TypesContext::type() {
  return getRuleContexts<MavkaParser::TypeContext>();
}

MavkaParser::TypeContext* MavkaParser::TypesContext::type(size_t i) {
  return getRuleContext<MavkaParser::TypeContext>(i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::TypesContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::TypesContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::TypesContext::KW_OR() {
  return getTokens(MavkaParser::KW_OR);
}

tree::TerminalNode* MavkaParser::TypesContext::KW_OR(size_t i) {
  return getToken(MavkaParser::KW_OR, i);
}


size_t MavkaParser::TypesContext::getRuleIndex() const {
  return MavkaParser::RuleTypes;
}

void MavkaParser::TypesContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTypes(this);
}

void MavkaParser::TypesContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTypes(this);
}


std::any MavkaParser::TypesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitTypes(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::TypesContext* MavkaParser::types() {
  TypesContext *_localctx = _tracker.createInstance<TypesContext>(_ctx, getState());
  enterRule(_localctx, 76, MavkaParser::RuleTypes);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(696);
    type(0);
    setState(704);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(697);
        nls();
        setState(698);
        match(MavkaParser::KW_OR);
        setState(699);
        nls();
        setState(700);
        type(0); 
      }
      setState(706);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 49, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ParamContext ------------------------------------------------------------------

MavkaParser::ParamContext::ParamContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::ParamContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

MavkaParser::TypesContext* MavkaParser::ParamContext::types() {
  return getRuleContext<MavkaParser::TypesContext>(0);
}

tree::TerminalNode* MavkaParser::ParamContext::EQUAL() {
  return getToken(MavkaParser::EQUAL, 0);
}

MavkaParser::ExprContext* MavkaParser::ParamContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}


size_t MavkaParser::ParamContext::getRuleIndex() const {
  return MavkaParser::RuleParam;
}

void MavkaParser::ParamContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterParam(this);
}

void MavkaParser::ParamContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitParam(this);
}


std::any MavkaParser::ParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitParam(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::ParamContext* MavkaParser::param() {
  ParamContext *_localctx = _tracker.createInstance<ParamContext>(_ctx, getState());
  enterRule(_localctx, 78, MavkaParser::RuleParam);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(707);
    antlrcpp::downCast<ParamContext *>(_localctx)->id = match(MavkaParser::ID);
    setState(709);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::PAREN_OPEN

    || _la == MavkaParser::ID) {
      setState(708);
      types();
    }
    setState(713);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::EQUAL) {
      setState(711);
      match(MavkaParser::EQUAL);
      setState(712);
      expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TakeContext ------------------------------------------------------------------

MavkaParser::TakeContext::TakeContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::TakeContext::KW_TAKE() {
  return getToken(MavkaParser::KW_TAKE, 0);
}

std::vector<MavkaParser::Take_partContext *> MavkaParser::TakeContext::take_part() {
  return getRuleContexts<MavkaParser::Take_partContext>();
}

MavkaParser::Take_partContext* MavkaParser::TakeContext::take_part(size_t i) {
  return getRuleContext<MavkaParser::Take_partContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::TakeContext::DOT() {
  return getTokens(MavkaParser::DOT);
}

tree::TerminalNode* MavkaParser::TakeContext::DOT(size_t i) {
  return getToken(MavkaParser::DOT, i);
}

tree::TerminalNode* MavkaParser::TakeContext::ID() {
  return getToken(MavkaParser::ID, 0);
}


size_t MavkaParser::TakeContext::getRuleIndex() const {
  return MavkaParser::RuleTake;
}

void MavkaParser::TakeContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTake(this);
}

void MavkaParser::TakeContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTake(this);
}


std::any MavkaParser::TakeContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitTake(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::TakeContext* MavkaParser::take() {
  TakeContext *_localctx = _tracker.createInstance<TakeContext>(_ctx, getState());
  enterRule(_localctx, 80, MavkaParser::RuleTake);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(715);
    match(MavkaParser::KW_TAKE);
    setState(717);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 52, _ctx)) {
    case 1: {
      setState(716);
      antlrcpp::downCast<TakeContext *>(_localctx)->type_id = match(MavkaParser::ID);
      break;
    }

    default:
      break;
    }
    setState(719);
    take_part();
    setState(724);
    _errHandler->sync(this);
    _la = _input->LA(1);
    while (_la == MavkaParser::DOT) {
      setState(720);
      match(MavkaParser::DOT);
      setState(721);
      take_part();
      setState(726);
      _errHandler->sync(this);
      _la = _input->LA(1);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Take_partContext ------------------------------------------------------------------

MavkaParser::Take_partContext::Take_partContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::Take_partContext::ID() {
  return getToken(MavkaParser::ID, 0);
}

tree::TerminalNode* MavkaParser::Take_partContext::STRING() {
  return getToken(MavkaParser::STRING, 0);
}


size_t MavkaParser::Take_partContext::getRuleIndex() const {
  return MavkaParser::RuleTake_part;
}

void MavkaParser::Take_partContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTake_part(this);
}

void MavkaParser::Take_partContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTake_part(this);
}


std::any MavkaParser::Take_partContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitTake_part(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Take_partContext* MavkaParser::take_part() {
  Take_partContext *_localctx = _tracker.createInstance<Take_partContext>(_ctx, getState());
  enterRule(_localctx, 82, MavkaParser::RuleTake_part);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(727);
    _la = _input->LA(1);
    if (!(_la == MavkaParser::ID

    || _la == MavkaParser::STRING)) {
    _errHandler->recoverInline(this);
    }
    else {
      _errHandler->reportMatch(this);
      consume();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- GiveContext ------------------------------------------------------------------

MavkaParser::GiveContext::GiveContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::GiveContext::KW_GIVE() {
  return getToken(MavkaParser::KW_GIVE, 0);
}

std::vector<MavkaParser::Give_elementContext *> MavkaParser::GiveContext::give_element() {
  return getRuleContexts<MavkaParser::Give_elementContext>();
}

MavkaParser::Give_elementContext* MavkaParser::GiveContext::give_element(size_t i) {
  return getRuleContext<MavkaParser::Give_elementContext>(i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::GiveContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::GiveContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

std::vector<tree::TerminalNode *> MavkaParser::GiveContext::COMA() {
  return getTokens(MavkaParser::COMA);
}

tree::TerminalNode* MavkaParser::GiveContext::COMA(size_t i) {
  return getToken(MavkaParser::COMA, i);
}


size_t MavkaParser::GiveContext::getRuleIndex() const {
  return MavkaParser::RuleGive;
}

void MavkaParser::GiveContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGive(this);
}

void MavkaParser::GiveContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGive(this);
}


std::any MavkaParser::GiveContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitGive(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::GiveContext* MavkaParser::give() {
  GiveContext *_localctx = _tracker.createInstance<GiveContext>(_ctx, getState());
  enterRule(_localctx, 84, MavkaParser::RuleGive);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(729);
    match(MavkaParser::KW_GIVE);
    setState(730);
    give_element();
    setState(738);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(731);
        nls();
        setState(732);
        match(MavkaParser::COMA);
        setState(733);
        nls();
        setState(734);
        give_element(); 
      }
      setState(740);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 54, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Give_elementContext ------------------------------------------------------------------

MavkaParser::Give_elementContext::Give_elementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::Give_elementContext::ID() {
  return getTokens(MavkaParser::ID);
}

tree::TerminalNode* MavkaParser::Give_elementContext::ID(size_t i) {
  return getToken(MavkaParser::ID, i);
}

std::vector<MavkaParser::NlsContext *> MavkaParser::Give_elementContext::nls() {
  return getRuleContexts<MavkaParser::NlsContext>();
}

MavkaParser::NlsContext* MavkaParser::Give_elementContext::nls(size_t i) {
  return getRuleContext<MavkaParser::NlsContext>(i);
}

tree::TerminalNode* MavkaParser::Give_elementContext::KW_AS() {
  return getToken(MavkaParser::KW_AS, 0);
}


size_t MavkaParser::Give_elementContext::getRuleIndex() const {
  return MavkaParser::RuleGive_element;
}

void MavkaParser::Give_elementContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterGive_element(this);
}

void MavkaParser::Give_elementContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitGive_element(this);
}


std::any MavkaParser::Give_elementContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitGive_element(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::Give_elementContext* MavkaParser::give_element() {
  Give_elementContext *_localctx = _tracker.createInstance<Give_elementContext>(_ctx, getState());
  enterRule(_localctx, 86, MavkaParser::RuleGive_element);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(741);
    antlrcpp::downCast<Give_elementContext *>(_localctx)->id = match(MavkaParser::ID);
    setState(747);
    _errHandler->sync(this);

    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 55, _ctx)) {
    case 1: {
      setState(742);
      nls();
      setState(743);
      match(MavkaParser::KW_AS);
      setState(744);
      nls();
      setState(745);
      antlrcpp::downCast<Give_elementContext *>(_localctx)->as = match(MavkaParser::ID);
      break;
    }

    default:
      break;
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- TryContext ------------------------------------------------------------------

MavkaParser::TryContext::TryContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::TryContext::KW_TRY() {
  return getToken(MavkaParser::KW_TRY, 0);
}

std::vector<MavkaParser::NlContext *> MavkaParser::TryContext::nl() {
  return getRuleContexts<MavkaParser::NlContext>();
}

MavkaParser::NlContext* MavkaParser::TryContext::nl(size_t i) {
  return getRuleContext<MavkaParser::NlContext>(i);
}

tree::TerminalNode* MavkaParser::TryContext::KW_CATCH() {
  return getToken(MavkaParser::KW_CATCH, 0);
}

tree::TerminalNode* MavkaParser::TryContext::KW_END() {
  return getToken(MavkaParser::KW_END, 0);
}

std::vector<MavkaParser::BodyContext *> MavkaParser::TryContext::body() {
  return getRuleContexts<MavkaParser::BodyContext>();
}

MavkaParser::BodyContext* MavkaParser::TryContext::body(size_t i) {
  return getRuleContext<MavkaParser::BodyContext>(i);
}

tree::TerminalNode* MavkaParser::TryContext::ID() {
  return getToken(MavkaParser::ID, 0);
}


size_t MavkaParser::TryContext::getRuleIndex() const {
  return MavkaParser::RuleTry;
}

void MavkaParser::TryContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterTry(this);
}

void MavkaParser::TryContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitTry(this);
}


std::any MavkaParser::TryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitTry(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::TryContext* MavkaParser::try_() {
  TryContext *_localctx = _tracker.createInstance<TryContext>(_ctx, getState());
  enterRule(_localctx, 88, MavkaParser::RuleTry);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(749);
    match(MavkaParser::KW_TRY);
    setState(750);
    nl();
    setState(754);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5920008098487526220) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 13) != 0)) {
      setState(751);
      antlrcpp::downCast<TryContext *>(_localctx)->t_body = body();
      setState(752);
      nl();
    }
    setState(756);
    match(MavkaParser::KW_CATCH);
    setState(758);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (_la == MavkaParser::ID) {
      setState(757);
      antlrcpp::downCast<TryContext *>(_localctx)->t_name = match(MavkaParser::ID);
    }
    setState(760);
    nl();
    setState(764);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if ((((_la & ~ 0x3fULL) == 0) &&
      ((1ULL << _la) & 5920008098487526220) != 0) || ((((_la - 67) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 67)) & 13) != 0)) {
      setState(761);
      antlrcpp::downCast<TryContext *>(_localctx)->t_catch_body = body();
      setState(762);
      nl();
    }
    setState(766);
    match(MavkaParser::KW_END);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ThrowContext ------------------------------------------------------------------

MavkaParser::ThrowContext::ThrowContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

tree::TerminalNode* MavkaParser::ThrowContext::KW_THROW() {
  return getToken(MavkaParser::KW_THROW, 0);
}

MavkaParser::ExprContext* MavkaParser::ThrowContext::expr() {
  return getRuleContext<MavkaParser::ExprContext>(0);
}


size_t MavkaParser::ThrowContext::getRuleIndex() const {
  return MavkaParser::RuleThrow;
}

void MavkaParser::ThrowContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterThrow(this);
}

void MavkaParser::ThrowContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitThrow(this);
}


std::any MavkaParser::ThrowContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitThrow(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::ThrowContext* MavkaParser::throw_() {
  ThrowContext *_localctx = _tracker.createInstance<ThrowContext>(_ctx, getState());
  enterRule(_localctx, 90, MavkaParser::RuleThrow);
  size_t _la = 0;

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(768);
    match(MavkaParser::KW_THROW);
    setState(770);
    _errHandler->sync(this);

    _la = _input->LA(1);
    if (((((_la - 43) & ~ 0x3fULL) == 0) &&
      ((1ULL << (_la - 43)) & 218776835) != 0)) {
      setState(769);
      antlrcpp::downCast<ThrowContext *>(_localctx)->t_value = expr();
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NlContext ------------------------------------------------------------------

MavkaParser::NlContext::NlContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::NlContext::NL() {
  return getTokens(MavkaParser::NL);
}

tree::TerminalNode* MavkaParser::NlContext::NL(size_t i) {
  return getToken(MavkaParser::NL, i);
}


size_t MavkaParser::NlContext::getRuleIndex() const {
  return MavkaParser::RuleNl;
}

void MavkaParser::NlContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNl(this);
}

void MavkaParser::NlContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNl(this);
}


std::any MavkaParser::NlContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitNl(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::NlContext* MavkaParser::nl() {
  NlContext *_localctx = _tracker.createInstance<NlContext>(_ctx, getState());
  enterRule(_localctx, 92, MavkaParser::RuleNl);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(773); 
    _errHandler->sync(this);
    alt = 1;
    do {
      switch (alt) {
        case 1: {
              setState(772);
              match(MavkaParser::NL);
              break;
            }

      default:
        throw NoViableAltException(this);
      }
      setState(775); 
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 60, _ctx);
    } while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- NlsContext ------------------------------------------------------------------

MavkaParser::NlsContext::NlsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

std::vector<tree::TerminalNode *> MavkaParser::NlsContext::NL() {
  return getTokens(MavkaParser::NL);
}

tree::TerminalNode* MavkaParser::NlsContext::NL(size_t i) {
  return getToken(MavkaParser::NL, i);
}


size_t MavkaParser::NlsContext::getRuleIndex() const {
  return MavkaParser::RuleNls;
}

void MavkaParser::NlsContext::enterRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->enterNls(this);
}

void MavkaParser::NlsContext::exitRule(tree::ParseTreeListener *listener) {
  auto parserListener = dynamic_cast<MavkaParserListener *>(listener);
  if (parserListener != nullptr)
    parserListener->exitNls(this);
}


std::any MavkaParser::NlsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<MavkaParserVisitor*>(visitor))
    return parserVisitor->visitNls(this);
  else
    return visitor->visitChildren(this);
}

MavkaParser::NlsContext* MavkaParser::nls() {
  NlsContext *_localctx = _tracker.createInstance<NlsContext>(_ctx, getState());
  enterRule(_localctx, 94, MavkaParser::RuleNls);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    size_t alt;
    enterOuterAlt(_localctx, 1);
    setState(780);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        setState(777);
        match(MavkaParser::NL); 
      }
      setState(782);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 61, _ctx);
    }
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

bool MavkaParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 2: return atomSempred(antlrcpp::downCast<AtomContext *>(context), predicateIndex);
    case 6: return operationSempred(antlrcpp::downCast<OperationContext *>(context), predicateIndex);
    case 37: return typeSempred(antlrcpp::downCast<TypeContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool MavkaParser::atomSempred(AtomContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 3);
    case 1: return precpred(_ctx, 2);
    case 2: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool MavkaParser::operationSempred(OperationContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 26);
    case 4: return precpred(_ctx, 25);
    case 5: return precpred(_ctx, 24);
    case 6: return precpred(_ctx, 23);
    case 7: return precpred(_ctx, 22);
    case 8: return precpred(_ctx, 21);
    case 9: return precpred(_ctx, 20);
    case 10: return precpred(_ctx, 19);
    case 11: return precpred(_ctx, 18);
    case 12: return precpred(_ctx, 17);
    case 13: return precpred(_ctx, 16);
    case 14: return precpred(_ctx, 15);
    case 15: return precpred(_ctx, 14);
    case 16: return precpred(_ctx, 13);
    case 17: return precpred(_ctx, 12);
    case 18: return precpred(_ctx, 11);
    case 19: return precpred(_ctx, 10);
    case 20: return precpred(_ctx, 9);
    case 21: return precpred(_ctx, 8);
    case 22: return precpred(_ctx, 7);
    case 23: return precpred(_ctx, 6);
    case 24: return precpred(_ctx, 5);
    case 25: return precpred(_ctx, 4);
    case 26: return precpred(_ctx, 3);
    case 27: return precpred(_ctx, 2);
    case 28: return precpred(_ctx, 1);
    case 29: return precpred(_ctx, 31);

  default:
    break;
  }
  return true;
}

bool MavkaParser::typeSempred(TypeContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 30: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

void MavkaParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  mavkaparserParserInitialize();
#else
  ::antlr4::internal::call_once(mavkaparserParserOnceFlag, mavkaparserParserInitialize);
#endif
}
