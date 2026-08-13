
// Generated from CSubset.g4 by ANTLR 4.13.2


#include "CSubsetVisitor.h"

#include "CSubsetParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CSubsetParserStaticData final {
  CSubsetParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CSubsetParserStaticData(const CSubsetParserStaticData&) = delete;
  CSubsetParserStaticData(CSubsetParserStaticData&&) = delete;
  CSubsetParserStaticData& operator=(const CSubsetParserStaticData&) = delete;
  CSubsetParserStaticData& operator=(CSubsetParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag csubsetParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CSubsetParserStaticData> csubsetParserStaticData = nullptr;

void csubsetParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (csubsetParserStaticData != nullptr) {
    return;
  }
#else
  assert(csubsetParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CSubsetParserStaticData>(
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
  	4,1,32,314,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,1,0,1,1,1,1,1,1,1,1,1,1,5,1,54,8,1,10,1,12,1,57,9,1,
  	1,2,1,2,1,2,3,2,62,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,3,3,77,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	3,4,92,8,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,3,5,102,8,5,1,5,1,5,1,5,1,
  	5,1,5,1,5,1,5,1,5,5,5,112,8,5,10,5,12,5,115,9,5,1,6,1,6,1,6,1,6,1,6,1,
  	6,3,6,123,8,6,1,7,1,7,1,7,1,7,1,8,1,8,1,8,3,8,132,8,8,1,9,1,9,1,9,1,9,
  	1,9,1,9,1,9,1,9,1,9,3,9,143,8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,
  	9,154,8,9,10,9,12,9,157,9,9,1,10,1,10,1,10,1,10,1,10,5,10,164,8,10,10,
  	10,12,10,167,9,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,
  	11,1,11,3,11,209,8,11,1,12,1,12,1,12,1,12,1,12,3,12,216,8,12,1,13,1,13,
  	1,13,1,13,1,13,1,13,3,13,224,8,13,1,14,1,14,1,14,1,14,1,14,3,14,231,8,
  	14,1,15,1,15,1,15,1,15,1,15,3,15,238,8,15,1,16,1,16,1,16,1,16,1,16,3,
  	16,245,8,16,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,1,17,5,17,256,8,17,
  	10,17,12,17,259,9,17,1,18,1,18,1,18,1,18,1,18,1,18,5,18,267,8,18,10,18,
  	12,18,270,9,18,1,19,1,19,1,19,1,19,1,19,3,19,277,8,19,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,3,20,297,8,20,1,21,1,21,3,21,301,8,21,1,22,1,22,1,22,1,22,1,22,1,
  	22,5,22,309,8,22,10,22,12,22,312,9,22,1,22,0,7,2,10,18,20,34,36,44,23,
  	0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,36,38,40,42,44,0,0,334,
  	0,46,1,0,0,0,2,48,1,0,0,0,4,61,1,0,0,0,6,76,1,0,0,0,8,91,1,0,0,0,10,101,
  	1,0,0,0,12,122,1,0,0,0,14,124,1,0,0,0,16,131,1,0,0,0,18,142,1,0,0,0,20,
  	158,1,0,0,0,22,208,1,0,0,0,24,215,1,0,0,0,26,223,1,0,0,0,28,230,1,0,0,
  	0,30,237,1,0,0,0,32,244,1,0,0,0,34,246,1,0,0,0,36,260,1,0,0,0,38,276,
  	1,0,0,0,40,296,1,0,0,0,42,300,1,0,0,0,44,302,1,0,0,0,46,47,3,2,1,0,47,
  	1,1,0,0,0,48,49,6,1,-1,0,49,50,3,4,2,0,50,55,1,0,0,0,51,52,10,2,0,0,52,
  	54,3,4,2,0,53,51,1,0,0,0,54,57,1,0,0,0,55,53,1,0,0,0,55,56,1,0,0,0,56,
  	3,1,0,0,0,57,55,1,0,0,0,58,62,3,14,7,0,59,62,3,6,3,0,60,62,3,8,4,0,61,
  	58,1,0,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,5,1,0,0,0,63,64,3,16,8,0,64,
  	65,5,30,0,0,65,66,5,14,0,0,66,67,3,10,5,0,67,68,5,15,0,0,68,69,5,20,0,
  	0,69,77,1,0,0,0,70,71,3,16,8,0,71,72,5,30,0,0,72,73,5,14,0,0,73,74,5,
  	15,0,0,74,75,5,20,0,0,75,77,1,0,0,0,76,63,1,0,0,0,76,70,1,0,0,0,77,7,
  	1,0,0,0,78,79,3,16,8,0,79,80,5,30,0,0,80,81,5,14,0,0,81,82,3,10,5,0,82,
  	83,5,15,0,0,83,84,3,12,6,0,84,92,1,0,0,0,85,86,3,16,8,0,86,87,5,30,0,
  	0,87,88,5,14,0,0,88,89,5,15,0,0,89,90,3,12,6,0,90,92,1,0,0,0,91,78,1,
  	0,0,0,91,85,1,0,0,0,92,9,1,0,0,0,93,94,6,5,-1,0,94,95,3,16,8,0,95,96,
  	5,30,0,0,96,102,1,0,0,0,97,102,3,16,8,0,98,99,3,16,8,0,99,100,5,22,0,
  	0,100,102,1,0,0,0,101,93,1,0,0,0,101,97,1,0,0,0,101,98,1,0,0,0,102,113,
  	1,0,0,0,103,104,10,5,0,0,104,105,5,21,0,0,105,106,3,16,8,0,106,107,5,
  	30,0,0,107,112,1,0,0,0,108,109,10,4,0,0,109,110,5,21,0,0,110,112,3,16,
  	8,0,111,103,1,0,0,0,111,108,1,0,0,0,112,115,1,0,0,0,113,111,1,0,0,0,113,
  	114,1,0,0,0,114,11,1,0,0,0,115,113,1,0,0,0,116,117,5,16,0,0,117,118,3,
  	20,10,0,118,119,5,17,0,0,119,123,1,0,0,0,120,121,5,16,0,0,121,123,5,17,
  	0,0,122,116,1,0,0,0,122,120,1,0,0,0,123,13,1,0,0,0,124,125,3,16,8,0,125,
  	126,3,18,9,0,126,127,5,20,0,0,127,15,1,0,0,0,128,132,5,11,0,0,129,132,
  	5,12,0,0,130,132,5,13,0,0,131,128,1,0,0,0,131,129,1,0,0,0,131,130,1,0,
  	0,0,132,17,1,0,0,0,133,134,6,9,-1,0,134,143,5,30,0,0,135,136,5,30,0,0,
  	136,137,5,18,0,0,137,138,5,31,0,0,138,143,5,19,0,0,139,140,5,30,0,0,140,
  	141,5,22,0,0,141,143,5,30,0,0,142,133,1,0,0,0,142,135,1,0,0,0,142,139,
  	1,0,0,0,143,155,1,0,0,0,144,145,10,5,0,0,145,146,5,21,0,0,146,154,5,30,
  	0,0,147,148,10,4,0,0,148,149,5,21,0,0,149,150,5,30,0,0,150,151,5,18,0,
  	0,151,152,5,31,0,0,152,154,5,19,0,0,153,144,1,0,0,0,153,147,1,0,0,0,154,
  	157,1,0,0,0,155,153,1,0,0,0,155,156,1,0,0,0,156,19,1,0,0,0,157,155,1,
  	0,0,0,158,159,6,10,-1,0,159,160,3,22,11,0,160,165,1,0,0,0,161,162,10,
  	1,0,0,162,164,3,22,11,0,163,161,1,0,0,0,164,167,1,0,0,0,165,163,1,0,0,
  	0,165,166,1,0,0,0,166,21,1,0,0,0,167,165,1,0,0,0,168,209,3,14,7,0,169,
  	209,3,24,12,0,170,171,5,5,0,0,171,172,5,14,0,0,172,173,3,28,14,0,173,
  	174,5,15,0,0,174,175,3,22,11,0,175,176,5,6,0,0,176,177,3,22,11,0,177,
  	209,1,0,0,0,178,179,5,8,0,0,179,180,5,14,0,0,180,181,3,28,14,0,181,182,
  	5,15,0,0,182,183,3,22,11,0,183,209,1,0,0,0,184,185,5,9,0,0,185,186,5,
  	14,0,0,186,187,5,30,0,0,187,188,5,15,0,0,188,209,5,20,0,0,189,190,5,10,
  	0,0,190,191,3,28,14,0,191,192,5,20,0,0,192,209,1,0,0,0,193,209,3,12,6,
  	0,194,195,5,7,0,0,195,196,5,14,0,0,196,197,3,24,12,0,197,198,3,24,12,
  	0,198,199,3,28,14,0,199,200,5,15,0,0,200,201,3,22,11,0,201,209,1,0,0,
  	0,202,203,5,5,0,0,203,204,5,14,0,0,204,205,3,28,14,0,205,206,5,15,0,0,
  	206,207,3,22,11,0,207,209,1,0,0,0,208,168,1,0,0,0,208,169,1,0,0,0,208,
  	170,1,0,0,0,208,178,1,0,0,0,208,184,1,0,0,0,208,189,1,0,0,0,208,193,1,
  	0,0,0,208,194,1,0,0,0,208,202,1,0,0,0,209,23,1,0,0,0,210,216,5,20,0,0,
  	211,212,3,28,14,0,212,213,5,20,0,0,213,216,1,0,0,0,214,216,3,28,14,0,
  	215,210,1,0,0,0,215,211,1,0,0,0,215,214,1,0,0,0,216,25,1,0,0,0,217,224,
  	5,30,0,0,218,219,5,30,0,0,219,220,5,18,0,0,220,221,3,28,14,0,221,222,
  	5,19,0,0,222,224,1,0,0,0,223,217,1,0,0,0,223,218,1,0,0,0,224,27,1,0,0,
  	0,225,231,3,30,15,0,226,227,3,26,13,0,227,228,5,29,0,0,228,229,3,30,15,
  	0,229,231,1,0,0,0,230,225,1,0,0,0,230,226,1,0,0,0,231,29,1,0,0,0,232,
  	238,3,32,16,0,233,234,3,32,16,0,234,235,5,28,0,0,235,236,3,32,16,0,236,
  	238,1,0,0,0,237,232,1,0,0,0,237,233,1,0,0,0,238,31,1,0,0,0,239,245,3,
  	34,17,0,240,241,3,34,17,0,241,242,5,27,0,0,242,243,3,34,17,0,243,245,
  	1,0,0,0,244,239,1,0,0,0,244,240,1,0,0,0,245,33,1,0,0,0,246,247,6,17,-1,
  	0,247,248,3,36,18,0,248,257,1,0,0,0,249,250,10,2,0,0,250,251,5,22,0,0,
  	251,256,3,36,18,0,252,253,10,1,0,0,253,254,5,22,0,0,254,256,5,29,0,0,
  	255,249,1,0,0,0,255,252,1,0,0,0,256,259,1,0,0,0,257,255,1,0,0,0,257,258,
  	1,0,0,0,258,35,1,0,0,0,259,257,1,0,0,0,260,261,6,18,-1,0,261,262,3,38,
  	19,0,262,268,1,0,0,0,263,264,10,1,0,0,264,265,5,23,0,0,265,267,3,38,19,
  	0,266,263,1,0,0,0,267,270,1,0,0,0,268,266,1,0,0,0,268,269,1,0,0,0,269,
  	37,1,0,0,0,270,268,1,0,0,0,271,272,5,22,0,0,272,277,3,38,19,0,273,274,
  	5,26,0,0,274,277,3,38,19,0,275,277,3,40,20,0,276,271,1,0,0,0,276,273,
  	1,0,0,0,276,275,1,0,0,0,277,39,1,0,0,0,278,297,3,26,13,0,279,280,5,30,
  	0,0,280,281,5,14,0,0,281,282,3,42,21,0,282,283,5,15,0,0,283,297,1,0,0,
  	0,284,285,5,14,0,0,285,286,3,28,14,0,286,287,5,15,0,0,287,297,1,0,0,0,
  	288,297,5,31,0,0,289,297,5,32,0,0,290,291,3,26,13,0,291,292,5,24,0,0,
  	292,297,1,0,0,0,293,294,3,26,13,0,294,295,5,25,0,0,295,297,1,0,0,0,296,
  	278,1,0,0,0,296,279,1,0,0,0,296,284,1,0,0,0,296,288,1,0,0,0,296,289,1,
  	0,0,0,296,290,1,0,0,0,296,293,1,0,0,0,297,41,1,0,0,0,298,301,3,44,22,
  	0,299,301,1,0,0,0,300,298,1,0,0,0,300,299,1,0,0,0,301,43,1,0,0,0,302,
  	303,6,22,-1,0,303,304,3,30,15,0,304,310,1,0,0,0,305,306,10,2,0,0,306,
  	307,5,21,0,0,307,309,3,30,15,0,308,305,1,0,0,0,309,312,1,0,0,0,310,308,
  	1,0,0,0,310,311,1,0,0,0,311,45,1,0,0,0,312,310,1,0,0,0,26,55,61,76,91,
  	101,111,113,122,131,142,153,155,165,208,215,223,230,237,244,255,257,268,
  	276,296,300,310
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  csubsetParserStaticData = std::move(staticData);
}

}

CSubsetParser::CSubsetParser(TokenStream *input) : CSubsetParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

CSubsetParser::CSubsetParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  CSubsetParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *csubsetParserStaticData->atn, csubsetParserStaticData->decisionToDFA, csubsetParserStaticData->sharedContextCache, options);
}

CSubsetParser::~CSubsetParser() {
  delete _interpreter;
}

const atn::ATN& CSubsetParser::getATN() const {
  return *csubsetParserStaticData->atn;
}

std::string CSubsetParser::getGrammarFileName() const {
  return "CSubset.g4";
}

const std::vector<std::string>& CSubsetParser::getRuleNames() const {
  return csubsetParserStaticData->ruleNames;
}

const dfa::Vocabulary& CSubsetParser::getVocabulary() const {
  return csubsetParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CSubsetParser::getSerializedATN() const {
  return csubsetParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

CSubsetParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSubsetParser::ProgramContext* CSubsetParser::StartContext::program() {
  return getRuleContext<CSubsetParser::ProgramContext>(0);
}


size_t CSubsetParser::StartContext::getRuleIndex() const {
  return CSubsetParser::RuleStart;
}


std::any CSubsetParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::StartContext* CSubsetParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, CSubsetParser::RuleStart);

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

CSubsetParser::ProgramContext::ProgramContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::ProgramContext::getRuleIndex() const {
  return CSubsetParser::RuleProgram;
}

void CSubsetParser::ProgramContext::copyFrom(ProgramContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ProgProgUnitContext ------------------------------------------------------------------

CSubsetParser::ProgramContext* CSubsetParser::ProgProgUnitContext::program() {
  return getRuleContext<CSubsetParser::ProgramContext>(0);
}

CSubsetParser::UnitContext* CSubsetParser::ProgProgUnitContext::unit() {
  return getRuleContext<CSubsetParser::UnitContext>(0);
}

CSubsetParser::ProgProgUnitContext::ProgProgUnitContext(ProgramContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ProgProgUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitProgProgUnit(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ProgUnitContext ------------------------------------------------------------------

CSubsetParser::UnitContext* CSubsetParser::ProgUnitContext::unit() {
  return getRuleContext<CSubsetParser::UnitContext>(0);
}

CSubsetParser::ProgUnitContext::ProgUnitContext(ProgramContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ProgUnitContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitProgUnit(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::ProgramContext* CSubsetParser::program() {
   return program(0);
}

CSubsetParser::ProgramContext* CSubsetParser::program(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::ProgramContext *_localctx = _tracker.createInstance<ProgramContext>(_ctx, parentState);
  CSubsetParser::ProgramContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, CSubsetParser::RuleProgram, precedence);

    

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

CSubsetParser::UnitContext::UnitContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::UnitContext::getRuleIndex() const {
  return CSubsetParser::RuleUnit;
}

void CSubsetParser::UnitContext::copyFrom(UnitContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnitFuncDefContext ------------------------------------------------------------------

CSubsetParser::Func_definitionContext* CSubsetParser::UnitFuncDefContext::func_definition() {
  return getRuleContext<CSubsetParser::Func_definitionContext>(0);
}

CSubsetParser::UnitFuncDefContext::UnitFuncDefContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnitFuncDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnitFuncDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnitFuncDecContext ------------------------------------------------------------------

CSubsetParser::Func_declarationContext* CSubsetParser::UnitFuncDecContext::func_declaration() {
  return getRuleContext<CSubsetParser::Func_declarationContext>(0);
}

CSubsetParser::UnitFuncDecContext::UnitFuncDecContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnitFuncDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnitFuncDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnitVarDecContext ------------------------------------------------------------------

CSubsetParser::Var_declarationContext* CSubsetParser::UnitVarDecContext::var_declaration() {
  return getRuleContext<CSubsetParser::Var_declarationContext>(0);
}

CSubsetParser::UnitVarDecContext::UnitVarDecContext(UnitContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnitVarDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnitVarDec(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::UnitContext* CSubsetParser::unit() {
  UnitContext *_localctx = _tracker.createInstance<UnitContext>(_ctx, getState());
  enterRule(_localctx, 4, CSubsetParser::RuleUnit);

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
      _localctx = _tracker.createInstance<CSubsetParser::UnitVarDecContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(58);
      var_declaration();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::UnitFuncDecContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(59);
      func_declaration();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::UnitFuncDefContext>(_localctx);
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

CSubsetParser::Func_declarationContext::Func_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Func_declarationContext::getRuleIndex() const {
  return CSubsetParser::RuleFunc_declaration;
}

void CSubsetParser::Func_declarationContext::copyFrom(Func_declarationContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncDecNoParamContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::FuncDecNoParamContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDecNoParamContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FuncDecNoParamContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

tree::TerminalNode* CSubsetParser::FuncDecNoParamContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

tree::TerminalNode* CSubsetParser::FuncDecNoParamContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::FuncDecNoParamContext::FuncDecNoParamContext(Func_declarationContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FuncDecNoParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFuncDecNoParam(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDecParamContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::FuncDecParamContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDecParamContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FuncDecParamContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::Parameter_listContext* CSubsetParser::FuncDecParamContext::parameter_list() {
  return getRuleContext<CSubsetParser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDecParamContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

tree::TerminalNode* CSubsetParser::FuncDecParamContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::FuncDecParamContext::FuncDecParamContext(Func_declarationContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FuncDecParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFuncDecParam(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Func_declarationContext* CSubsetParser::func_declaration() {
  Func_declarationContext *_localctx = _tracker.createInstance<Func_declarationContext>(_ctx, getState());
  enterRule(_localctx, 6, CSubsetParser::RuleFunc_declaration);

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
      _localctx = _tracker.createInstance<CSubsetParser::FuncDecParamContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(63);
      type_specifier();
      setState(64);
      match(CSubsetParser::ID);
      setState(65);
      match(CSubsetParser::LPAREN);
      setState(66);
      parameter_list(0);
      setState(67);
      match(CSubsetParser::RPAREN);
      setState(68);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::FuncDecNoParamContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(70);
      type_specifier();
      setState(71);
      match(CSubsetParser::ID);
      setState(72);
      match(CSubsetParser::LPAREN);
      setState(73);
      match(CSubsetParser::RPAREN);
      setState(74);
      match(CSubsetParser::SEMICOLON);
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

CSubsetParser::Func_definitionContext::Func_definitionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Func_definitionContext::getRuleIndex() const {
  return CSubsetParser::RuleFunc_definition;
}

void CSubsetParser::Func_definitionContext::copyFrom(Func_definitionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FuncDefNoParamContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::FuncDefNoParamContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDefNoParamContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FuncDefNoParamContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

tree::TerminalNode* CSubsetParser::FuncDefNoParamContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::Compound_statementContext* CSubsetParser::FuncDefNoParamContext::compound_statement() {
  return getRuleContext<CSubsetParser::Compound_statementContext>(0);
}

CSubsetParser::FuncDefNoParamContext::FuncDefNoParamContext(Func_definitionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FuncDefNoParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFuncDefNoParam(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FuncDefParamContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::FuncDefParamContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDefParamContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FuncDefParamContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::Parameter_listContext* CSubsetParser::FuncDefParamContext::parameter_list() {
  return getRuleContext<CSubsetParser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubsetParser::FuncDefParamContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::Compound_statementContext* CSubsetParser::FuncDefParamContext::compound_statement() {
  return getRuleContext<CSubsetParser::Compound_statementContext>(0);
}

CSubsetParser::FuncDefParamContext::FuncDefParamContext(Func_definitionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FuncDefParamContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFuncDefParam(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Func_definitionContext* CSubsetParser::func_definition() {
  Func_definitionContext *_localctx = _tracker.createInstance<Func_definitionContext>(_ctx, getState());
  enterRule(_localctx, 8, CSubsetParser::RuleFunc_definition);

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
      _localctx = _tracker.createInstance<CSubsetParser::FuncDefParamContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(78);
      type_specifier();
      setState(79);
      match(CSubsetParser::ID);
      setState(80);
      match(CSubsetParser::LPAREN);
      setState(81);
      parameter_list(0);
      setState(82);
      match(CSubsetParser::RPAREN);
      setState(83);
      compound_statement();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::FuncDefNoParamContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(85);
      type_specifier();
      setState(86);
      match(CSubsetParser::ID);
      setState(87);
      match(CSubsetParser::LPAREN);
      setState(88);
      match(CSubsetParser::RPAREN);
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

CSubsetParser::Parameter_listContext::Parameter_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Parameter_listContext::getRuleIndex() const {
  return CSubsetParser::RuleParameter_list;
}

void CSubsetParser::Parameter_listContext::copyFrom(Parameter_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UniParamDefContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::UniParamDefContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::UniParamDefContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::UniParamDefContext::UniParamDefContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UniParamDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUniParamDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiParamDecContext ------------------------------------------------------------------

CSubsetParser::Parameter_listContext* CSubsetParser::MultiParamDecContext::parameter_list() {
  return getRuleContext<CSubsetParser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubsetParser::MultiParamDecContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

CSubsetParser::Type_specifierContext* CSubsetParser::MultiParamDecContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

CSubsetParser::MultiParamDecContext::MultiParamDecContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::MultiParamDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitMultiParamDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- MultiParamDefContext ------------------------------------------------------------------

CSubsetParser::Parameter_listContext* CSubsetParser::MultiParamDefContext::parameter_list() {
  return getRuleContext<CSubsetParser::Parameter_listContext>(0);
}

tree::TerminalNode* CSubsetParser::MultiParamDefContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

CSubsetParser::Type_specifierContext* CSubsetParser::MultiParamDefContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::MultiParamDefContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::MultiParamDefContext::MultiParamDefContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::MultiParamDefContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitMultiParamDef(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UniParamDecContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::UniParamDecContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

CSubsetParser::UniParamDecContext::UniParamDecContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UniParamDecContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUniParamDec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UniParamAddOpContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext* CSubsetParser::UniParamAddOpContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

tree::TerminalNode* CSubsetParser::UniParamAddOpContext::ADDOP() {
  return getToken(CSubsetParser::ADDOP, 0);
}

CSubsetParser::UniParamAddOpContext::UniParamAddOpContext(Parameter_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UniParamAddOpContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUniParamAddOp(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::Parameter_listContext* CSubsetParser::parameter_list() {
   return parameter_list(0);
}

CSubsetParser::Parameter_listContext* CSubsetParser::parameter_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::Parameter_listContext *_localctx = _tracker.createInstance<Parameter_listContext>(_ctx, parentState);
  CSubsetParser::Parameter_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 10;
  enterRecursionRule(_localctx, 10, CSubsetParser::RuleParameter_list, precedence);

    

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
      match(CSubsetParser::ID);
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
      match(CSubsetParser::ADDOP);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(113);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(111);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiParamDefContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(103);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(104);
          match(CSubsetParser::COMMA);
          setState(105);
          type_specifier();
          setState(106);
          match(CSubsetParser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiParamDecContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(108);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(109);
          match(CSubsetParser::COMMA);
          setState(110);
          type_specifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(115);
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

CSubsetParser::Compound_statementContext::Compound_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Compound_statementContext::getRuleIndex() const {
  return CSubsetParser::RuleCompound_statement;
}

void CSubsetParser::Compound_statementContext::copyFrom(Compound_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Cmpd_stmtParenContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::Cmpd_stmtParenContext::LCURL() {
  return getToken(CSubsetParser::LCURL, 0);
}

tree::TerminalNode* CSubsetParser::Cmpd_stmtParenContext::RCURL() {
  return getToken(CSubsetParser::RCURL, 0);
}

CSubsetParser::Cmpd_stmtParenContext::Cmpd_stmtParenContext(Compound_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Cmpd_stmtParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitCmpd_stmtParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Cmpd_stmtStmtsContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::Cmpd_stmtStmtsContext::LCURL() {
  return getToken(CSubsetParser::LCURL, 0);
}

CSubsetParser::StatementsContext* CSubsetParser::Cmpd_stmtStmtsContext::statements() {
  return getRuleContext<CSubsetParser::StatementsContext>(0);
}

tree::TerminalNode* CSubsetParser::Cmpd_stmtStmtsContext::RCURL() {
  return getToken(CSubsetParser::RCURL, 0);
}

CSubsetParser::Cmpd_stmtStmtsContext::Cmpd_stmtStmtsContext(Compound_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Cmpd_stmtStmtsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitCmpd_stmtStmts(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Compound_statementContext* CSubsetParser::compound_statement() {
  Compound_statementContext *_localctx = _tracker.createInstance<Compound_statementContext>(_ctx, getState());
  enterRule(_localctx, 12, CSubsetParser::RuleCompound_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(122);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::Cmpd_stmtStmtsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(116);
      match(CSubsetParser::LCURL);
      setState(117);
      statements(0);
      setState(118);
      match(CSubsetParser::RCURL);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::Cmpd_stmtParenContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(120);
      match(CSubsetParser::LCURL);
      setState(121);
      match(CSubsetParser::RCURL);
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

CSubsetParser::Var_declarationContext::Var_declarationContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSubsetParser::Type_specifierContext* CSubsetParser::Var_declarationContext::type_specifier() {
  return getRuleContext<CSubsetParser::Type_specifierContext>(0);
}

CSubsetParser::Declaration_listContext* CSubsetParser::Var_declarationContext::declaration_list() {
  return getRuleContext<CSubsetParser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubsetParser::Var_declarationContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}


size_t CSubsetParser::Var_declarationContext::getRuleIndex() const {
  return CSubsetParser::RuleVar_declaration;
}


std::any CSubsetParser::Var_declarationContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitVar_declaration(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::Var_declarationContext* CSubsetParser::var_declaration() {
  Var_declarationContext *_localctx = _tracker.createInstance<Var_declarationContext>(_ctx, getState());
  enterRule(_localctx, 14, CSubsetParser::RuleVar_declaration);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(124);
    type_specifier();
    setState(125);
    declaration_list(0);
    setState(126);
    match(CSubsetParser::SEMICOLON);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- Type_specifierContext ------------------------------------------------------------------

CSubsetParser::Type_specifierContext::Type_specifierContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Type_specifierContext::getRuleIndex() const {
  return CSubsetParser::RuleType_specifier;
}

void CSubsetParser::Type_specifierContext::copyFrom(Type_specifierContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TypeFloatContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::TypeFloatContext::FLOAT() {
  return getToken(CSubsetParser::FLOAT, 0);
}

CSubsetParser::TypeFloatContext::TypeFloatContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TypeFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTypeFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeVoidContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::TypeVoidContext::VOID() {
  return getToken(CSubsetParser::VOID, 0);
}

CSubsetParser::TypeVoidContext::TypeVoidContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TypeVoidContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTypeVoid(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TypeIntContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::TypeIntContext::INT() {
  return getToken(CSubsetParser::INT, 0);
}

CSubsetParser::TypeIntContext::TypeIntContext(Type_specifierContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TypeIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTypeInt(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Type_specifierContext* CSubsetParser::type_specifier() {
  Type_specifierContext *_localctx = _tracker.createInstance<Type_specifierContext>(_ctx, getState());
  enterRule(_localctx, 16, CSubsetParser::RuleType_specifier);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(131);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::INT: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeIntContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(128);
        match(CSubsetParser::INT);
        break;
      }

      case CSubsetParser::FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeFloatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(129);
        match(CSubsetParser::FLOAT);
        break;
      }

      case CSubsetParser::VOID: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeVoidContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(130);
        match(CSubsetParser::VOID);
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

CSubsetParser::Declaration_listContext::Declaration_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Declaration_listContext::getRuleIndex() const {
  return CSubsetParser::RuleDeclaration_list;
}

void CSubsetParser::Declaration_listContext::copyFrom(Declaration_listContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Dec_lstThirdContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::Dec_lstThirdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::Dec_lstThirdContext::LTHIRD() {
  return getToken(CSubsetParser::LTHIRD, 0);
}

tree::TerminalNode* CSubsetParser::Dec_lstThirdContext::CONST_INT() {
  return getToken(CSubsetParser::CONST_INT, 0);
}

tree::TerminalNode* CSubsetParser::Dec_lstThirdContext::RTHIRD() {
  return getToken(CSubsetParser::RTHIRD, 0);
}

CSubsetParser::Dec_lstThirdContext::Dec_lstThirdContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Dec_lstThirdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDec_lstThird(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstCommaThirdContext ------------------------------------------------------------------

CSubsetParser::Declaration_listContext* CSubsetParser::Dec_lstCommaThirdContext::declaration_list() {
  return getRuleContext<CSubsetParser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubsetParser::Dec_lstCommaThirdContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

tree::TerminalNode* CSubsetParser::Dec_lstCommaThirdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::Dec_lstCommaThirdContext::LTHIRD() {
  return getToken(CSubsetParser::LTHIRD, 0);
}

tree::TerminalNode* CSubsetParser::Dec_lstCommaThirdContext::CONST_INT() {
  return getToken(CSubsetParser::CONST_INT, 0);
}

tree::TerminalNode* CSubsetParser::Dec_lstCommaThirdContext::RTHIRD() {
  return getToken(CSubsetParser::RTHIRD, 0);
}

CSubsetParser::Dec_lstCommaThirdContext::Dec_lstCommaThirdContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Dec_lstCommaThirdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDec_lstCommaThird(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstIDContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::Dec_lstIDContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::Dec_lstIDContext::Dec_lstIDContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Dec_lstIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDec_lstID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstCommaIDContext ------------------------------------------------------------------

CSubsetParser::Declaration_listContext* CSubsetParser::Dec_lstCommaIDContext::declaration_list() {
  return getRuleContext<CSubsetParser::Declaration_listContext>(0);
}

tree::TerminalNode* CSubsetParser::Dec_lstCommaIDContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

tree::TerminalNode* CSubsetParser::Dec_lstCommaIDContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::Dec_lstCommaIDContext::Dec_lstCommaIDContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Dec_lstCommaIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDec_lstCommaID(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Dec_lstIDAddOpIDContext ------------------------------------------------------------------

std::vector<tree::TerminalNode *> CSubsetParser::Dec_lstIDAddOpIDContext::ID() {
  return getTokens(CSubsetParser::ID);
}

tree::TerminalNode* CSubsetParser::Dec_lstIDAddOpIDContext::ID(size_t i) {
  return getToken(CSubsetParser::ID, i);
}

tree::TerminalNode* CSubsetParser::Dec_lstIDAddOpIDContext::ADDOP() {
  return getToken(CSubsetParser::ADDOP, 0);
}

CSubsetParser::Dec_lstIDAddOpIDContext::Dec_lstIDAddOpIDContext(Declaration_listContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Dec_lstIDAddOpIDContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitDec_lstIDAddOpID(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::Declaration_listContext* CSubsetParser::declaration_list() {
   return declaration_list(0);
}

CSubsetParser::Declaration_listContext* CSubsetParser::declaration_list(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::Declaration_listContext *_localctx = _tracker.createInstance<Declaration_listContext>(_ctx, parentState);
  CSubsetParser::Declaration_listContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 18;
  enterRecursionRule(_localctx, 18, CSubsetParser::RuleDeclaration_list, precedence);

    

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
    setState(142);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Dec_lstIDContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(134);
      match(CSubsetParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Dec_lstThirdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(135);
      match(CSubsetParser::ID);
      setState(136);
      match(CSubsetParser::LTHIRD);
      setState(137);
      match(CSubsetParser::CONST_INT);
      setState(138);
      match(CSubsetParser::RTHIRD);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<Dec_lstIDAddOpIDContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(139);
      match(CSubsetParser::ID);
      setState(140);
      match(CSubsetParser::ADDOP);
      setState(141);
      match(CSubsetParser::ID);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(155);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(153);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Dec_lstCommaIDContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(144);

          if (!(precpred(_ctx, 5))) throw FailedPredicateException(this, "precpred(_ctx, 5)");
          setState(145);
          match(CSubsetParser::COMMA);
          setState(146);
          match(CSubsetParser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Dec_lstCommaThirdContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(147);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(148);
          match(CSubsetParser::COMMA);
          setState(149);
          match(CSubsetParser::ID);
          setState(150);
          match(CSubsetParser::LTHIRD);
          setState(151);
          match(CSubsetParser::CONST_INT);
          setState(152);
          match(CSubsetParser::RTHIRD);
          break;
        }

        default:
          break;
        } 
      }
      setState(157);
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

CSubsetParser::StatementsContext::StatementsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::StatementsContext::getRuleIndex() const {
  return CSubsetParser::RuleStatements;
}

void CSubsetParser::StatementsContext::copyFrom(StatementsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StmtsStmtContext ------------------------------------------------------------------

CSubsetParser::StatementContext* CSubsetParser::StmtsStmtContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::StmtsStmtContext::StmtsStmtContext(StatementsContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtsStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtsStmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtsStmtsStmtContext ------------------------------------------------------------------

CSubsetParser::StatementsContext* CSubsetParser::StmtsStmtsStmtContext::statements() {
  return getRuleContext<CSubsetParser::StatementsContext>(0);
}

CSubsetParser::StatementContext* CSubsetParser::StmtsStmtsStmtContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::StmtsStmtsStmtContext::StmtsStmtsStmtContext(StatementsContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtsStmtsStmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtsStmtsStmt(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::StatementsContext* CSubsetParser::statements() {
   return statements(0);
}

CSubsetParser::StatementsContext* CSubsetParser::statements(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::StatementsContext *_localctx = _tracker.createInstance<StatementsContext>(_ctx, parentState);
  CSubsetParser::StatementsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 20;
  enterRecursionRule(_localctx, 20, CSubsetParser::RuleStatements, precedence);

    

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

    setState(159);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(165);
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
        setState(161);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(162);
        statement(); 
      }
      setState(167);
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

CSubsetParser::StatementContext::StatementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::StatementContext::getRuleIndex() const {
  return CSubsetParser::RuleStatement;
}

void CSubsetParser::StatementContext::copyFrom(StatementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- StmtReturnContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StmtReturnContext::RETURN() {
  return getToken(CSubsetParser::RETURN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StmtReturnContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StmtReturnContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::StmtReturnContext::StmtReturnContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtReturnContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtReturn(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtWhileContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StmtWhileContext::WHILE() {
  return getToken(CSubsetParser::WHILE, 0);
}

tree::TerminalNode* CSubsetParser::StmtWhileContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StmtWhileContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StmtWhileContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::StatementContext* CSubsetParser::StmtWhileContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::StmtWhileContext::StmtWhileContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtWhileContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtWhile(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtCmpd_stmtContext ------------------------------------------------------------------

CSubsetParser::Compound_statementContext* CSubsetParser::StmtCmpd_stmtContext::compound_statement() {
  return getRuleContext<CSubsetParser::Compound_statementContext>(0);
}

CSubsetParser::StmtCmpd_stmtContext::StmtCmpd_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtCmpd_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtCmpd_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtExpr_stmtContext ------------------------------------------------------------------

CSubsetParser::Expression_statementContext* CSubsetParser::StmtExpr_stmtContext::expression_statement() {
  return getRuleContext<CSubsetParser::Expression_statementContext>(0);
}

CSubsetParser::StmtExpr_stmtContext::StmtExpr_stmtContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtExpr_stmtContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtExpr_stmt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtVar_decContext ------------------------------------------------------------------

CSubsetParser::Var_declarationContext* CSubsetParser::StmtVar_decContext::var_declaration() {
  return getRuleContext<CSubsetParser::Var_declarationContext>(0);
}

CSubsetParser::StmtVar_decContext::StmtVar_decContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtVar_decContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtVar_dec(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtIfElseContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StmtIfElseContext::IF() {
  return getToken(CSubsetParser::IF, 0);
}

tree::TerminalNode* CSubsetParser::StmtIfElseContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StmtIfElseContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StmtIfElseContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

std::vector<CSubsetParser::StatementContext *> CSubsetParser::StmtIfElseContext::statement() {
  return getRuleContexts<CSubsetParser::StatementContext>();
}

CSubsetParser::StatementContext* CSubsetParser::StmtIfElseContext::statement(size_t i) {
  return getRuleContext<CSubsetParser::StatementContext>(i);
}

tree::TerminalNode* CSubsetParser::StmtIfElseContext::ELSE() {
  return getToken(CSubsetParser::ELSE, 0);
}

CSubsetParser::StmtIfElseContext::StmtIfElseContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtIfElseContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtIfElse(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtPrintContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StmtPrintContext::PRINTLN() {
  return getToken(CSubsetParser::PRINTLN, 0);
}

tree::TerminalNode* CSubsetParser::StmtPrintContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

tree::TerminalNode* CSubsetParser::StmtPrintContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::StmtPrintContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

tree::TerminalNode* CSubsetParser::StmtPrintContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::StmtPrintContext::StmtPrintContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtPrintContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtPrint(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtForContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StmtForContext::FOR() {
  return getToken(CSubsetParser::FOR, 0);
}

tree::TerminalNode* CSubsetParser::StmtForContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

std::vector<CSubsetParser::Expression_statementContext *> CSubsetParser::StmtForContext::expression_statement() {
  return getRuleContexts<CSubsetParser::Expression_statementContext>();
}

CSubsetParser::Expression_statementContext* CSubsetParser::StmtForContext::expression_statement(size_t i) {
  return getRuleContext<CSubsetParser::Expression_statementContext>(i);
}

CSubsetParser::ExpressionContext* CSubsetParser::StmtForContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StmtForContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::StatementContext* CSubsetParser::StmtForContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::StmtForContext::StmtForContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtForContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtFor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- StmtIfContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::StmtIfContext::IF() {
  return getToken(CSubsetParser::IF, 0);
}

tree::TerminalNode* CSubsetParser::StmtIfContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::StmtIfContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::StmtIfContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::StatementContext* CSubsetParser::StmtIfContext::statement() {
  return getRuleContext<CSubsetParser::StatementContext>(0);
}

CSubsetParser::StmtIfContext::StmtIfContext(StatementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::StmtIfContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitStmtIf(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::StatementContext* CSubsetParser::statement() {
  StatementContext *_localctx = _tracker.createInstance<StatementContext>(_ctx, getState());
  enterRule(_localctx, 22, CSubsetParser::RuleStatement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 13, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtVar_decContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(168);
      var_declaration();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtExpr_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(169);
      expression_statement();
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtIfElseContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(170);
      match(CSubsetParser::IF);
      setState(171);
      match(CSubsetParser::LPAREN);
      setState(172);
      expression();
      setState(173);
      match(CSubsetParser::RPAREN);
      setState(174);
      statement();
      setState(175);
      match(CSubsetParser::ELSE);
      setState(176);
      statement();
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtWhileContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(178);
      match(CSubsetParser::WHILE);
      setState(179);
      match(CSubsetParser::LPAREN);
      setState(180);
      expression();
      setState(181);
      match(CSubsetParser::RPAREN);
      setState(182);
      statement();
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtPrintContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(184);
      match(CSubsetParser::PRINTLN);
      setState(185);
      match(CSubsetParser::LPAREN);
      setState(186);
      match(CSubsetParser::ID);
      setState(187);
      match(CSubsetParser::RPAREN);
      setState(188);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtReturnContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(189);
      match(CSubsetParser::RETURN);
      setState(190);
      expression();
      setState(191);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtCmpd_stmtContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(193);
      compound_statement();
      break;
    }

    case 8: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtForContext>(_localctx);
      enterOuterAlt(_localctx, 8);
      setState(194);
      match(CSubsetParser::FOR);
      setState(195);
      match(CSubsetParser::LPAREN);
      setState(196);
      expression_statement();
      setState(197);
      expression_statement();
      setState(198);
      expression();
      setState(199);
      match(CSubsetParser::RPAREN);
      setState(200);
      statement();
      break;
    }

    case 9: {
      _localctx = _tracker.createInstance<CSubsetParser::StmtIfContext>(_localctx);
      enterOuterAlt(_localctx, 9);
      setState(202);
      match(CSubsetParser::IF);
      setState(203);
      match(CSubsetParser::LPAREN);
      setState(204);
      expression();
      setState(205);
      match(CSubsetParser::RPAREN);
      setState(206);
      statement();
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

CSubsetParser::Expression_statementContext::Expression_statementContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Expression_statementContext::getRuleIndex() const {
  return CSubsetParser::RuleExpression_statement;
}

void CSubsetParser::Expression_statementContext::copyFrom(Expression_statementContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- Expr_stmtSemicolonContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::Expr_stmtSemicolonContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::Expr_stmtSemicolonContext::Expr_stmtSemicolonContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Expr_stmtSemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExpr_stmtSemicolon(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_stmtExprSemicolonContext ------------------------------------------------------------------

CSubsetParser::ExpressionContext* CSubsetParser::Expr_stmtExprSemicolonContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::Expr_stmtExprSemicolonContext::SEMICOLON() {
  return getToken(CSubsetParser::SEMICOLON, 0);
}

CSubsetParser::Expr_stmtExprSemicolonContext::Expr_stmtExprSemicolonContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Expr_stmtExprSemicolonContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExpr_stmtExprSemicolon(this);
  else
    return visitor->visitChildren(this);
}
//----------------- Expr_stmtExprContext ------------------------------------------------------------------

CSubsetParser::ExpressionContext* CSubsetParser::Expr_stmtExprContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

CSubsetParser::Expr_stmtExprContext::Expr_stmtExprContext(Expression_statementContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::Expr_stmtExprContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExpr_stmtExpr(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Expression_statementContext* CSubsetParser::expression_statement() {
  Expression_statementContext *_localctx = _tracker.createInstance<Expression_statementContext>(_ctx, getState());
  enterRule(_localctx, 24, CSubsetParser::RuleExpression_statement);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 14, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::Expr_stmtSemicolonContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(210);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::Expr_stmtExprSemicolonContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(211);
      expression();
      setState(212);
      match(CSubsetParser::SEMICOLON);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::Expr_stmtExprContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(214);
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

CSubsetParser::VariableContext::VariableContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::VariableContext::getRuleIndex() const {
  return CSubsetParser::RuleVariable;
}

void CSubsetParser::VariableContext::copyFrom(VariableContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- VarThirdContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::VarThirdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::VarThirdContext::LTHIRD() {
  return getToken(CSubsetParser::LTHIRD, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::VarThirdContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::VarThirdContext::RTHIRD() {
  return getToken(CSubsetParser::RTHIRD, 0);
}

CSubsetParser::VarThirdContext::VarThirdContext(VariableContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::VarThirdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitVarThird(this);
  else
    return visitor->visitChildren(this);
}
//----------------- VarIdContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::VarIdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

CSubsetParser::VarIdContext::VarIdContext(VariableContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::VarIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitVarId(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::VariableContext* CSubsetParser::variable() {
  VariableContext *_localctx = _tracker.createInstance<VariableContext>(_ctx, getState());
  enterRule(_localctx, 26, CSubsetParser::RuleVariable);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(223);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::VarIdContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(217);
      match(CSubsetParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::VarThirdContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(218);
      match(CSubsetParser::ID);
      setState(219);
      match(CSubsetParser::LTHIRD);
      setState(220);
      expression();
      setState(221);
      match(CSubsetParser::RTHIRD);
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

CSubsetParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::ExpressionContext::getRuleIndex() const {
  return CSubsetParser::RuleExpression;
}

void CSubsetParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprVarContext ------------------------------------------------------------------

CSubsetParser::VariableContext* CSubsetParser::ExprVarContext::variable() {
  return getRuleContext<CSubsetParser::VariableContext>(0);
}

tree::TerminalNode* CSubsetParser::ExprVarContext::ASSIGNOP() {
  return getToken(CSubsetParser::ASSIGNOP, 0);
}

CSubsetParser::Logic_expressionContext* CSubsetParser::ExprVarContext::logic_expression() {
  return getRuleContext<CSubsetParser::Logic_expressionContext>(0);
}

CSubsetParser::ExprVarContext::ExprVarContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ExprVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExprVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ExprLogicContext ------------------------------------------------------------------

CSubsetParser::Logic_expressionContext* CSubsetParser::ExprLogicContext::logic_expression() {
  return getRuleContext<CSubsetParser::Logic_expressionContext>(0);
}

CSubsetParser::ExprLogicContext::ExprLogicContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ExprLogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitExprLogic(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::ExpressionContext* CSubsetParser::expression() {
  ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, getState());
  enterRule(_localctx, 28, CSubsetParser::RuleExpression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(230);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::ExprLogicContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(225);
      logic_expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::ExprVarContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(226);
      variable();
      setState(227);
      match(CSubsetParser::ASSIGNOP);
      setState(228);
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

CSubsetParser::Logic_expressionContext::Logic_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Logic_expressionContext::getRuleIndex() const {
  return CSubsetParser::RuleLogic_expression;
}

void CSubsetParser::Logic_expressionContext::copyFrom(Logic_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- LogicRelRelContext ------------------------------------------------------------------

std::vector<CSubsetParser::Rel_expressionContext *> CSubsetParser::LogicRelRelContext::rel_expression() {
  return getRuleContexts<CSubsetParser::Rel_expressionContext>();
}

CSubsetParser::Rel_expressionContext* CSubsetParser::LogicRelRelContext::rel_expression(size_t i) {
  return getRuleContext<CSubsetParser::Rel_expressionContext>(i);
}

tree::TerminalNode* CSubsetParser::LogicRelRelContext::LOGICOP() {
  return getToken(CSubsetParser::LOGICOP, 0);
}

CSubsetParser::LogicRelRelContext::LogicRelRelContext(Logic_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::LogicRelRelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitLogicRelRel(this);
  else
    return visitor->visitChildren(this);
}
//----------------- LogciRelContext ------------------------------------------------------------------

CSubsetParser::Rel_expressionContext* CSubsetParser::LogciRelContext::rel_expression() {
  return getRuleContext<CSubsetParser::Rel_expressionContext>(0);
}

CSubsetParser::LogciRelContext::LogciRelContext(Logic_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::LogciRelContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitLogciRel(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Logic_expressionContext* CSubsetParser::logic_expression() {
  Logic_expressionContext *_localctx = _tracker.createInstance<Logic_expressionContext>(_ctx, getState());
  enterRule(_localctx, 30, CSubsetParser::RuleLogic_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(237);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::LogciRelContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(232);
      rel_expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::LogicRelRelContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(233);
      rel_expression();
      setState(234);
      match(CSubsetParser::LOGICOP);
      setState(235);
      rel_expression();
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

CSubsetParser::Rel_expressionContext::Rel_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Rel_expressionContext::getRuleIndex() const {
  return CSubsetParser::RuleRel_expression;
}

void CSubsetParser::Rel_expressionContext::copyFrom(Rel_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- RelSimpleSimpleContext ------------------------------------------------------------------

std::vector<CSubsetParser::Simple_expressionContext *> CSubsetParser::RelSimpleSimpleContext::simple_expression() {
  return getRuleContexts<CSubsetParser::Simple_expressionContext>();
}

CSubsetParser::Simple_expressionContext* CSubsetParser::RelSimpleSimpleContext::simple_expression(size_t i) {
  return getRuleContext<CSubsetParser::Simple_expressionContext>(i);
}

tree::TerminalNode* CSubsetParser::RelSimpleSimpleContext::RELOP() {
  return getToken(CSubsetParser::RELOP, 0);
}

CSubsetParser::RelSimpleSimpleContext::RelSimpleSimpleContext(Rel_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::RelSimpleSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitRelSimpleSimple(this);
  else
    return visitor->visitChildren(this);
}
//----------------- RelSimpleContext ------------------------------------------------------------------

CSubsetParser::Simple_expressionContext* CSubsetParser::RelSimpleContext::simple_expression() {
  return getRuleContext<CSubsetParser::Simple_expressionContext>(0);
}

CSubsetParser::RelSimpleContext::RelSimpleContext(Rel_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::RelSimpleContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitRelSimple(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Rel_expressionContext* CSubsetParser::rel_expression() {
  Rel_expressionContext *_localctx = _tracker.createInstance<Rel_expressionContext>(_ctx, getState());
  enterRule(_localctx, 32, CSubsetParser::RuleRel_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(244);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::RelSimpleContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(239);
      simple_expression(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::RelSimpleSimpleContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(240);
      simple_expression(0);
      setState(241);
      match(CSubsetParser::RELOP);
      setState(242);
      simple_expression(0);
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

CSubsetParser::Simple_expressionContext::Simple_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Simple_expressionContext::getRuleIndex() const {
  return CSubsetParser::RuleSimple_expression;
}

void CSubsetParser::Simple_expressionContext::copyFrom(Simple_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- SimpleTermContext ------------------------------------------------------------------

CSubsetParser::TermContext* CSubsetParser::SimpleTermContext::term() {
  return getRuleContext<CSubsetParser::TermContext>(0);
}

CSubsetParser::SimpleTermContext::SimpleTermContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::SimpleTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitSimpleTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleSimpleTermContext ------------------------------------------------------------------

CSubsetParser::Simple_expressionContext* CSubsetParser::SimpleSimpleTermContext::simple_expression() {
  return getRuleContext<CSubsetParser::Simple_expressionContext>(0);
}

tree::TerminalNode* CSubsetParser::SimpleSimpleTermContext::ADDOP() {
  return getToken(CSubsetParser::ADDOP, 0);
}

CSubsetParser::TermContext* CSubsetParser::SimpleSimpleTermContext::term() {
  return getRuleContext<CSubsetParser::TermContext>(0);
}

CSubsetParser::SimpleSimpleTermContext::SimpleSimpleTermContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::SimpleSimpleTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitSimpleSimpleTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- SimpleSimpleAddContext ------------------------------------------------------------------

CSubsetParser::Simple_expressionContext* CSubsetParser::SimpleSimpleAddContext::simple_expression() {
  return getRuleContext<CSubsetParser::Simple_expressionContext>(0);
}

tree::TerminalNode* CSubsetParser::SimpleSimpleAddContext::ADDOP() {
  return getToken(CSubsetParser::ADDOP, 0);
}

tree::TerminalNode* CSubsetParser::SimpleSimpleAddContext::ASSIGNOP() {
  return getToken(CSubsetParser::ASSIGNOP, 0);
}

CSubsetParser::SimpleSimpleAddContext::SimpleSimpleAddContext(Simple_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::SimpleSimpleAddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitSimpleSimpleAdd(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::Simple_expressionContext* CSubsetParser::simple_expression() {
   return simple_expression(0);
}

CSubsetParser::Simple_expressionContext* CSubsetParser::simple_expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::Simple_expressionContext *_localctx = _tracker.createInstance<Simple_expressionContext>(_ctx, parentState);
  CSubsetParser::Simple_expressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 34;
  enterRecursionRule(_localctx, 34, CSubsetParser::RuleSimple_expression, precedence);

    

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

    setState(247);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(257);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(255);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<SimpleSimpleTermContext>(_tracker.createInstance<Simple_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSimple_expression);
          setState(249);

          if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
          setState(250);
          match(CSubsetParser::ADDOP);
          setState(251);
          term(0);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<SimpleSimpleAddContext>(_tracker.createInstance<Simple_expressionContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleSimple_expression);
          setState(252);

          if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
          setState(253);
          match(CSubsetParser::ADDOP);
          setState(254);
          match(CSubsetParser::ASSIGNOP);
          break;
        }

        default:
          break;
        } 
      }
      setState(259);
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

CSubsetParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::TermContext::getRuleIndex() const {
  return CSubsetParser::RuleTerm;
}

void CSubsetParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TermUnaryContext ------------------------------------------------------------------

CSubsetParser::Unary_expressionContext* CSubsetParser::TermUnaryContext::unary_expression() {
  return getRuleContext<CSubsetParser::Unary_expressionContext>(0);
}

CSubsetParser::TermUnaryContext::TermUnaryContext(TermContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TermUnaryContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTermUnary(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TermTermContext ------------------------------------------------------------------

CSubsetParser::TermContext* CSubsetParser::TermTermContext::term() {
  return getRuleContext<CSubsetParser::TermContext>(0);
}

tree::TerminalNode* CSubsetParser::TermTermContext::MULOP() {
  return getToken(CSubsetParser::MULOP, 0);
}

CSubsetParser::Unary_expressionContext* CSubsetParser::TermTermContext::unary_expression() {
  return getRuleContext<CSubsetParser::Unary_expressionContext>(0);
}

CSubsetParser::TermTermContext::TermTermContext(TermContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::TermTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitTermTerm(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::TermContext* CSubsetParser::term() {
   return term(0);
}

CSubsetParser::TermContext* CSubsetParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  CSubsetParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 36;
  enterRecursionRule(_localctx, 36, CSubsetParser::RuleTerm, precedence);

    

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

    setState(261);
    unary_expression();
    _ctx->stop = _input->LT(-1);
    setState(268);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<TermTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleTerm);
        setState(263);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(264);
        match(CSubsetParser::MULOP);
        setState(265);
        unary_expression(); 
      }
      setState(270);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 21, _ctx);
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

CSubsetParser::Unary_expressionContext::Unary_expressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::Unary_expressionContext::getRuleIndex() const {
  return CSubsetParser::RuleUnary_expression;
}

void CSubsetParser::Unary_expressionContext::copyFrom(Unary_expressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- UnaryNotContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::UnaryNotContext::NOT() {
  return getToken(CSubsetParser::NOT, 0);
}

CSubsetParser::Unary_expressionContext* CSubsetParser::UnaryNotContext::unary_expression() {
  return getRuleContext<CSubsetParser::Unary_expressionContext>(0);
}

CSubsetParser::UnaryNotContext::UnaryNotContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnaryNotContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnaryNot(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryFactorContext ------------------------------------------------------------------

CSubsetParser::FactorContext* CSubsetParser::UnaryFactorContext::factor() {
  return getRuleContext<CSubsetParser::FactorContext>(0);
}

CSubsetParser::UnaryFactorContext::UnaryFactorContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnaryFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnaryFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- UnaryAddContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::UnaryAddContext::ADDOP() {
  return getToken(CSubsetParser::ADDOP, 0);
}

CSubsetParser::Unary_expressionContext* CSubsetParser::UnaryAddContext::unary_expression() {
  return getRuleContext<CSubsetParser::Unary_expressionContext>(0);
}

CSubsetParser::UnaryAddContext::UnaryAddContext(Unary_expressionContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::UnaryAddContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitUnaryAdd(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::Unary_expressionContext* CSubsetParser::unary_expression() {
  Unary_expressionContext *_localctx = _tracker.createInstance<Unary_expressionContext>(_ctx, getState());
  enterRule(_localctx, 38, CSubsetParser::RuleUnary_expression);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(276);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::ADDOP: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryAddContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(271);
        match(CSubsetParser::ADDOP);
        setState(272);
        unary_expression();
        break;
      }

      case CSubsetParser::NOT: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryNotContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(273);
        match(CSubsetParser::NOT);
        setState(274);
        unary_expression();
        break;
      }

      case CSubsetParser::LPAREN:
      case CSubsetParser::ID:
      case CSubsetParser::CONST_INT:
      case CSubsetParser::CONST_FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryFactorContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(275);
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

CSubsetParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::FactorContext::getRuleIndex() const {
  return CSubsetParser::RuleFactor;
}

void CSubsetParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FactorIncopContext ------------------------------------------------------------------

CSubsetParser::VariableContext* CSubsetParser::FactorIncopContext::variable() {
  return getRuleContext<CSubsetParser::VariableContext>(0);
}

tree::TerminalNode* CSubsetParser::FactorIncopContext::INCOP() {
  return getToken(CSubsetParser::INCOP, 0);
}

CSubsetParser::FactorIncopContext::FactorIncopContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorIncopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorIncop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorDecopContext ------------------------------------------------------------------

CSubsetParser::VariableContext* CSubsetParser::FactorDecopContext::variable() {
  return getRuleContext<CSubsetParser::VariableContext>(0);
}

tree::TerminalNode* CSubsetParser::FactorDecopContext::DECOP() {
  return getToken(CSubsetParser::DECOP, 0);
}

CSubsetParser::FactorDecopContext::FactorDecopContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorDecopContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorDecop(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorIntContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::FactorIntContext::CONST_INT() {
  return getToken(CSubsetParser::CONST_INT, 0);
}

CSubsetParser::FactorIntContext::FactorIntContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorParenContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::FactorParenContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::ExpressionContext* CSubsetParser::FactorParenContext::expression() {
  return getRuleContext<CSubsetParser::ExpressionContext>(0);
}

tree::TerminalNode* CSubsetParser::FactorParenContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::FactorParenContext::FactorParenContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorParen(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorFloatContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::FactorFloatContext::CONST_FLOAT() {
  return getToken(CSubsetParser::CONST_FLOAT, 0);
}

CSubsetParser::FactorFloatContext::FactorFloatContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorFloatContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorFloat(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorVarContext ------------------------------------------------------------------

CSubsetParser::VariableContext* CSubsetParser::FactorVarContext::variable() {
  return getRuleContext<CSubsetParser::VariableContext>(0);
}

CSubsetParser::FactorVarContext::FactorVarContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorVarContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorVar(this);
  else
    return visitor->visitChildren(this);
}
//----------------- FactorIdContext ------------------------------------------------------------------

tree::TerminalNode* CSubsetParser::FactorIdContext::ID() {
  return getToken(CSubsetParser::ID, 0);
}

tree::TerminalNode* CSubsetParser::FactorIdContext::LPAREN() {
  return getToken(CSubsetParser::LPAREN, 0);
}

CSubsetParser::Argument_listContext* CSubsetParser::FactorIdContext::argument_list() {
  return getRuleContext<CSubsetParser::Argument_listContext>(0);
}

tree::TerminalNode* CSubsetParser::FactorIdContext::RPAREN() {
  return getToken(CSubsetParser::RPAREN, 0);
}

CSubsetParser::FactorIdContext::FactorIdContext(FactorContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::FactorIdContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitFactorId(this);
  else
    return visitor->visitChildren(this);
}
CSubsetParser::FactorContext* CSubsetParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 40, CSubsetParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(296);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 23, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorVarContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(278);
      variable();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorIdContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(279);
      match(CSubsetParser::ID);
      setState(280);
      match(CSubsetParser::LPAREN);
      setState(281);
      argument_list();
      setState(282);
      match(CSubsetParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorParenContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(284);
      match(CSubsetParser::LPAREN);
      setState(285);
      expression();
      setState(286);
      match(CSubsetParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorIntContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(288);
      match(CSubsetParser::CONST_INT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorFloatContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(289);
      match(CSubsetParser::CONST_FLOAT);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorIncopContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(290);
      variable();
      setState(291);
      match(CSubsetParser::INCOP);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorDecopContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(293);
      variable();
      setState(294);
      match(CSubsetParser::DECOP);
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

CSubsetParser::Argument_listContext::Argument_listContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

CSubsetParser::ArgumentsContext* CSubsetParser::Argument_listContext::arguments() {
  return getRuleContext<CSubsetParser::ArgumentsContext>(0);
}


size_t CSubsetParser::Argument_listContext::getRuleIndex() const {
  return CSubsetParser::RuleArgument_list;
}


std::any CSubsetParser::Argument_listContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitArgument_list(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::Argument_listContext* CSubsetParser::argument_list() {
  Argument_listContext *_localctx = _tracker.createInstance<Argument_listContext>(_ctx, getState());
  enterRule(_localctx, 42, CSubsetParser::RuleArgument_list);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(300);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::LPAREN:
      case CSubsetParser::ADDOP:
      case CSubsetParser::NOT:
      case CSubsetParser::ID:
      case CSubsetParser::CONST_INT:
      case CSubsetParser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(298);
        arguments(0);
        break;
      }

      case CSubsetParser::RPAREN: {
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

CSubsetParser::ArgumentsContext::ArgumentsContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t CSubsetParser::ArgumentsContext::getRuleIndex() const {
  return CSubsetParser::RuleArguments;
}

void CSubsetParser::ArgumentsContext::copyFrom(ArgumentsContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ArgsArgsContext ------------------------------------------------------------------

CSubsetParser::ArgumentsContext* CSubsetParser::ArgsArgsContext::arguments() {
  return getRuleContext<CSubsetParser::ArgumentsContext>(0);
}

tree::TerminalNode* CSubsetParser::ArgsArgsContext::COMMA() {
  return getToken(CSubsetParser::COMMA, 0);
}

CSubsetParser::Logic_expressionContext* CSubsetParser::ArgsArgsContext::logic_expression() {
  return getRuleContext<CSubsetParser::Logic_expressionContext>(0);
}

CSubsetParser::ArgsArgsContext::ArgsArgsContext(ArgumentsContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ArgsArgsContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitArgsArgs(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ArgsLogicContext ------------------------------------------------------------------

CSubsetParser::Logic_expressionContext* CSubsetParser::ArgsLogicContext::logic_expression() {
  return getRuleContext<CSubsetParser::Logic_expressionContext>(0);
}

CSubsetParser::ArgsLogicContext::ArgsLogicContext(ArgumentsContext *ctx) { copyFrom(ctx); }


std::any CSubsetParser::ArgsLogicContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<CSubsetVisitor*>(visitor))
    return parserVisitor->visitArgsLogic(this);
  else
    return visitor->visitChildren(this);
}

CSubsetParser::ArgumentsContext* CSubsetParser::arguments() {
   return arguments(0);
}

CSubsetParser::ArgumentsContext* CSubsetParser::arguments(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  CSubsetParser::ArgumentsContext *_localctx = _tracker.createInstance<ArgumentsContext>(_ctx, parentState);
  CSubsetParser::ArgumentsContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 44;
  enterRecursionRule(_localctx, 44, CSubsetParser::RuleArguments, precedence);

    

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

    setState(303);
    logic_expression();
    _ctx->stop = _input->LT(-1);
    setState(310);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArgsArgsContext>(_tracker.createInstance<ArgumentsContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleArguments);
        setState(305);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(306);
        match(CSubsetParser::COMMA);
        setState(307);
        logic_expression(); 
      }
      setState(312);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 25, _ctx);
    }
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }
  return _localctx;
}

bool CSubsetParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
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

bool CSubsetParser::programSempred(ProgramContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::parameter_listSempred(Parameter_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 5);
    case 2: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::declaration_listSempred(Declaration_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 5);
    case 4: return precpred(_ctx, 4);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::statementsSempred(StatementsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 5: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::simple_expressionSempred(Simple_expressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 6: return precpred(_ctx, 2);
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::argumentsSempred(ArgumentsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 9: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void CSubsetParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  csubsetParserInitialize();
#else
  ::antlr4::internal::call_once(csubsetParserOnceFlag, csubsetParserInitialize);
#endif
}
