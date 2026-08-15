
// Generated from CSubset_2205014.g4 by ANTLR 4.13.2


#include "CSubset_2205014Visitor.h"

#include "CSubset_2205014Parser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CSubset_2205014ParserStaticData final {
  CSubset_2205014ParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CSubset_2205014ParserStaticData(const CSubset_2205014ParserStaticData&) = delete;
  CSubset_2205014ParserStaticData(CSubset_2205014ParserStaticData&&) = delete;
  CSubset_2205014ParserStaticData& operator=(const CSubset_2205014ParserStaticData&) = delete;
  CSubset_2205014ParserStaticData& operator=(CSubset_2205014ParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag csubset_2205014ParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CSubset_2205014ParserStaticData> csubset_2205014ParserStaticData = nullptr;

void csubset_2205014ParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (csubset_2205014ParserStaticData != nullptr) {
    return;
  }
#else
  assert(csubset_2205014ParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CSubset_2205014ParserStaticData>(
    std::vector<std::string>{
      "start", "program", "unit", "func_declaration", "func_definition", 
      "parameter_list", "compound_statement", "var_declaration", "type_specifier", 
      "declaration_list", "statements", "statement", "expression_statement", 
      "variable", "expression", "logic_expression", "rel_expression", "simple_expression", 
      "term", "unary_expression", "factor", "argument_list", "arguments"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'if'", "'else'", "'for'", "'while'", "'printf'", 
      "'return'", "'int'", "'float'", "'void'", "'('", "')'", "'{'", "'}'", 
      "'['", "']'", "';'", "','", "", "", "'++'", "'--'", "'!'", "", "", 
      "'='"
    },
    std::vector<std::string>{
      "", "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", 
      "FOR", "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "LPAREN", 
      "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", 
      "ADDOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", "LOGICOP", "ASSIGNOP", 
      "ID", "CONST_INT", "CONST_FLOAT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,32,341,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,1,0,1,1,1,1,1,1,1,1,1,1,5,1,54,8,1,10,1,12,1,57,9,1,
  	1,2,1,2,1,2,3,2,62,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,3,3,77,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	3,4,92,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,102,8,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,5,5,117,8,5,10,5,12,5,120,9,5,1,
  	6,1,6,1,6,1,6,1,6,1,6,3,6,128,8,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,3,8,137,
  	8,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,3,9,148,8,9,1,9,1,9,1,9,1,9,1,
  	9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,164,8,9,10,9,12,9,167,9,9,1,
  	10,1,10,1,10,1,10,1,10,5,10,174,8,10,10,10,12,10,177,9,10,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,3,11,225,8,11,1,12,1,12,1,12,1,12,1,12,3,12,232,8,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,3,13,240,8,13,1,14,1,14,1,14,1,14,1,14,3,14,247,8,
  	14,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,1,15,3,15,258,8,15,1,16,1,
  	16,1,16,1,16,1,16,1,16,1,16,1,16,1,16,3,16,269,8,16,1,17,1,17,1,17,1,
  	17,1,17,1,17,1,17,1,17,1,17,5,17,280,8,17,10,17,12,17,283,9,17,1,18,1,
  	18,1,18,1,18,1,18,1,18,1,18,1,18,1,18,5,18,294,8,18,10,18,12,18,297,9,
  	18,1,19,1,19,1,19,1,19,1,19,3,19,304,8,19,1,20,1,20,1,20,1,20,1,20,1,
  	20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,3,20,324,
  	8,20,1,21,1,21,3,21,328,8,21,1,22,1,22,1,22,1,22,1,22,1,22,5,22,336,8,
  	22,10,22,12,22,339,9,22,1,22,0,7,2,10,18,20,34,36,44,23,0,2,4,6,8,10,
  	12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,0,1,2,0,22,23,27,28,
  	368,0,46,1,0,0,0,2,48,1,0,0,0,4,61,1,0,0,0,6,76,1,0,0,0,8,91,1,0,0,0,
  	10,101,1,0,0,0,12,127,1,0,0,0,14,129,1,0,0,0,16,136,1,0,0,0,18,147,1,
  	0,0,0,20,168,1,0,0,0,22,224,1,0,0,0,24,231,1,0,0,0,26,239,1,0,0,0,28,
  	246,1,0,0,0,30,257,1,0,0,0,32,268,1,0,0,0,34,270,1,0,0,0,36,284,1,0,0,
  	0,38,303,1,0,0,0,40,323,1,0,0,0,42,327,1,0,0,0,44,329,1,0,0,0,46,47,3,
  	2,1,0,47,1,1,0,0,0,48,49,6,1,-1,0,49,50,3,4,2,0,50,55,1,0,0,0,51,52,10,
  	2,0,0,52,54,3,4,2,0,53,51,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,
  	0,0,0,56,3,1,0,0,0,57,55,1,0,0,0,58,62,3,14,7,0,59,62,3,6,3,0,60,62,3,
  	8,4,0,61,58,1,0,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,5,1,0,0,0,63,64,3,
  	16,8,0,64,65,5,30,0,0,65,66,5,14,0,0,66,67,3,10,5,0,67,68,5,15,0,0,68,
  	69,5,20,0,0,69,77,1,0,0,0,70,71,3,16,8,0,71,72,5,30,0,0,72,73,5,14,0,
  	0,73,74,5,15,0,0,74,75,5,20,0,0,75,77,1,0,0,0,76,63,1,0,0,0,76,70,1,0,
  	0,0,77,7,1,0,0,0,78,79,3,16,8,0,79,80,5,30,0,0,80,81,5,14,0,0,81,82,3,
  	10,5,0,82,83,5,15,0,0,83,84,3,12,6,0,84,92,1,0,0,0,85,86,3,16,8,0,86,
  	87,5,30,0,0,87,88,5,14,0,0,88,89,5,15,0,0,89,90,3,12,6,0,90,92,1,0,0,
  	0,91,78,1,0,0,0,91,85,1,0,0,0,92,9,1,0,0,0,93,94,6,5,-1,0,94,95,3,16,
  	8,0,95,96,5,30,0,0,96,102,1,0,0,0,97,102,3,16,8,0,98,99,3,16,8,0,99,100,
  	7,0,0,0,100,102,1,0,0,0,101,93,1,0,0,0,101,97,1,0,0,0,101,98,1,0,0,0,
  	102,118,1,0,0,0,103,104,10,6,0,0,104,105,5,21,0,0,105,106,3,16,8,0,106,
  	107,5,30,0,0,107,117,1,0,0,0,108,109,10,5,0,0,109,110,5,21,0,0,110,117,
  	3,16,8,0,111,112,10,2,0,0,112,113,5,21,0,0,113,114,3,16,8,0,114,115,7,
  	0,0,0,115,117,1,0,0,0,116,103,1,0,0,0,116,108,1,0,0,0,116,111,1,0,0,0,
  	117,120,1,0,0,0,118,116,1,0,0,0,118,119,1,0,0,0,119,11,1,0,0,0,120,118,
  	1,0,0,0,121,122,5,16,0,0,122,123,3,20,10,0,123,124,5,17,0,0,124,128,1,
  	0,0,0,125,126,5,16,0,0,126,128,5,17,0,0,127,121,1,0,0,0,127,125,1,0,0,
  	0,128,13,1,0,0,0,129,130,3,16,8,0,130,131,3,18,9,0,131,132,5,20,0,0,132,
  	15,1,0,0,0,133,137,5,11,0,0,134,137,5,12,0,0,135,137,5,13,0,0,136,133,
  	1,0,0,0,136,134,1,0,0,0,136,135,1,0,0,0,137,17,1,0,0,0,138,139,6,9,-1,
  	0,139,148,5,30,0,0,140,141,5,30,0,0,141,142,5,18,0,0,142,143,5,31,0,0,
  	143,148,5,19,0,0,144,145,5,30,0,0,145,146,7,0,0,0,146,148,5,30,0,0,147,
  	138,1,0,0,0,147,140,1,0,0,0,147,144,1,0,0,0,148,165,1,0,0,0,149,150,10,
  	6,0,0,150,151,5,21,0,0,151,164,5,30,0,0,152,153,10,5,0,0,153,154,5,21,
  	0,0,154,155,5,30,0,0,155,156,5,18,0,0,156,157,5,31,0,0,157,164,5,19,0,
  	0,158,159,10,2,0,0,159,160,5,21,0,0,160,161,5,30,0,0,161,162,7,0,0,0,
  	162,164,5,30,0,0,163,149,1,0,0,0,163,152,1,0,0,0,163,158,1,0,0,0,164,
  	167,1,0,0,0,165,163,1,0,0,0,165,166,1,0,0,0,166,19,1,0,0,0,167,165,1,
  	0,0,0,168,169,6,10,-1,0,169,170,3,22,11,0,170,175,1,0,0,0,171,172,10,
  	1,0,0,172,174,3,22,11,0,173,171,1,0,0,0,174,177,1,0,0,0,175,173,1,0,0,
  	0,175,176,1,0,0,0,176,21,1,0,0,0,177,175,1,0,0,0,178,225,3,14,7,0,179,
  	225,3,24,12,0,180,181,5,5,0,0,181,182,5,14,0,0,182,183,3,28,14,0,183,
  	184,5,15,0,0,184,185,3,22,11,0,185,186,5,6,0,0,186,187,3,22,11,0,187,
  	225,1,0,0,0,188,189,5,8,0,0,189,190,5,14,0,0,190,191,3,28,14,0,191,192,
  	5,15,0,0,192,193,3,22,11,0,193,225,1,0,0,0,194,195,5,9,0,0,195,196,5,
  	14,0,0,196,197,5,30,0,0,197,198,5,15,0,0,198,225,5,20,0,0,199,200,5,10,
  	0,0,200,201,3,28,14,0,201,202,5,20,0,0,202,225,1,0,0,0,203,225,3,12,6,
  	0,204,205,5,7,0,0,205,206,5,14,0,0,206,207,3,24,12,0,207,208,3,24,12,
  	0,208,209,3,28,14,0,209,210,5,15,0,0,210,211,3,22,11,0,211,225,1,0,0,
  	0,212,213,5,5,0,0,213,214,5,14,0,0,214,215,3,28,14,0,215,216,5,15,0,0,
  	216,217,3,22,11,0,217,225,1,0,0,0,218,219,5,9,0,0,219,220,5,14,0,0,220,
  	221,5,30,0,0,221,225,5,15,0,0,222,223,5,10,0,0,223,225,3,28,14,0,224,
  	178,1,0,0,0,224,179,1,0,0,0,224,180,1,0,0,0,224,188,1,0,0,0,224,194,1,
  	0,0,0,224,199,1,0,0,0,224,203,1,0,0,0,224,204,1,0,0,0,224,212,1,0,0,0,
  	224,218,1,0,0,0,224,222,1,0,0,0,225,23,1,0,0,0,226,232,5,20,0,0,227,228,
  	3,28,14,0,228,229,5,20,0,0,229,232,1,0,0,0,230,232,3,28,14,0,231,226,
  	1,0,0,0,231,227,1,0,0,0,231,230,1,0,0,0,232,25,1,0,0,0,233,240,5,30,0,
  	0,234,235,5,30,0,0,235,236,5,18,0,0,236,237,3,28,14,0,237,238,5,19,0,
  	0,238,240,1,0,0,0,239,233,1,0,0,0,239,234,1,0,0,0,240,27,1,0,0,0,241,
  	247,3,30,15,0,242,243,3,26,13,0,243,244,5,29,0,0,244,245,3,30,15,0,245,
  	247,1,0,0,0,246,241,1,0,0,0,246,242,1,0,0,0,247,29,1,0,0,0,248,258,3,
  	32,16,0,249,250,3,32,16,0,250,251,5,28,0,0,251,252,3,32,16,0,252,258,
  	1,0,0,0,253,254,3,32,16,0,254,255,5,28,0,0,255,256,5,29,0,0,256,258,1,
  	0,0,0,257,248,1,0,0,0,257,249,1,0,0,0,257,253,1,0,0,0,258,31,1,0,0,0,
  	259,269,3,34,17,0,260,261,3,34,17,0,261,262,5,27,0,0,262,263,3,34,17,
  	0,263,269,1,0,0,0,264,265,3,34,17,0,265,266,5,27,0,0,266,267,5,29,0,0,
  	267,269,1,0,0,0,268,259,1,0,0,0,268,260,1,0,0,0,268,264,1,0,0,0,269,33,
  	1,0,0,0,270,271,6,17,-1,0,271,272,3,36,18,0,272,281,1,0,0,0,273,274,10,
  	2,0,0,274,275,5,22,0,0,275,280,3,36,18,0,276,277,10,1,0,0,277,278,5,22,
  	0,0,278,280,5,29,0,0,279,273,1,0,0,0,279,276,1,0,0,0,280,283,1,0,0,0,
  	281,279,1,0,0,0,281,282,1,0,0,0,282,35,1,0,0,0,283,281,1,0,0,0,284,285,
  	6,18,-1,0,285,286,3,38,19,0,286,295,1,0,0,0,287,288,10,2,0,0,288,289,
  	5,23,0,0,289,294,3,38,19,0,290,291,10,1,0,0,291,292,5,23,0,0,292,294,
  	5,29,0,0,293,287,1,0,0,0,293,290,1,0,0,0,294,297,1,0,0,0,295,293,1,0,
  	0,0,295,296,1,0,0,0,296,37,1,0,0,0,297,295,1,0,0,0,298,299,5,22,0,0,299,
  	304,3,38,19,0,300,301,5,26,0,0,301,304,3,38,19,0,302,304,3,40,20,0,303,
  	298,1,0,0,0,303,300,1,0,0,0,303,302,1,0,0,0,304,39,1,0,0,0,305,324,3,
  	26,13,0,306,307,5,30,0,0,307,308,5,14,0,0,308,309,3,42,21,0,309,310,5,
  	15,0,0,310,324,1,0,0,0,311,312,5,14,0,0,312,313,3,28,14,0,313,314,5,15,
  	0,0,314,324,1,0,0,0,315,324,5,31,0,0,316,324,5,32,0,0,317,318,3,26,13,
  	0,318,319,5,24,0,0,319,324,1,0,0,0,320,321,3,26,13,0,321,322,5,25,0,0,
  	322,324,1,0,0,0,323,305,1,0,0,0,323,306,1,0,0,0,323,311,1,0,0,0,323,315,
  	1,0,0,0,323,316,1,0,0,0,323,317,1,0,0,0,323,320,1,0,0,0,324,41,1,0,0,
  	0,325,328,3,44,22,0,326,328,1,0,0,0,327,325,1,0,0,0,327,326,1,0,0,0,328,
  	43,1,0,0,0,329,330,6,22,-1,0,330,331,3,30,15,0,331,337,1,0,0,0,332,333,
  	10,2,0,0,333,334,5,21,0,0,334,336,3,30,15,0,335,332,1,0,0,0,336,339,1,
  	0,0,0,337,335,1,0,0,0,337,338,1,0,0,0,338,45,1,0,0,0,339,337,1,0,0,0,
  	27,55,61,76,91,101,116,118,127,136,147,163,165,175,224,231,239,246,257,
  	268,279,281,293,295,303,323,327,337
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  csubset_2205014ParserStaticData = std::move(staticData);
}

}

CSubset_2205014Parser::CSubset_2205014Parser(TokenStream *input) : CSubset_2205014Parser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CSubset_2205014Parser::CSubset_2205014Parser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CSubset_2205014Parser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *csubset_2205014ParserStaticData->atn, csubset_2205014ParserStaticData->decisionToDFA, csubset_2205014ParserStaticData->sharedContextCache, options);
}

CSubset_2205014Parser::~CSubset_2205014Parser() {
  delete _interpreter;
}

const atn::ATN& CSubset_2205014Parser::getATN() const {
  return *csubset_2205014ParserStaticData->atn;
}

std::string CSubset_2205014Parser::getGrammarFileName() const {
  return "CSubset_2205014.g4";
}

const std::vector<std::string>& CSubset_2205014Parser::getRuleNames() const {
  return csubset_2205014ParserStaticData->ruleNames;
}

const dfa::Vocabulary& CSubset_2205014Parser::getVocabulary() const {
  return csubset_2205014ParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CSubset_2205014Parser::getSerializedATN() const {
  return csubset_2205014ParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

CSubset_2205014Parser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSubset_2205014Parser::ProgramContext* CSubset_2205014Parser::StartContext::program() {
  return getRuleContext<CSubset_2205014Parser::ProgramContext>(0);
}


size_t CSubset_2205014Parser::StartContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleStart;
}


std::any CSubset_2205014Parser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::StartContext* CSubset_2205014Parser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, CSubset_2205014Parser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(46);
    program(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ProgramContext ------------------------------------------------------------------

CSubset_2205014Parser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::ProgramContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleProgram;
}

void CSubset_2205014Parser::ProgramContext::copyFrom(ProgramContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgProgUnitContext ------------------------------------------------------------------

CSubset_2205014Parser::ProgramContext* CSubset_2205014Parser::ProgProgUnitContext::program() {
  return getRuleContext<CSubset_2205014Parser::ProgramContext>(0);
}

CSubset_2205014Parser::UnitContext* CSubset_2205014Parser::ProgProgUnitContext::unit() {
  return getRuleContext<CSubset_2205014Parser::UnitContext>(0);
}

CSubset_2205014Parser::ProgProgUnitContext::ProgProgUnitContext(ProgramContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::ProgProgUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitProgProgUnit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ProgUnitContext ------------------------------------------------------------------

CSubset_2205014Parser::UnitContext* CSubset_2205014Parser::ProgUnitContext::unit() {
  return getRuleContext<CSubset_2205014Parser::UnitContext>(0);
}

CSubset_2205014Parser::ProgUnitContext::ProgUnitContext(ProgramContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::ProgUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitProgUnit(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::ProgramContext* CSubset_2205014Parser::program() {
   return program(0);
}

CSubset_2205014Parser::ProgramContext* CSubset_2205014Parser::program(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubset_2205014Parser::ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, parentState);
  CSubset_2205014Parser::ProgramContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, CSubset_2205014Parser::RuleProgram, precedence);

    

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
    _localctx = _tracker.createInstance<ProgUnitContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(49);
    unit();
    _ctx->stop = _input->LT(-1);
    setState(55);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ProgProgUnitContext>(_tracker.createInstance<ProgramContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleProgram);
        setState(51);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(52);
        unit(); 
      }
      setState(57);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- UnitContext ------------------------------------------------------------------

CSubset_2205014Parser::UnitContext::UnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::UnitContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleUnit;
}

void CSubset_2205014Parser::UnitContext::copyFrom(UnitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnitFuncDefContext ------------------------------------------------------------------

CSubset_2205014Parser::Func_definitionContext* CSubset_2205014Parser::UnitFuncDefContext::func_definition() {
  return getRuleContext<CSubset_2205014Parser::Func_definitionContext>(0);
}

CSubset_2205014Parser::UnitFuncDefContext::UnitFuncDefContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UnitFuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUnitFuncDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnitFuncDecContext ------------------------------------------------------------------

CSubset_2205014Parser::Func_declarationContext* CSubset_2205014Parser::UnitFuncDecContext::func_declaration() {
  return getRuleContext<CSubset_2205014Parser::Func_declarationContext>(0);
}

CSubset_2205014Parser::UnitFuncDecContext::UnitFuncDecContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UnitFuncDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUnitFuncDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnitVarDecContext ------------------------------------------------------------------

CSubset_2205014Parser::Var_declarationContext* CSubset_2205014Parser::UnitVarDecContext::var_declaration() {
  return getRuleContext<CSubset_2205014Parser::Var_declarationContext>(0);
}

CSubset_2205014Parser::UnitVarDecContext::UnitVarDecContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UnitVarDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUnitVarDec(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::UnitContext* CSubset_2205014Parser::unit() {
  UnitContext *_localctx = _tracker.createInstance<UnitContext>(_ctx, getState());
  enterRule(_localctx, 4, CSubset_2205014Parser::RuleUnit);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(61);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::UnitVarDecContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(58);
      var_declaration();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::UnitFuncDecContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(59);
      func_declaration();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::UnitFuncDefContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(60);
      func_definition();
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

//----------------- Func_declarationContext ------------------------------------------------------------------

CSubset_2205014Parser::Func_declarationContext::Func_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Func_declarationContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleFunc_declaration;
}

void CSubset_2205014Parser::Func_declarationContext::copyFrom(Func_declarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncDecNoParamContext ------------------------------------------------------------------

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::FuncDecNoParamContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDecNoParamContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDecNoParamContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDecNoParamContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDecNoParamContext::SEMICOLON() {
  return getToken(CSubset_2205014Parser::SEMICOLON, 0);
}

CSubset_2205014Parser::FuncDecNoParamContext::FuncDecNoParamContext(Func_declarationContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FuncDecNoParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFuncDecNoParam(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDecParamContext ------------------------------------------------------------------

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::FuncDecParamContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDecParamContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDecParamContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

CSubset_2205014Parser::Parameter_listContext* CSubset_2205014Parser::FuncDecParamContext::parameter_list() {
  return getRuleContext<CSubset_2205014Parser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDecParamContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDecParamContext::SEMICOLON() {
  return getToken(CSubset_2205014Parser::SEMICOLON, 0);
}

CSubset_2205014Parser::FuncDecParamContext::FuncDecParamContext(Func_declarationContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FuncDecParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFuncDecParam(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::Func_declarationContext* CSubset_2205014Parser::func_declaration() {
  Func_declarationContext *_localctx = _tracker.createInstance<Func_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, CSubset_2205014Parser::RuleFunc_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(76);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 2, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FuncDecParamContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(63);
      type_specifier();
      setState(64);
      match(CSubset_2205014Parser::ID);
      setState(65);
      match(CSubset_2205014Parser::LPAREN);
      setState(66);
      parameter_list(0);
      setState(67);
      match(CSubset_2205014Parser::RPAREN);
      setState(68);
      match(CSubset_2205014Parser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FuncDecNoParamContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(70);
      type_specifier();
      setState(71);
      match(CSubset_2205014Parser::ID);
      setState(72);
      match(CSubset_2205014Parser::LPAREN);
      setState(73);
      match(CSubset_2205014Parser::RPAREN);
      setState(74);
      match(CSubset_2205014Parser::SEMICOLON);
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

//----------------- Func_definitionContext ------------------------------------------------------------------

CSubset_2205014Parser::Func_definitionContext::Func_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Func_definitionContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleFunc_definition;
}

void CSubset_2205014Parser::Func_definitionContext::copyFrom(Func_definitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncDefNoParamContext ------------------------------------------------------------------

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::FuncDefNoParamContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDefNoParamContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDefNoParamContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDefNoParamContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

CSubset_2205014Parser::Compound_statementContext* CSubset_2205014Parser::FuncDefNoParamContext::compound_statement() {
  return getRuleContext<CSubset_2205014Parser::Compound_statementContext>(0);
}

CSubset_2205014Parser::FuncDefNoParamContext::FuncDefNoParamContext(Func_definitionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FuncDefNoParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFuncDefNoParam(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDefParamContext ------------------------------------------------------------------

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::FuncDefParamContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDefParamContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDefParamContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

CSubset_2205014Parser::Parameter_listContext* CSubset_2205014Parser::FuncDefParamContext::parameter_list() {
  return getRuleContext<CSubset_2205014Parser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FuncDefParamContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

CSubset_2205014Parser::Compound_statementContext* CSubset_2205014Parser::FuncDefParamContext::compound_statement() {
  return getRuleContext<CSubset_2205014Parser::Compound_statementContext>(0);
}

CSubset_2205014Parser::FuncDefParamContext::FuncDefParamContext(Func_definitionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FuncDefParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFuncDefParam(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::Func_definitionContext* CSubset_2205014Parser::func_definition() {
  Func_definitionContext *_localctx = _tracker.createInstance<Func_definitionContext>(_ctx, getState());
  enterRule(_localctx, 8, CSubset_2205014Parser::RuleFunc_definition);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(91);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 3, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FuncDefParamContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(78);
      type_specifier();
      setState(79);
      match(CSubset_2205014Parser::ID);
      setState(80);
      match(CSubset_2205014Parser::LPAREN);
      setState(81);
      parameter_list(0);
      setState(82);
      match(CSubset_2205014Parser::RPAREN);
      setState(83);
      compound_statement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FuncDefNoParamContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(85);
      type_specifier();
      setState(86);
      match(CSubset_2205014Parser::ID);
      setState(87);
      match(CSubset_2205014Parser::LPAREN);
      setState(88);
      match(CSubset_2205014Parser::RPAREN);
      setState(89);
      compound_statement();
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

//----------------- Parameter_listContext ------------------------------------------------------------------

CSubset_2205014Parser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Parameter_listContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleParameter_list;
}

void CSubset_2205014Parser::Parameter_listContext::copyFrom(Parameter_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UniParamDefContext ------------------------------------------------------------------

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::UniParamDefContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::UniParamDefContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

CSubset_2205014Parser::UniParamDefContext::UniParamDefContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UniParamDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUniParamDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiParamDecContext ------------------------------------------------------------------

CSubset_2205014Parser::Parameter_listContext* CSubset_2205014Parser::MultiParamDecContext::parameter_list() {
  return getRuleContext<CSubset_2205014Parser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::MultiParamDecContext::COMMA() {
  return getToken(CSubset_2205014Parser::COMMA, 0);
}

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::MultiParamDecContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

CSubset_2205014Parser::MultiParamDecContext::MultiParamDecContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::MultiParamDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitMultiParamDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiParamADDOPContext ------------------------------------------------------------------

CSubset_2205014Parser::Parameter_listContext* CSubset_2205014Parser::MultiParamADDOPContext::parameter_list() {
  return getRuleContext<CSubset_2205014Parser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::MultiParamADDOPContext::COMMA() {
  return getToken(CSubset_2205014Parser::COMMA, 0);
}

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::MultiParamADDOPContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::MultiParamADDOPContext::ADDOP() {
  return getToken(CSubset_2205014Parser::ADDOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::MultiParamADDOPContext::MULOP() {
  return getToken(CSubset_2205014Parser::MULOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::MultiParamADDOPContext::RELOP() {
  return getToken(CSubset_2205014Parser::RELOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::MultiParamADDOPContext::LOGICOP() {
  return getToken(CSubset_2205014Parser::LOGICOP, 0);
}

CSubset_2205014Parser::MultiParamADDOPContext::MultiParamADDOPContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::MultiParamADDOPContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitMultiParamADDOP(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiParamDefContext ------------------------------------------------------------------

CSubset_2205014Parser::Parameter_listContext* CSubset_2205014Parser::MultiParamDefContext::parameter_list() {
  return getRuleContext<CSubset_2205014Parser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::MultiParamDefContext::COMMA() {
  return getToken(CSubset_2205014Parser::COMMA, 0);
}

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::MultiParamDefContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::MultiParamDefContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

CSubset_2205014Parser::MultiParamDefContext::MultiParamDefContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::MultiParamDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitMultiParamDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UniParamDecContext ------------------------------------------------------------------

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::UniParamDecContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

CSubset_2205014Parser::UniParamDecContext::UniParamDecContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UniParamDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUniParamDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UniParamAddOpContext ------------------------------------------------------------------

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::UniParamAddOpContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::UniParamAddOpContext::ADDOP() {
  return getToken(CSubset_2205014Parser::ADDOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::UniParamAddOpContext::MULOP() {
  return getToken(CSubset_2205014Parser::MULOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::UniParamAddOpContext::RELOP() {
  return getToken(CSubset_2205014Parser::RELOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::UniParamAddOpContext::LOGICOP() {
  return getToken(CSubset_2205014Parser::LOGICOP, 0);
}

CSubset_2205014Parser::UniParamAddOpContext::UniParamAddOpContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UniParamAddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUniParamAddOp(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::Parameter_listContext* CSubset_2205014Parser::parameter_list() {
   return parameter_list(0);
}

CSubset_2205014Parser::Parameter_listContext* CSubset_2205014Parser::parameter_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubset_2205014Parser::Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, parentState);
  CSubset_2205014Parser::Parameter_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, CSubset_2205014Parser::RuleParameter_list, precedence);

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
    setState(101);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 4, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<UniParamDefContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(94);
      type_specifier();
      setState(95);
      match(CSubset_2205014Parser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<UniParamDecContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(97);
      type_specifier();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<UniParamAddOpContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(98);
      type_specifier();
      setState(99);
      antlrcpp::downCast<UniParamAddOpContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 415236096) != 0))) {
        antlrcpp::downCast<UniParamAddOpContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(118);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(116);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiParamDefContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(103);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(104);
          match(CSubset_2205014Parser::COMMA);
          setState(105);
          type_specifier();
          setState(106);
          match(CSubset_2205014Parser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiParamDecContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(108);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(109);
          match(CSubset_2205014Parser::COMMA);
          setState(110);
          type_specifier();
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<MultiParamADDOPContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(111);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(112);
          match(CSubset_2205014Parser::COMMA);
          setState(113);
          type_specifier();
          setState(114);
          antlrcpp::downCast<MultiParamADDOPContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 415236096) != 0))) {
            antlrcpp::downCast<MultiParamADDOPContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          break;
        }

        default:
          break;
        } 
      }
      setState(120);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Compound_statementContext ------------------------------------------------------------------

CSubset_2205014Parser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Compound_statementContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleCompound_statement;
}

void CSubset_2205014Parser::Compound_statementContext::copyFrom(Compound_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Cmpd_stmtParenContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::Cmpd_stmtParenContext::LCURL() {
  return getToken(CSubset_2205014Parser::LCURL, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Cmpd_stmtParenContext::RCURL() {
  return getToken(CSubset_2205014Parser::RCURL, 0);
}

CSubset_2205014Parser::Cmpd_stmtParenContext::Cmpd_stmtParenContext(Compound_statementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Cmpd_stmtParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitCmpd_stmtParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Cmpd_stmtStmtsContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::Cmpd_stmtStmtsContext::LCURL() {
  return getToken(CSubset_2205014Parser::LCURL, 0);
}

CSubset_2205014Parser::StatementsContext* CSubset_2205014Parser::Cmpd_stmtStmtsContext::statements() {
  return getRuleContext<CSubset_2205014Parser::StatementsContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::Cmpd_stmtStmtsContext::RCURL() {
  return getToken(CSubset_2205014Parser::RCURL, 0);
}

CSubset_2205014Parser::Cmpd_stmtStmtsContext::Cmpd_stmtStmtsContext(Compound_statementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Cmpd_stmtStmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitCmpd_stmtStmts(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::Compound_statementContext* CSubset_2205014Parser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 12, CSubset_2205014Parser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(127);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::Cmpd_stmtStmtsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(121);
      match(CSubset_2205014Parser::LCURL);
      setState(122);
      statements(0);
      setState(123);
      match(CSubset_2205014Parser::RCURL);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::Cmpd_stmtParenContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(125);
      match(CSubset_2205014Parser::LCURL);
      setState(126);
      match(CSubset_2205014Parser::RCURL);
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

//----------------- Var_declarationContext ------------------------------------------------------------------

CSubset_2205014Parser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::Var_declarationContext::type_specifier() {
  return getRuleContext<CSubset_2205014Parser::Type_specifierContext>(0);
}

CSubset_2205014Parser::Declaration_listContext* CSubset_2205014Parser::Var_declarationContext::declaration_list() {
  return getRuleContext<CSubset_2205014Parser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::Var_declarationContext::SEMICOLON() {
  return getToken(CSubset_2205014Parser::SEMICOLON, 0);
}


size_t CSubset_2205014Parser::Var_declarationContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleVar_declaration;
}


std::any CSubset_2205014Parser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::Var_declarationContext* CSubset_2205014Parser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, CSubset_2205014Parser::RuleVar_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(129);
    type_specifier();
    setState(130);
    declaration_list(0);
    setState(131);
    match(CSubset_2205014Parser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifierContext ------------------------------------------------------------------

CSubset_2205014Parser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Type_specifierContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleType_specifier;
}

void CSubset_2205014Parser::Type_specifierContext::copyFrom(Type_specifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeFloatContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::TypeFloatContext::FLOAT() {
  return getToken(CSubset_2205014Parser::FLOAT, 0);
}

CSubset_2205014Parser::TypeFloatContext::TypeFloatContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::TypeFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitTypeFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeVoidContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::TypeVoidContext::VOID() {
  return getToken(CSubset_2205014Parser::VOID, 0);
}

CSubset_2205014Parser::TypeVoidContext::TypeVoidContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::TypeVoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitTypeVoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeIntContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::TypeIntContext::INT() {
  return getToken(CSubset_2205014Parser::INT, 0);
}

CSubset_2205014Parser::TypeIntContext::TypeIntContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::TypeIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitTypeInt(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::Type_specifierContext* CSubset_2205014Parser::type_specifier() {
  Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, getState());
  enterRule(_localctx, 16, CSubset_2205014Parser::RuleType_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(136);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubset_2205014Parser::INT: {
        _localctx = _tracker.createInstance<CSubset_2205014Parser::TypeIntContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(133);
        match(CSubset_2205014Parser::INT);
        break;
      }

      case CSubset_2205014Parser::FLOAT: {
        _localctx = _tracker.createInstance<CSubset_2205014Parser::TypeFloatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(134);
        match(CSubset_2205014Parser::FLOAT);
        break;
      }

      case CSubset_2205014Parser::VOID: {
        _localctx = _tracker.createInstance<CSubset_2205014Parser::TypeVoidContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(135);
        match(CSubset_2205014Parser::VOID);
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

//----------------- Declaration_listContext ------------------------------------------------------------------

CSubset_2205014Parser::Declaration_listContext::Declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Declaration_listContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleDeclaration_list;
}

void CSubset_2205014Parser::Declaration_listContext::copyFrom(Declaration_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Dec_lstThirdContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::Dec_lstThirdContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstThirdContext::LTHIRD() {
  return getToken(CSubset_2205014Parser::LTHIRD, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstThirdContext::CONST_INT() {
  return getToken(CSubset_2205014Parser::CONST_INT, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstThirdContext::RTHIRD() {
  return getToken(CSubset_2205014Parser::RTHIRD, 0);
}

CSubset_2205014Parser::Dec_lstThirdContext::Dec_lstThirdContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Dec_lstThirdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitDec_lstThird(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstCOMMAIDAddopIDContext ------------------------------------------------------------------

CSubset_2205014Parser::Declaration_listContext* CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::declaration_list() {
  return getRuleContext<CSubset_2205014Parser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::COMMA() {
  return getToken(CSubset_2205014Parser::COMMA, 0);
}

std::vector<tree::TerminalNode *> CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::ID() {
  return getTokens(CSubset_2205014Parser::ID);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::ID(size_t i) {
  return getToken(CSubset_2205014Parser::ID, i);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::ADDOP() {
  return getToken(CSubset_2205014Parser::ADDOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::MULOP() {
  return getToken(CSubset_2205014Parser::MULOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::RELOP() {
  return getToken(CSubset_2205014Parser::RELOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::LOGICOP() {
  return getToken(CSubset_2205014Parser::LOGICOP, 0);
}

CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::Dec_lstCOMMAIDAddopIDContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Dec_lstCOMMAIDAddopIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitDec_lstCOMMAIDAddopID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstCommaThirdContext ------------------------------------------------------------------

CSubset_2205014Parser::Declaration_listContext* CSubset_2205014Parser::Dec_lstCommaThirdContext::declaration_list() {
  return getRuleContext<CSubset_2205014Parser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCommaThirdContext::COMMA() {
  return getToken(CSubset_2205014Parser::COMMA, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCommaThirdContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCommaThirdContext::LTHIRD() {
  return getToken(CSubset_2205014Parser::LTHIRD, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCommaThirdContext::CONST_INT() {
  return getToken(CSubset_2205014Parser::CONST_INT, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCommaThirdContext::RTHIRD() {
  return getToken(CSubset_2205014Parser::RTHIRD, 0);
}

CSubset_2205014Parser::Dec_lstCommaThirdContext::Dec_lstCommaThirdContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Dec_lstCommaThirdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitDec_lstCommaThird(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstIDContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::Dec_lstIDContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

CSubset_2205014Parser::Dec_lstIDContext::Dec_lstIDContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Dec_lstIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitDec_lstID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstCommaIDContext ------------------------------------------------------------------

CSubset_2205014Parser::Declaration_listContext* CSubset_2205014Parser::Dec_lstCommaIDContext::declaration_list() {
  return getRuleContext<CSubset_2205014Parser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCommaIDContext::COMMA() {
  return getToken(CSubset_2205014Parser::COMMA, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstCommaIDContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

CSubset_2205014Parser::Dec_lstCommaIDContext::Dec_lstCommaIDContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Dec_lstCommaIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitDec_lstCommaID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstIDAddOpIDContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> CSubset_2205014Parser::Dec_lstIDAddOpIDContext::ID() {
  return getTokens(CSubset_2205014Parser::ID);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstIDAddOpIDContext::ID(size_t i) {
  return getToken(CSubset_2205014Parser::ID, i);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstIDAddOpIDContext::ADDOP() {
  return getToken(CSubset_2205014Parser::ADDOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstIDAddOpIDContext::MULOP() {
  return getToken(CSubset_2205014Parser::MULOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstIDAddOpIDContext::RELOP() {
  return getToken(CSubset_2205014Parser::RELOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::Dec_lstIDAddOpIDContext::LOGICOP() {
  return getToken(CSubset_2205014Parser::LOGICOP, 0);
}

CSubset_2205014Parser::Dec_lstIDAddOpIDContext::Dec_lstIDAddOpIDContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Dec_lstIDAddOpIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitDec_lstIDAddOpID(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::Declaration_listContext* CSubset_2205014Parser::declaration_list() {
   return declaration_list(0);
}

CSubset_2205014Parser::Declaration_listContext* CSubset_2205014Parser::declaration_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubset_2205014Parser::Declaration_listContext *_localctx = _tracker.createInstance<Declaration_listContext>(_ctx, parentState);
  CSubset_2205014Parser::Declaration_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, CSubset_2205014Parser::RuleDeclaration_list, precedence);

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
    setState(147);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Dec_lstIDContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(139);
      match(CSubset_2205014Parser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Dec_lstThirdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(140);
      match(CSubset_2205014Parser::ID);
      setState(141);
      match(CSubset_2205014Parser::LTHIRD);
      setState(142);
      match(CSubset_2205014Parser::CONST_INT);
      setState(143);
      match(CSubset_2205014Parser::RTHIRD);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Dec_lstIDAddOpIDContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(144);
      match(CSubset_2205014Parser::ID);
      setState(145);
      antlrcpp::downCast<Dec_lstIDAddOpIDContext *>(_localctx)->op = _input->LT(1);
      _la = _input->LA(1);
      if (!((((_la & ~ 0x3fULL) == 0) &&
        ((1ULL << _la) & 415236096) != 0))) {
        antlrcpp::downCast<Dec_lstIDAddOpIDContext *>(_localctx)->op = _errHandler->recoverInline(this);
      }
      else {
        _errHandler->reportMatch(this);
        consume();
      }
      setState(146);
      match(CSubset_2205014Parser::ID);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(165);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(163);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Dec_lstCommaIDContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(149);

          if (!(precpred(_ctx, 6))) throw FailedPredicateException(this, "precpred(_ctx, 6)");
          setState(150);
          match(CSubset_2205014Parser::COMMA);
          setState(151);
          match(CSubset_2205014Parser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Dec_lstCommaThirdContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(152);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(153);
          match(CSubset_2205014Parser::COMMA);
          setState(154);
          match(CSubset_2205014Parser::ID);
          setState(155);
          match(CSubset_2205014Parser::LTHIRD);
          setState(156);
          match(CSubset_2205014Parser::CONST_INT);
          setState(157);
          match(CSubset_2205014Parser::RTHIRD);
          break;
        }

        case 3: {
          auto newContext = _tracker.createInstance<Dec_lstCOMMAIDAddopIDContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(158);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(159);
          match(CSubset_2205014Parser::COMMA);
          setState(160);
          match(CSubset_2205014Parser::ID);
          setState(161);
          antlrcpp::downCast<Dec_lstCOMMAIDAddopIDContext *>(_localctx)->op = _input->LT(1);
          _la = _input->LA(1);
          if (!((((_la & ~ 0x3fULL) == 0) &&
            ((1ULL << _la) & 415236096) != 0))) {
            antlrcpp::downCast<Dec_lstCOMMAIDAddopIDContext *>(_localctx)->op = _errHandler->recoverInline(this);
          }
          else {
            _errHandler->reportMatch(this);
            consume();
          }
          setState(162);
          match(CSubset_2205014Parser::ID);
          break;
        }

        default:
          break;
        } 
      }
      setState(167);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementsContext ------------------------------------------------------------------

CSubset_2205014Parser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::StatementsContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleStatements;
}

void CSubset_2205014Parser::StatementsContext::copyFrom(StatementsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StmtsStmtContext ------------------------------------------------------------------

CSubset_2205014Parser::StatementContext* CSubset_2205014Parser::StmtsStmtContext::statement() {
  return getRuleContext<CSubset_2205014Parser::StatementContext>(0);
}

CSubset_2205014Parser::StmtsStmtContext::StmtsStmtContext(StatementsContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtsStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtsStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtsStmtsStmtContext ------------------------------------------------------------------

CSubset_2205014Parser::StatementsContext* CSubset_2205014Parser::StmtsStmtsStmtContext::statements() {
  return getRuleContext<CSubset_2205014Parser::StatementsContext>(0);
}

CSubset_2205014Parser::StatementContext* CSubset_2205014Parser::StmtsStmtsStmtContext::statement() {
  return getRuleContext<CSubset_2205014Parser::StatementContext>(0);
}

CSubset_2205014Parser::StmtsStmtsStmtContext::StmtsStmtsStmtContext(StatementsContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtsStmtsStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtsStmtsStmt(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::StatementsContext* CSubset_2205014Parser::statements() {
   return statements(0);
}

CSubset_2205014Parser::StatementsContext* CSubset_2205014Parser::statements(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubset_2205014Parser::StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, parentState);
  CSubset_2205014Parser::StatementsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, CSubset_2205014Parser::RuleStatements, precedence);

    

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
    _localctx = _tracker.createInstance<StmtsStmtContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(169);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(175);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<StmtsStmtsStmtContext>(_tracker.createInstance<StatementsContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleStatements);
        setState(171);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(172);
        statement(); 
      }
      setState(177);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 12, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- StatementContext ------------------------------------------------------------------

CSubset_2205014Parser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::StatementContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleStatement;
}

void CSubset_2205014Parser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StmtReturnContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::StmtReturnContext::RETURN() {
  return getToken(CSubset_2205014Parser::RETURN, 0);
}

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::StmtReturnContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtReturnContext::SEMICOLON() {
  return getToken(CSubset_2205014Parser::SEMICOLON, 0);
}

CSubset_2205014Parser::StmtReturnContext::StmtReturnContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtWhileContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::StmtWhileContext::WHILE() {
  return getToken(CSubset_2205014Parser::WHILE, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtWhileContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::StmtWhileContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtWhileContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

CSubset_2205014Parser::StatementContext* CSubset_2205014Parser::StmtWhileContext::statement() {
  return getRuleContext<CSubset_2205014Parser::StatementContext>(0);
}

CSubset_2205014Parser::StmtWhileContext::StmtWhileContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCmpd_stmtContext ------------------------------------------------------------------

CSubset_2205014Parser::Compound_statementContext* CSubset_2205014Parser::StmtCmpd_stmtContext::compound_statement() {
  return getRuleContext<CSubset_2205014Parser::Compound_statementContext>(0);
}

CSubset_2205014Parser::StmtCmpd_stmtContext::StmtCmpd_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtCmpd_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtCmpd_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtExpr_stmtContext ------------------------------------------------------------------

CSubset_2205014Parser::Expression_statementContext* CSubset_2205014Parser::StmtExpr_stmtContext::expression_statement() {
  return getRuleContext<CSubset_2205014Parser::Expression_statementContext>(0);
}

CSubset_2205014Parser::StmtExpr_stmtContext::StmtExpr_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtExpr_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtExpr_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtPrintErrContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::StmtPrintErrContext::PRINTLN() {
  return getToken(CSubset_2205014Parser::PRINTLN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtPrintErrContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtPrintErrContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtPrintErrContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

CSubset_2205014Parser::StmtPrintErrContext::StmtPrintErrContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtPrintErrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtPrintErr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtReturnErrContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::StmtReturnErrContext::RETURN() {
  return getToken(CSubset_2205014Parser::RETURN, 0);
}

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::StmtReturnErrContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

CSubset_2205014Parser::StmtReturnErrContext::StmtReturnErrContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtReturnErrContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtReturnErr(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtVar_decContext ------------------------------------------------------------------

CSubset_2205014Parser::Var_declarationContext* CSubset_2205014Parser::StmtVar_decContext::var_declaration() {
  return getRuleContext<CSubset_2205014Parser::Var_declarationContext>(0);
}

CSubset_2205014Parser::StmtVar_decContext::StmtVar_decContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtVar_decContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtVar_dec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtIfElseContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::StmtIfElseContext::IF() {
  return getToken(CSubset_2205014Parser::IF, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtIfElseContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::StmtIfElseContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtIfElseContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

std::vector<CSubset_2205014Parser::StatementContext *> CSubset_2205014Parser::StmtIfElseContext::statement() {
  return getRuleContexts<CSubset_2205014Parser::StatementContext>();
}

CSubset_2205014Parser::StatementContext* CSubset_2205014Parser::StmtIfElseContext::statement(size_t i) {
  return getRuleContext<CSubset_2205014Parser::StatementContext>(i);
}

tree::TerminalNode* CSubset_2205014Parser::StmtIfElseContext::ELSE() {
  return getToken(CSubset_2205014Parser::ELSE, 0);
}

CSubset_2205014Parser::StmtIfElseContext::StmtIfElseContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtIfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtIfElse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtPrintContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::StmtPrintContext::PRINTLN() {
  return getToken(CSubset_2205014Parser::PRINTLN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtPrintContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtPrintContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtPrintContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtPrintContext::SEMICOLON() {
  return getToken(CSubset_2205014Parser::SEMICOLON, 0);
}

CSubset_2205014Parser::StmtPrintContext::StmtPrintContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtPrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtPrint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtForContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::StmtForContext::FOR() {
  return getToken(CSubset_2205014Parser::FOR, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtForContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

std::vector<CSubset_2205014Parser::Expression_statementContext *> CSubset_2205014Parser::StmtForContext::expression_statement() {
  return getRuleContexts<CSubset_2205014Parser::Expression_statementContext>();
}

CSubset_2205014Parser::Expression_statementContext* CSubset_2205014Parser::StmtForContext::expression_statement(size_t i) {
  return getRuleContext<CSubset_2205014Parser::Expression_statementContext>(i);
}

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::StmtForContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtForContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

CSubset_2205014Parser::StatementContext* CSubset_2205014Parser::StmtForContext::statement() {
  return getRuleContext<CSubset_2205014Parser::StatementContext>(0);
}

CSubset_2205014Parser::StmtForContext::StmtForContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtFor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtIfContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::StmtIfContext::IF() {
  return getToken(CSubset_2205014Parser::IF, 0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtIfContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::StmtIfContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::StmtIfContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

CSubset_2205014Parser::StatementContext* CSubset_2205014Parser::StmtIfContext::statement() {
  return getRuleContext<CSubset_2205014Parser::StatementContext>(0);
}

CSubset_2205014Parser::StmtIfContext::StmtIfContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::StmtIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitStmtIf(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::StatementContext* CSubset_2205014Parser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, CSubset_2205014Parser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(224);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtVar_decContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(178);
      var_declaration();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtExpr_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(179);
      expression_statement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtIfElseContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(180);
      match(CSubset_2205014Parser::IF);
      setState(181);
      match(CSubset_2205014Parser::LPAREN);
      setState(182);
      expression();
      setState(183);
      match(CSubset_2205014Parser::RPAREN);
      setState(184);
      statement();
      setState(185);
      match(CSubset_2205014Parser::ELSE);
      setState(186);
      statement();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtWhileContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(188);
      match(CSubset_2205014Parser::WHILE);
      setState(189);
      match(CSubset_2205014Parser::LPAREN);
      setState(190);
      expression();
      setState(191);
      match(CSubset_2205014Parser::RPAREN);
      setState(192);
      statement();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtPrintContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(194);
      match(CSubset_2205014Parser::PRINTLN);
      setState(195);
      match(CSubset_2205014Parser::LPAREN);
      setState(196);
      match(CSubset_2205014Parser::ID);
      setState(197);
      match(CSubset_2205014Parser::RPAREN);
      setState(198);
      match(CSubset_2205014Parser::SEMICOLON);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtReturnContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(199);
      match(CSubset_2205014Parser::RETURN);
      setState(200);
      expression();
      setState(201);
      match(CSubset_2205014Parser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtCmpd_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(203);
      compound_statement();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtForContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(204);
      match(CSubset_2205014Parser::FOR);
      setState(205);
      match(CSubset_2205014Parser::LPAREN);
      setState(206);
      expression_statement();
      setState(207);
      expression_statement();
      setState(208);
      expression();
      setState(209);
      match(CSubset_2205014Parser::RPAREN);
      setState(210);
      statement();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtIfContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(212);
      match(CSubset_2205014Parser::IF);
      setState(213);
      match(CSubset_2205014Parser::LPAREN);
      setState(214);
      expression();
      setState(215);
      match(CSubset_2205014Parser::RPAREN);
      setState(216);
      statement();
      break;
    }

    case 10: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtPrintErrContext>(_localctx);
      enterOuterAlt(_localctx, 10);
      setState(218);
      match(CSubset_2205014Parser::PRINTLN);
      setState(219);
      match(CSubset_2205014Parser::LPAREN);
      setState(220);
      match(CSubset_2205014Parser::ID);
      setState(221);
      match(CSubset_2205014Parser::RPAREN);
      break;
    }

    case 11: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::StmtReturnErrContext>(_localctx);
      enterOuterAlt(_localctx, 11);
      setState(222);
      match(CSubset_2205014Parser::RETURN);
      setState(223);
      expression();
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

//----------------- Expression_statementContext ------------------------------------------------------------------

CSubset_2205014Parser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Expression_statementContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleExpression_statement;
}

void CSubset_2205014Parser::Expression_statementContext::copyFrom(Expression_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_stmtSemicolonContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::Expr_stmtSemicolonContext::SEMICOLON() {
  return getToken(CSubset_2205014Parser::SEMICOLON, 0);
}

CSubset_2205014Parser::Expr_stmtSemicolonContext::Expr_stmtSemicolonContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Expr_stmtSemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitExpr_stmtSemicolon(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_stmtExprSemicolonContext ------------------------------------------------------------------

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::Expr_stmtExprSemicolonContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::Expr_stmtExprSemicolonContext::SEMICOLON() {
  return getToken(CSubset_2205014Parser::SEMICOLON, 0);
}

CSubset_2205014Parser::Expr_stmtExprSemicolonContext::Expr_stmtExprSemicolonContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Expr_stmtExprSemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitExpr_stmtExprSemicolon(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_stmtExprContext ------------------------------------------------------------------

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::Expr_stmtExprContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

CSubset_2205014Parser::Expr_stmtExprContext::Expr_stmtExprContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::Expr_stmtExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitExpr_stmtExpr(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::Expression_statementContext* CSubset_2205014Parser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, CSubset_2205014Parser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(231);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::Expr_stmtSemicolonContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(226);
      match(CSubset_2205014Parser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::Expr_stmtExprSemicolonContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(227);
      expression();
      setState(228);
      match(CSubset_2205014Parser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::Expr_stmtExprContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(230);
      expression();
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

//----------------- VariableContext ------------------------------------------------------------------

CSubset_2205014Parser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::VariableContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleVariable;
}

void CSubset_2205014Parser::VariableContext::copyFrom(VariableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarThirdContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::VarThirdContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::VarThirdContext::LTHIRD() {
  return getToken(CSubset_2205014Parser::LTHIRD, 0);
}

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::VarThirdContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::VarThirdContext::RTHIRD() {
  return getToken(CSubset_2205014Parser::RTHIRD, 0);
}

CSubset_2205014Parser::VarThirdContext::VarThirdContext(VariableContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::VarThirdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitVarThird(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarIdContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::VarIdContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

CSubset_2205014Parser::VarIdContext::VarIdContext(VariableContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::VarIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitVarId(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::VariableContext* CSubset_2205014Parser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 26, CSubset_2205014Parser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(239);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::VarIdContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(233);
      match(CSubset_2205014Parser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::VarThirdContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(234);
      match(CSubset_2205014Parser::ID);
      setState(235);
      match(CSubset_2205014Parser::LTHIRD);
      setState(236);
      expression();
      setState(237);
      match(CSubset_2205014Parser::RTHIRD);
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

//----------------- ExpressionContext ------------------------------------------------------------------

CSubset_2205014Parser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::ExpressionContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleExpression;
}

void CSubset_2205014Parser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprVarContext ------------------------------------------------------------------

CSubset_2205014Parser::VariableContext* CSubset_2205014Parser::ExprVarContext::variable() {
  return getRuleContext<CSubset_2205014Parser::VariableContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::ExprVarContext::ASSIGNOP() {
  return getToken(CSubset_2205014Parser::ASSIGNOP, 0);
}

CSubset_2205014Parser::Logic_expressionContext* CSubset_2205014Parser::ExprVarContext::logic_expression() {
  return getRuleContext<CSubset_2205014Parser::Logic_expressionContext>(0);
}

CSubset_2205014Parser::ExprVarContext::ExprVarContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::ExprVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitExprVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprLogicContext ------------------------------------------------------------------

CSubset_2205014Parser::Logic_expressionContext* CSubset_2205014Parser::ExprLogicContext::logic_expression() {
  return getRuleContext<CSubset_2205014Parser::Logic_expressionContext>(0);
}

CSubset_2205014Parser::ExprLogicContext::ExprLogicContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::ExprLogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitExprLogic(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, CSubset_2205014Parser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(246);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::ExprLogicContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(241);
      logic_expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::ExprVarContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(242);
      variable();
      setState(243);
      match(CSubset_2205014Parser::ASSIGNOP);
      setState(244);
      logic_expression();
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

//----------------- Logic_expressionContext ------------------------------------------------------------------

CSubset_2205014Parser::Logic_expressionContext::Logic_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Logic_expressionContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleLogic_expression;
}

void CSubset_2205014Parser::Logic_expressionContext::copyFrom(Logic_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LogicRelRelContext ------------------------------------------------------------------

std::vector<CSubset_2205014Parser::Rel_expressionContext *> CSubset_2205014Parser::LogicRelRelContext::rel_expression() {
  return getRuleContexts<CSubset_2205014Parser::Rel_expressionContext>();
}

CSubset_2205014Parser::Rel_expressionContext* CSubset_2205014Parser::LogicRelRelContext::rel_expression(size_t i) {
  return getRuleContext<CSubset_2205014Parser::Rel_expressionContext>(i);
}

tree::TerminalNode* CSubset_2205014Parser::LogicRelRelContext::LOGICOP() {
  return getToken(CSubset_2205014Parser::LOGICOP, 0);
}

CSubset_2205014Parser::LogicRelRelContext::LogicRelRelContext(Logic_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::LogicRelRelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitLogicRelRel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogicRelAssignContext ------------------------------------------------------------------

CSubset_2205014Parser::Rel_expressionContext* CSubset_2205014Parser::LogicRelAssignContext::rel_expression() {
  return getRuleContext<CSubset_2205014Parser::Rel_expressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::LogicRelAssignContext::LOGICOP() {
  return getToken(CSubset_2205014Parser::LOGICOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::LogicRelAssignContext::ASSIGNOP() {
  return getToken(CSubset_2205014Parser::ASSIGNOP, 0);
}

CSubset_2205014Parser::LogicRelAssignContext::LogicRelAssignContext(Logic_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::LogicRelAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitLogicRelAssign(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogciRelContext ------------------------------------------------------------------

CSubset_2205014Parser::Rel_expressionContext* CSubset_2205014Parser::LogciRelContext::rel_expression() {
  return getRuleContext<CSubset_2205014Parser::Rel_expressionContext>(0);
}

CSubset_2205014Parser::LogciRelContext::LogciRelContext(Logic_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::LogciRelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitLogciRel(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::Logic_expressionContext* CSubset_2205014Parser::logic_expression() {
  Logic_expressionContext *_localctx = _tracker.createInstance<Logic_expressionContext>(_ctx, getState());
  enterRule(_localctx, 30, CSubset_2205014Parser::RuleLogic_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(257);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::LogciRelContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(248);
      rel_expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::LogicRelRelContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(249);
      rel_expression();
      setState(250);
      match(CSubset_2205014Parser::LOGICOP);
      setState(251);
      rel_expression();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::LogicRelAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(253);
      rel_expression();
      setState(254);
      match(CSubset_2205014Parser::LOGICOP);
      setState(255);
      match(CSubset_2205014Parser::ASSIGNOP);
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

//----------------- Rel_expressionContext ------------------------------------------------------------------

CSubset_2205014Parser::Rel_expressionContext::Rel_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Rel_expressionContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleRel_expression;
}

void CSubset_2205014Parser::Rel_expressionContext::copyFrom(Rel_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RelSimpleSimpleContext ------------------------------------------------------------------

std::vector<CSubset_2205014Parser::Simple_expressionContext *> CSubset_2205014Parser::RelSimpleSimpleContext::simple_expression() {
  return getRuleContexts<CSubset_2205014Parser::Simple_expressionContext>();
}

CSubset_2205014Parser::Simple_expressionContext* CSubset_2205014Parser::RelSimpleSimpleContext::simple_expression(size_t i) {
  return getRuleContext<CSubset_2205014Parser::Simple_expressionContext>(i);
}

tree::TerminalNode* CSubset_2205014Parser::RelSimpleSimpleContext::RELOP() {
  return getToken(CSubset_2205014Parser::RELOP, 0);
}

CSubset_2205014Parser::RelSimpleSimpleContext::RelSimpleSimpleContext(Rel_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::RelSimpleSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitRelSimpleSimple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelSimpleContext ------------------------------------------------------------------

CSubset_2205014Parser::Simple_expressionContext* CSubset_2205014Parser::RelSimpleContext::simple_expression() {
  return getRuleContext<CSubset_2205014Parser::Simple_expressionContext>(0);
}

CSubset_2205014Parser::RelSimpleContext::RelSimpleContext(Rel_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::RelSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitRelSimple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelSimpleRelAssignContext ------------------------------------------------------------------

CSubset_2205014Parser::Simple_expressionContext* CSubset_2205014Parser::RelSimpleRelAssignContext::simple_expression() {
  return getRuleContext<CSubset_2205014Parser::Simple_expressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::RelSimpleRelAssignContext::RELOP() {
  return getToken(CSubset_2205014Parser::RELOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::RelSimpleRelAssignContext::ASSIGNOP() {
  return getToken(CSubset_2205014Parser::ASSIGNOP, 0);
}

CSubset_2205014Parser::RelSimpleRelAssignContext::RelSimpleRelAssignContext(Rel_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::RelSimpleRelAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitRelSimpleRelAssign(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::Rel_expressionContext* CSubset_2205014Parser::rel_expression() {
  Rel_expressionContext *_localctx = _tracker.createInstance<Rel_expressionContext>(_ctx, getState());
  enterRule(_localctx, 32, CSubset_2205014Parser::RuleRel_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(268);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::RelSimpleContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(259);
      simple_expression(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::RelSimpleSimpleContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(260);
      simple_expression(0);
      setState(261);
      match(CSubset_2205014Parser::RELOP);
      setState(262);
      simple_expression(0);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::RelSimpleRelAssignContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(264);
      simple_expression(0);
      setState(265);
      match(CSubset_2205014Parser::RELOP);
      setState(266);
      match(CSubset_2205014Parser::ASSIGNOP);
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

//----------------- Simple_expressionContext ------------------------------------------------------------------

CSubset_2205014Parser::Simple_expressionContext::Simple_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Simple_expressionContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleSimple_expression;
}

void CSubset_2205014Parser::Simple_expressionContext::copyFrom(Simple_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleTermContext ------------------------------------------------------------------

CSubset_2205014Parser::TermContext* CSubset_2205014Parser::SimpleTermContext::term() {
  return getRuleContext<CSubset_2205014Parser::TermContext>(0);
}

CSubset_2205014Parser::SimpleTermContext::SimpleTermContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::SimpleTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitSimpleTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleSimpleTermContext ------------------------------------------------------------------

CSubset_2205014Parser::Simple_expressionContext* CSubset_2205014Parser::SimpleSimpleTermContext::simple_expression() {
  return getRuleContext<CSubset_2205014Parser::Simple_expressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::SimpleSimpleTermContext::ADDOP() {
  return getToken(CSubset_2205014Parser::ADDOP, 0);
}

CSubset_2205014Parser::TermContext* CSubset_2205014Parser::SimpleSimpleTermContext::term() {
  return getRuleContext<CSubset_2205014Parser::TermContext>(0);
}

CSubset_2205014Parser::SimpleSimpleTermContext::SimpleSimpleTermContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::SimpleSimpleTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitSimpleSimpleTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleSimpleAddContext ------------------------------------------------------------------

CSubset_2205014Parser::Simple_expressionContext* CSubset_2205014Parser::SimpleSimpleAddContext::simple_expression() {
  return getRuleContext<CSubset_2205014Parser::Simple_expressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::SimpleSimpleAddContext::ADDOP() {
  return getToken(CSubset_2205014Parser::ADDOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::SimpleSimpleAddContext::ASSIGNOP() {
  return getToken(CSubset_2205014Parser::ASSIGNOP, 0);
}

CSubset_2205014Parser::SimpleSimpleAddContext::SimpleSimpleAddContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::SimpleSimpleAddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitSimpleSimpleAdd(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::Simple_expressionContext* CSubset_2205014Parser::simple_expression() {
   return simple_expression(0);
}

CSubset_2205014Parser::Simple_expressionContext* CSubset_2205014Parser::simple_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubset_2205014Parser::Simple_expressionContext *_localctx = _tracker.createInstance<Simple_expressionContext>(_ctx, parentState);
  CSubset_2205014Parser::Simple_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CSubset_2205014Parser::RuleSimple_expression, precedence);

    

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
    _localctx = _tracker.createInstance<SimpleTermContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(271);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(281);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(279);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<SimpleSimpleTermContext>(_tracker.createInstance<Simple_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSimple_expression);
          setState(273);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(274);
          match(CSubset_2205014Parser::ADDOP);
          setState(275);
          term(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<SimpleSimpleAddContext>(_tracker.createInstance<Simple_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSimple_expression);
          setState(276);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(277);
          match(CSubset_2205014Parser::ADDOP);
          setState(278);
          match(CSubset_2205014Parser::ASSIGNOP);
          break;
        }

        default:
          break;
        } 
      }
      setState(283);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- TermContext ------------------------------------------------------------------

CSubset_2205014Parser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::TermContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleTerm;
}

void CSubset_2205014Parser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TermUnaryContext ------------------------------------------------------------------

CSubset_2205014Parser::Unary_expressionContext* CSubset_2205014Parser::TermUnaryContext::unary_expression() {
  return getRuleContext<CSubset_2205014Parser::Unary_expressionContext>(0);
}

CSubset_2205014Parser::TermUnaryContext::TermUnaryContext(TermContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::TermUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitTermUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TermTermContext ------------------------------------------------------------------

CSubset_2205014Parser::TermContext* CSubset_2205014Parser::TermTermContext::term() {
  return getRuleContext<CSubset_2205014Parser::TermContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::TermTermContext::MULOP() {
  return getToken(CSubset_2205014Parser::MULOP, 0);
}

CSubset_2205014Parser::Unary_expressionContext* CSubset_2205014Parser::TermTermContext::unary_expression() {
  return getRuleContext<CSubset_2205014Parser::Unary_expressionContext>(0);
}

CSubset_2205014Parser::TermTermContext::TermTermContext(TermContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::TermTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitTermTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TermTermMulAssignContext ------------------------------------------------------------------

CSubset_2205014Parser::TermContext* CSubset_2205014Parser::TermTermMulAssignContext::term() {
  return getRuleContext<CSubset_2205014Parser::TermContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::TermTermMulAssignContext::MULOP() {
  return getToken(CSubset_2205014Parser::MULOP, 0);
}

tree::TerminalNode* CSubset_2205014Parser::TermTermMulAssignContext::ASSIGNOP() {
  return getToken(CSubset_2205014Parser::ASSIGNOP, 0);
}

CSubset_2205014Parser::TermTermMulAssignContext::TermTermMulAssignContext(TermContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::TermTermMulAssignContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitTermTermMulAssign(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::TermContext* CSubset_2205014Parser::term() {
   return term(0);
}

CSubset_2205014Parser::TermContext* CSubset_2205014Parser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubset_2205014Parser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  CSubset_2205014Parser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, CSubset_2205014Parser::RuleTerm, precedence);

    

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
    _localctx = _tracker.createInstance<TermUnaryContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(285);
    unary_expression();
    _ctx->stop = _input->LT(-1);
    setState(295);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(293);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<TermTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(287);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(288);
          match(CSubset_2205014Parser::MULOP);
          setState(289);
          unary_expression();
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<TermTermMulAssignContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleTerm);
          setState(290);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(291);
          match(CSubset_2205014Parser::MULOP);
          setState(292);
          match(CSubset_2205014Parser::ASSIGNOP);
          break;
        }

        default:
          break;
        } 
      }
      setState(297);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

//----------------- Unary_expressionContext ------------------------------------------------------------------

CSubset_2205014Parser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::Unary_expressionContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleUnary_expression;
}

void CSubset_2205014Parser::Unary_expressionContext::copyFrom(Unary_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryNotContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::UnaryNotContext::NOT() {
  return getToken(CSubset_2205014Parser::NOT, 0);
}

CSubset_2205014Parser::Unary_expressionContext* CSubset_2205014Parser::UnaryNotContext::unary_expression() {
  return getRuleContext<CSubset_2205014Parser::Unary_expressionContext>(0);
}

CSubset_2205014Parser::UnaryNotContext::UnaryNotContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UnaryNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUnaryNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryFactorContext ------------------------------------------------------------------

CSubset_2205014Parser::FactorContext* CSubset_2205014Parser::UnaryFactorContext::factor() {
  return getRuleContext<CSubset_2205014Parser::FactorContext>(0);
}

CSubset_2205014Parser::UnaryFactorContext::UnaryFactorContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UnaryFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUnaryFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryAddContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::UnaryAddContext::ADDOP() {
  return getToken(CSubset_2205014Parser::ADDOP, 0);
}

CSubset_2205014Parser::Unary_expressionContext* CSubset_2205014Parser::UnaryAddContext::unary_expression() {
  return getRuleContext<CSubset_2205014Parser::Unary_expressionContext>(0);
}

CSubset_2205014Parser::UnaryAddContext::UnaryAddContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::UnaryAddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitUnaryAdd(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::Unary_expressionContext* CSubset_2205014Parser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 38, CSubset_2205014Parser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(303);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubset_2205014Parser::ADDOP: {
        _localctx = _tracker.createInstance<CSubset_2205014Parser::UnaryAddContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(298);
        match(CSubset_2205014Parser::ADDOP);
        setState(299);
        unary_expression();
        break;
      }

      case CSubset_2205014Parser::NOT: {
        _localctx = _tracker.createInstance<CSubset_2205014Parser::UnaryNotContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(300);
        match(CSubset_2205014Parser::NOT);
        setState(301);
        unary_expression();
        break;
      }

      case CSubset_2205014Parser::LPAREN:
      case CSubset_2205014Parser::ID:
      case CSubset_2205014Parser::CONST_INT:
      case CSubset_2205014Parser::CONST_FLOAT: {
        _localctx = _tracker.createInstance<CSubset_2205014Parser::UnaryFactorContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(302);
        factor();
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

//----------------- FactorContext ------------------------------------------------------------------

CSubset_2205014Parser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::FactorContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleFactor;
}

void CSubset_2205014Parser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FactorIncopContext ------------------------------------------------------------------

CSubset_2205014Parser::VariableContext* CSubset_2205014Parser::FactorIncopContext::variable() {
  return getRuleContext<CSubset_2205014Parser::VariableContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FactorIncopContext::INCOP() {
  return getToken(CSubset_2205014Parser::INCOP, 0);
}

CSubset_2205014Parser::FactorIncopContext::FactorIncopContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FactorIncopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFactorIncop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorDecopContext ------------------------------------------------------------------

CSubset_2205014Parser::VariableContext* CSubset_2205014Parser::FactorDecopContext::variable() {
  return getRuleContext<CSubset_2205014Parser::VariableContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FactorDecopContext::DECOP() {
  return getToken(CSubset_2205014Parser::DECOP, 0);
}

CSubset_2205014Parser::FactorDecopContext::FactorDecopContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FactorDecopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFactorDecop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorIntContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::FactorIntContext::CONST_INT() {
  return getToken(CSubset_2205014Parser::CONST_INT, 0);
}

CSubset_2205014Parser::FactorIntContext::FactorIntContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FactorIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFactorInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorParenContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::FactorParenContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

CSubset_2205014Parser::ExpressionContext* CSubset_2205014Parser::FactorParenContext::expression() {
  return getRuleContext<CSubset_2205014Parser::ExpressionContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FactorParenContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

CSubset_2205014Parser::FactorParenContext::FactorParenContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FactorParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFactorParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorFloatContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::FactorFloatContext::CONST_FLOAT() {
  return getToken(CSubset_2205014Parser::CONST_FLOAT, 0);
}

CSubset_2205014Parser::FactorFloatContext::FactorFloatContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FactorFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFactorFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorVarContext ------------------------------------------------------------------

CSubset_2205014Parser::VariableContext* CSubset_2205014Parser::FactorVarContext::variable() {
  return getRuleContext<CSubset_2205014Parser::VariableContext>(0);
}

CSubset_2205014Parser::FactorVarContext::FactorVarContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FactorVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFactorVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorIdContext ------------------------------------------------------------------

tree::TerminalNode* CSubset_2205014Parser::FactorIdContext::ID() {
  return getToken(CSubset_2205014Parser::ID, 0);
}

tree::TerminalNode* CSubset_2205014Parser::FactorIdContext::LPAREN() {
  return getToken(CSubset_2205014Parser::LPAREN, 0);
}

CSubset_2205014Parser::Argument_listContext* CSubset_2205014Parser::FactorIdContext::argument_list() {
  return getRuleContext<CSubset_2205014Parser::Argument_listContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::FactorIdContext::RPAREN() {
  return getToken(CSubset_2205014Parser::RPAREN, 0);
}

CSubset_2205014Parser::FactorIdContext::FactorIdContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::FactorIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitFactorId(this);
  else
    return visitor->visitChildren(this);
}
CSubset_2205014Parser::FactorContext* CSubset_2205014Parser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 40, CSubset_2205014Parser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(323);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FactorVarContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(305);
      variable();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FactorIdContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(306);
      match(CSubset_2205014Parser::ID);
      setState(307);
      match(CSubset_2205014Parser::LPAREN);
      setState(308);
      argument_list();
      setState(309);
      match(CSubset_2205014Parser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FactorParenContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(311);
      match(CSubset_2205014Parser::LPAREN);
      setState(312);
      expression();
      setState(313);
      match(CSubset_2205014Parser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FactorIntContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(315);
      match(CSubset_2205014Parser::CONST_INT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FactorFloatContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(316);
      match(CSubset_2205014Parser::CONST_FLOAT);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FactorIncopContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(317);
      variable();
      setState(318);
      match(CSubset_2205014Parser::INCOP);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CSubset_2205014Parser::FactorDecopContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(320);
      variable();
      setState(321);
      match(CSubset_2205014Parser::DECOP);
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

//----------------- Argument_listContext ------------------------------------------------------------------

CSubset_2205014Parser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSubset_2205014Parser::ArgumentsContext* CSubset_2205014Parser::Argument_listContext::arguments() {
  return getRuleContext<CSubset_2205014Parser::ArgumentsContext>(0);
}


size_t CSubset_2205014Parser::Argument_listContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleArgument_list;
}


std::any CSubset_2205014Parser::Argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitArgument_list(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::Argument_listContext* CSubset_2205014Parser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 42, CSubset_2205014Parser::RuleArgument_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(327);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubset_2205014Parser::LPAREN:
      case CSubset_2205014Parser::ADDOP:
      case CSubset_2205014Parser::NOT:
      case CSubset_2205014Parser::ID:
      case CSubset_2205014Parser::CONST_INT:
      case CSubset_2205014Parser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(325);
        arguments(0);
        break;
      }

      case CSubset_2205014Parser::RPAREN: {
        enterOuterAlt(_localctx, 2);

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

//----------------- ArgumentsContext ------------------------------------------------------------------

CSubset_2205014Parser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubset_2205014Parser::ArgumentsContext::getRuleIndex() const {
  return CSubset_2205014Parser::RuleArguments;
}

void CSubset_2205014Parser::ArgumentsContext::copyFrom(ArgumentsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArgsArgsContext ------------------------------------------------------------------

CSubset_2205014Parser::ArgumentsContext* CSubset_2205014Parser::ArgsArgsContext::arguments() {
  return getRuleContext<CSubset_2205014Parser::ArgumentsContext>(0);
}

tree::TerminalNode* CSubset_2205014Parser::ArgsArgsContext::COMMA() {
  return getToken(CSubset_2205014Parser::COMMA, 0);
}

CSubset_2205014Parser::Logic_expressionContext* CSubset_2205014Parser::ArgsArgsContext::logic_expression() {
  return getRuleContext<CSubset_2205014Parser::Logic_expressionContext>(0);
}

CSubset_2205014Parser::ArgsArgsContext::ArgsArgsContext(ArgumentsContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::ArgsArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitArgsArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgsLogicContext ------------------------------------------------------------------

CSubset_2205014Parser::Logic_expressionContext* CSubset_2205014Parser::ArgsLogicContext::logic_expression() {
  return getRuleContext<CSubset_2205014Parser::Logic_expressionContext>(0);
}

CSubset_2205014Parser::ArgsLogicContext::ArgsLogicContext(ArgumentsContext *ctx) { copyFrom(ctx); }


std::any CSubset_2205014Parser::ArgsLogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubset_2205014Visitor*>(visitor))
    return parserVisitor->visitArgsLogic(this);
  else
    return visitor->visitChildren(this);
}

CSubset_2205014Parser::ArgumentsContext* CSubset_2205014Parser::arguments() {
   return arguments(0);
}

CSubset_2205014Parser::ArgumentsContext* CSubset_2205014Parser::arguments(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubset_2205014Parser::ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, parentState);
  CSubset_2205014Parser::ArgumentsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, CSubset_2205014Parser::RuleArguments, precedence);

    

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
    _localctx = _tracker.createInstance<ArgsLogicContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(330);
    logic_expression();
    _ctx->stop = _input->LT(-1);
    setState(337);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArgsArgsContext>(_tracker.createInstance<ArgumentsContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleArguments);
        setState(332);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(333);
        match(CSubset_2205014Parser::COMMA);
        setState(334);
        logic_expression(); 
      }
      setState(339);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 26, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool CSubset_2205014Parser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return programSempred(antlrcpp::downCast<ProgramContext *>(context), predicateIndex);
    case 5: return parameter_listSempred(antlrcpp::downCast<Parameter_listContext *>(context), predicateIndex);
    case 9: return declaration_listSempred(antlrcpp::downCast<Declaration_listContext *>(context), predicateIndex);
    case 10: return statementsSempred(antlrcpp::downCast<StatementsContext *>(context), predicateIndex);
    case 17: return simple_expressionSempred(antlrcpp::downCast<Simple_expressionContext *>(context), predicateIndex);
    case 18: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);
    case 22: return argumentsSempred(antlrcpp::downCast<ArgumentsContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool CSubset_2205014Parser::programSempred(ProgramContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CSubset_2205014Parser::parameter_listSempred(Parameter_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 6);
    case 2: return precpred(_ctx, 5);
    case 3: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CSubset_2205014Parser::declaration_listSempred(Declaration_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 4: return precpred(_ctx, 6);
    case 5: return precpred(_ctx, 5);
    case 6: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CSubset_2205014Parser::statementsSempred(StatementsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubset_2205014Parser::simple_expressionSempred(Simple_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);
    case 9: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubset_2205014Parser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 10: return precpred(_ctx, 2);
    case 11: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubset_2205014Parser::argumentsSempred(ArgumentsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 12: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void CSubset_2205014Parser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  csubset_2205014ParserInitialize();
#else
  ::antlr4::internal::call_once(csubset_2205014ParserOnceFlag, csubset_2205014ParserInitialize);
#endif
}
