
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
  	4,1,32,289,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,6,2,
  	7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,7,
  	14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,7,
  	21,2,22,7,22,1,0,1,0,1,1,1,1,1,1,1,1,1,1,5,1,54,8,1,10,1,12,1,57,9,1,
  	1,2,1,2,1,2,3,2,62,8,2,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,3,1,
  	3,1,3,3,3,77,8,3,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,1,4,
  	3,4,92,8,4,1,5,1,5,1,5,1,5,1,5,3,5,99,8,5,1,5,1,5,1,5,1,5,1,5,1,5,1,5,
  	1,5,5,5,109,8,5,10,5,12,5,112,9,5,1,6,1,6,1,6,1,6,1,6,1,6,3,6,120,8,6,
  	1,7,1,7,1,7,1,7,1,8,1,8,1,8,3,8,129,8,8,1,9,1,9,1,9,1,9,1,9,1,9,3,9,137,
  	8,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,5,9,148,8,9,10,9,12,9,151,9,9,
  	1,10,1,10,1,10,1,10,1,10,5,10,158,8,10,10,10,12,10,161,9,10,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,
  	1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,3,11,188,8,11,1,12,1,12,
  	1,12,1,12,3,12,194,8,12,1,13,1,13,1,13,1,13,1,13,1,13,3,13,202,8,13,1,
  	14,1,14,1,14,1,14,1,14,3,14,209,8,14,1,15,1,15,1,15,1,15,1,15,3,15,216,
  	8,15,1,16,1,16,1,16,1,16,1,16,3,16,223,8,16,1,17,1,17,1,17,1,17,1,17,
  	1,17,5,17,231,8,17,10,17,12,17,234,9,17,1,18,1,18,1,18,1,18,1,18,1,18,
  	5,18,242,8,18,10,18,12,18,245,9,18,1,19,1,19,1,19,1,19,1,19,3,19,252,
  	8,19,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,1,20,
  	1,20,1,20,1,20,1,20,1,20,3,20,272,8,20,1,21,1,21,3,21,276,8,21,1,22,1,
  	22,1,22,1,22,1,22,1,22,5,22,284,8,22,10,22,12,22,287,9,22,1,22,0,7,2,
  	10,18,20,34,36,44,23,0,2,4,6,8,10,12,14,16,18,20,22,24,26,28,30,32,34,
  	36,38,40,42,44,0,0,302,0,46,1,0,0,0,2,48,1,0,0,0,4,61,1,0,0,0,6,76,1,
  	0,0,0,8,91,1,0,0,0,10,98,1,0,0,0,12,119,1,0,0,0,14,121,1,0,0,0,16,128,
  	1,0,0,0,18,136,1,0,0,0,20,152,1,0,0,0,22,187,1,0,0,0,24,193,1,0,0,0,26,
  	201,1,0,0,0,28,208,1,0,0,0,30,215,1,0,0,0,32,222,1,0,0,0,34,224,1,0,0,
  	0,36,235,1,0,0,0,38,251,1,0,0,0,40,271,1,0,0,0,42,275,1,0,0,0,44,277,
  	1,0,0,0,46,47,3,2,1,0,47,1,1,0,0,0,48,49,6,1,-1,0,49,50,3,4,2,0,50,55,
  	1,0,0,0,51,52,10,2,0,0,52,54,3,4,2,0,53,51,1,0,0,0,54,57,1,0,0,0,55,53,
  	1,0,0,0,55,56,1,0,0,0,56,3,1,0,0,0,57,55,1,0,0,0,58,62,3,14,7,0,59,62,
  	3,6,3,0,60,62,3,8,4,0,61,58,1,0,0,0,61,59,1,0,0,0,61,60,1,0,0,0,62,5,
  	1,0,0,0,63,64,3,16,8,0,64,65,5,30,0,0,65,66,5,14,0,0,66,67,3,10,5,0,67,
  	68,5,15,0,0,68,69,5,20,0,0,69,77,1,0,0,0,70,71,3,16,8,0,71,72,5,30,0,
  	0,72,73,5,14,0,0,73,74,5,15,0,0,74,75,5,20,0,0,75,77,1,0,0,0,76,63,1,
  	0,0,0,76,70,1,0,0,0,77,7,1,0,0,0,78,79,3,16,8,0,79,80,5,30,0,0,80,81,
  	5,14,0,0,81,82,3,10,5,0,82,83,5,15,0,0,83,84,3,12,6,0,84,92,1,0,0,0,85,
  	86,3,16,8,0,86,87,5,30,0,0,87,88,5,14,0,0,88,89,5,15,0,0,89,90,3,12,6,
  	0,90,92,1,0,0,0,91,78,1,0,0,0,91,85,1,0,0,0,92,9,1,0,0,0,93,94,6,5,-1,
  	0,94,95,3,16,8,0,95,96,5,30,0,0,96,99,1,0,0,0,97,99,3,16,8,0,98,93,1,
  	0,0,0,98,97,1,0,0,0,99,110,1,0,0,0,100,101,10,4,0,0,101,102,5,21,0,0,
  	102,103,3,16,8,0,103,104,5,30,0,0,104,109,1,0,0,0,105,106,10,3,0,0,106,
  	107,5,21,0,0,107,109,3,16,8,0,108,100,1,0,0,0,108,105,1,0,0,0,109,112,
  	1,0,0,0,110,108,1,0,0,0,110,111,1,0,0,0,111,11,1,0,0,0,112,110,1,0,0,
  	0,113,114,5,16,0,0,114,115,3,20,10,0,115,116,5,17,0,0,116,120,1,0,0,0,
  	117,118,5,16,0,0,118,120,5,17,0,0,119,113,1,0,0,0,119,117,1,0,0,0,120,
  	13,1,0,0,0,121,122,3,16,8,0,122,123,3,18,9,0,123,124,5,20,0,0,124,15,
  	1,0,0,0,125,129,5,11,0,0,126,129,5,12,0,0,127,129,5,13,0,0,128,125,1,
  	0,0,0,128,126,1,0,0,0,128,127,1,0,0,0,129,17,1,0,0,0,130,131,6,9,-1,0,
  	131,137,5,30,0,0,132,133,5,30,0,0,133,134,5,18,0,0,134,135,5,31,0,0,135,
  	137,5,19,0,0,136,130,1,0,0,0,136,132,1,0,0,0,137,149,1,0,0,0,138,139,
  	10,4,0,0,139,140,5,21,0,0,140,148,5,30,0,0,141,142,10,3,0,0,142,143,5,
  	21,0,0,143,144,5,30,0,0,144,145,5,18,0,0,145,146,5,31,0,0,146,148,5,19,
  	0,0,147,138,1,0,0,0,147,141,1,0,0,0,148,151,1,0,0,0,149,147,1,0,0,0,149,
  	150,1,0,0,0,150,19,1,0,0,0,151,149,1,0,0,0,152,153,6,10,-1,0,153,154,
  	3,22,11,0,154,159,1,0,0,0,155,156,10,1,0,0,156,158,3,22,11,0,157,155,
  	1,0,0,0,158,161,1,0,0,0,159,157,1,0,0,0,159,160,1,0,0,0,160,21,1,0,0,
  	0,161,159,1,0,0,0,162,188,3,14,7,0,163,188,3,24,12,0,164,165,5,5,0,0,
  	165,166,5,14,0,0,166,167,3,28,14,0,167,168,5,15,0,0,168,169,3,22,11,0,
  	169,170,5,6,0,0,170,171,3,22,11,0,171,188,1,0,0,0,172,173,5,8,0,0,173,
  	174,5,14,0,0,174,175,3,28,14,0,175,176,5,15,0,0,176,177,3,22,11,0,177,
  	188,1,0,0,0,178,179,5,9,0,0,179,180,5,14,0,0,180,181,5,30,0,0,181,182,
  	5,15,0,0,182,188,5,20,0,0,183,184,5,10,0,0,184,185,3,28,14,0,185,186,
  	5,20,0,0,186,188,1,0,0,0,187,162,1,0,0,0,187,163,1,0,0,0,187,164,1,0,
  	0,0,187,172,1,0,0,0,187,178,1,0,0,0,187,183,1,0,0,0,188,23,1,0,0,0,189,
  	194,5,20,0,0,190,191,3,28,14,0,191,192,5,20,0,0,192,194,1,0,0,0,193,189,
  	1,0,0,0,193,190,1,0,0,0,194,25,1,0,0,0,195,202,5,30,0,0,196,197,5,30,
  	0,0,197,198,5,18,0,0,198,199,3,28,14,0,199,200,5,19,0,0,200,202,1,0,0,
  	0,201,195,1,0,0,0,201,196,1,0,0,0,202,27,1,0,0,0,203,209,3,30,15,0,204,
  	205,3,26,13,0,205,206,5,29,0,0,206,207,3,30,15,0,207,209,1,0,0,0,208,
  	203,1,0,0,0,208,204,1,0,0,0,209,29,1,0,0,0,210,216,3,32,16,0,211,212,
  	3,32,16,0,212,213,5,28,0,0,213,214,3,32,16,0,214,216,1,0,0,0,215,210,
  	1,0,0,0,215,211,1,0,0,0,216,31,1,0,0,0,217,223,3,34,17,0,218,219,3,34,
  	17,0,219,220,5,27,0,0,220,221,3,34,17,0,221,223,1,0,0,0,222,217,1,0,0,
  	0,222,218,1,0,0,0,223,33,1,0,0,0,224,225,6,17,-1,0,225,226,3,36,18,0,
  	226,232,1,0,0,0,227,228,10,1,0,0,228,229,5,22,0,0,229,231,3,36,18,0,230,
  	227,1,0,0,0,231,234,1,0,0,0,232,230,1,0,0,0,232,233,1,0,0,0,233,35,1,
  	0,0,0,234,232,1,0,0,0,235,236,6,18,-1,0,236,237,3,38,19,0,237,243,1,0,
  	0,0,238,239,10,1,0,0,239,240,5,23,0,0,240,242,3,38,19,0,241,238,1,0,0,
  	0,242,245,1,0,0,0,243,241,1,0,0,0,243,244,1,0,0,0,244,37,1,0,0,0,245,
  	243,1,0,0,0,246,247,5,22,0,0,247,252,3,38,19,0,248,249,5,26,0,0,249,252,
  	3,38,19,0,250,252,3,40,20,0,251,246,1,0,0,0,251,248,1,0,0,0,251,250,1,
  	0,0,0,252,39,1,0,0,0,253,272,3,26,13,0,254,255,5,30,0,0,255,256,5,14,
  	0,0,256,257,3,42,21,0,257,258,5,15,0,0,258,272,1,0,0,0,259,260,5,14,0,
  	0,260,261,3,28,14,0,261,262,5,15,0,0,262,272,1,0,0,0,263,272,5,31,0,0,
  	264,272,5,32,0,0,265,266,3,26,13,0,266,267,5,24,0,0,267,272,1,0,0,0,268,
  	269,3,26,13,0,269,270,5,25,0,0,270,272,1,0,0,0,271,253,1,0,0,0,271,254,
  	1,0,0,0,271,259,1,0,0,0,271,263,1,0,0,0,271,264,1,0,0,0,271,265,1,0,0,
  	0,271,268,1,0,0,0,272,41,1,0,0,0,273,276,3,44,22,0,274,276,1,0,0,0,275,
  	273,1,0,0,0,275,274,1,0,0,0,276,43,1,0,0,0,277,278,6,22,-1,0,278,279,
  	3,30,15,0,279,285,1,0,0,0,280,281,10,2,0,0,281,282,5,21,0,0,282,284,3,
  	30,15,0,283,280,1,0,0,0,284,287,1,0,0,0,285,283,1,0,0,0,285,286,1,0,0,
  	0,286,45,1,0,0,0,287,285,1,0,0,0,25,55,61,76,91,98,108,110,119,128,136,
  	147,149,159,187,193,201,208,215,222,232,243,251,271,275,285
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
    setState(98);
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

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(110);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 6, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(108);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 5, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<MultiParamDefContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(100);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(101);
          match(CSubsetParser::COMMA);
          setState(102);
          type_specifier();
          setState(103);
          match(CSubsetParser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<MultiParamDecContext>(_tracker.createInstance<Parameter_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleParameter_list);
          setState(105);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(106);
          match(CSubsetParser::COMMA);
          setState(107);
          type_specifier();
          break;
        }

        default:
          break;
        } 
      }
      setState(112);
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
    setState(119);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 7, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::Cmpd_stmtStmtsContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(113);
      match(CSubsetParser::LCURL);
      setState(114);
      statements(0);
      setState(115);
      match(CSubsetParser::RCURL);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::Cmpd_stmtParenContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(117);
      match(CSubsetParser::LCURL);
      setState(118);
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
    setState(121);
    type_specifier();
    setState(122);
    declaration_list(0);
    setState(123);
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
    setState(128);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::INT: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeIntContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(125);
        match(CSubsetParser::INT);
        break;
      }

      case CSubsetParser::FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeFloatContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(126);
        match(CSubsetParser::FLOAT);
        break;
      }

      case CSubsetParser::VOID: {
        _localctx = _tracker.createInstance<CSubsetParser::TypeVoidContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(127);
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
    setState(136);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 9, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<Dec_lstIDContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;

      setState(131);
      match(CSubsetParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<Dec_lstThirdContext>(_localctx);
      _ctx = _localctx;
      previousContext = _localctx;
      setState(132);
      match(CSubsetParser::ID);
      setState(133);
      match(CSubsetParser::LTHIRD);
      setState(134);
      match(CSubsetParser::CONST_INT);
      setState(135);
      match(CSubsetParser::RTHIRD);
      break;
    }

    default:
      break;
    }
    _ctx->stop = _input->LT(-1);
    setState(149);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 11, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        setState(147);
        _errHandler->sync(this);
        switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 10, _ctx)) {
        case 1: {
          auto newContext = _tracker.createInstance<Dec_lstCommaIDContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(138);

          if (!(precpred(_ctx, 4))) throw FailedPredicateException(this, "precpred(_ctx, 4)");
          setState(139);
          match(CSubsetParser::COMMA);
          setState(140);
          match(CSubsetParser::ID);
          break;
        }

        case 2: {
          auto newContext = _tracker.createInstance<Dec_lstCommaThirdContext>(_tracker.createInstance<Declaration_listContext>(parentContext, parentState));
          _localctx = newContext;
          pushNewRecursionContext(newContext, startState, RuleDeclaration_list);
          setState(141);

          if (!(precpred(_ctx, 3))) throw FailedPredicateException(this, "precpred(_ctx, 3)");
          setState(142);
          match(CSubsetParser::COMMA);
          setState(143);
          match(CSubsetParser::ID);
          setState(144);
          match(CSubsetParser::LTHIRD);
          setState(145);
          match(CSubsetParser::CONST_INT);
          setState(146);
          match(CSubsetParser::RTHIRD);
          break;
        }

        default:
          break;
        } 
      }
      setState(151);
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

    setState(153);
    statement();
    _ctx->stop = _input->LT(-1);
    setState(159);
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
        setState(155);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(156);
        statement(); 
      }
      setState(161);
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

std::vector<CSubsetParser::StatementContext *> CSubsetParser::StmtIfContext::statement() {
  return getRuleContexts<CSubsetParser::StatementContext>();
}

CSubsetParser::StatementContext* CSubsetParser::StmtIfContext::statement(size_t i) {
  return getRuleContext<CSubsetParser::StatementContext>(i);
}

tree::TerminalNode* CSubsetParser::StmtIfContext::ELSE() {
  return getToken(CSubsetParser::ELSE, 0);
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
    setState(187);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::INT:
      case CSubsetParser::FLOAT:
      case CSubsetParser::VOID: {
        _localctx = _tracker.createInstance<CSubsetParser::StmtVar_decContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(162);
        var_declaration();
        break;
      }

      case CSubsetParser::LPAREN:
      case CSubsetParser::SEMICOLON:
      case CSubsetParser::ADDOP:
      case CSubsetParser::NOT:
      case CSubsetParser::ID:
      case CSubsetParser::CONST_INT:
      case CSubsetParser::CONST_FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::StmtExpr_stmtContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(163);
        expression_statement();
        break;
      }

      case CSubsetParser::IF: {
        _localctx = _tracker.createInstance<CSubsetParser::StmtIfContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(164);
        match(CSubsetParser::IF);
        setState(165);
        match(CSubsetParser::LPAREN);
        setState(166);
        expression();
        setState(167);
        match(CSubsetParser::RPAREN);
        setState(168);
        statement();
        setState(169);
        match(CSubsetParser::ELSE);
        setState(170);
        statement();
        break;
      }

      case CSubsetParser::WHILE: {
        _localctx = _tracker.createInstance<CSubsetParser::StmtWhileContext>(_localctx);
        enterOuterAlt(_localctx, 4);
        setState(172);
        match(CSubsetParser::WHILE);
        setState(173);
        match(CSubsetParser::LPAREN);
        setState(174);
        expression();
        setState(175);
        match(CSubsetParser::RPAREN);
        setState(176);
        statement();
        break;
      }

      case CSubsetParser::PRINTLN: {
        _localctx = _tracker.createInstance<CSubsetParser::StmtPrintContext>(_localctx);
        enterOuterAlt(_localctx, 5);
        setState(178);
        match(CSubsetParser::PRINTLN);
        setState(179);
        match(CSubsetParser::LPAREN);
        setState(180);
        match(CSubsetParser::ID);
        setState(181);
        match(CSubsetParser::RPAREN);
        setState(182);
        match(CSubsetParser::SEMICOLON);
        break;
      }

      case CSubsetParser::RETURN: {
        _localctx = _tracker.createInstance<CSubsetParser::StmtReturnContext>(_localctx);
        enterOuterAlt(_localctx, 6);
        setState(183);
        match(CSubsetParser::RETURN);
        setState(184);
        expression();
        setState(185);
        match(CSubsetParser::SEMICOLON);
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
    setState(193);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::SEMICOLON: {
        _localctx = _tracker.createInstance<CSubsetParser::Expr_stmtSemicolonContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(189);
        match(CSubsetParser::SEMICOLON);
        break;
      }

      case CSubsetParser::LPAREN:
      case CSubsetParser::ADDOP:
      case CSubsetParser::NOT:
      case CSubsetParser::ID:
      case CSubsetParser::CONST_INT:
      case CSubsetParser::CONST_FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::Expr_stmtExprSemicolonContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(190);
        expression();
        setState(191);
        match(CSubsetParser::SEMICOLON);
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
    setState(201);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 15, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::VarIdContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(195);
      match(CSubsetParser::ID);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::VarThirdContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(196);
      match(CSubsetParser::ID);
      setState(197);
      match(CSubsetParser::LTHIRD);
      setState(198);
      expression();
      setState(199);
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
    setState(208);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 16, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::ExprLogicContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(203);
      logic_expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::ExprVarContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(204);
      variable();
      setState(205);
      match(CSubsetParser::ASSIGNOP);
      setState(206);
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
    setState(215);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 17, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::LogciRelContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(210);
      rel_expression();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::LogicRelRelContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(211);
      rel_expression();
      setState(212);
      match(CSubsetParser::LOGICOP);
      setState(213);
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
    setState(222);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 18, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::RelSimpleContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(217);
      simple_expression(0);
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::RelSimpleSimpleContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(218);
      simple_expression(0);
      setState(219);
      match(CSubsetParser::RELOP);
      setState(220);
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

    setState(225);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(232);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 19, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<SimpleSimpleTermContext>(_tracker.createInstance<Simple_expressionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleSimple_expression);
        setState(227);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(228);
        match(CSubsetParser::ADDOP);
        setState(229);
        term(0); 
      }
      setState(234);
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

    setState(236);
    unary_expression();
    _ctx->stop = _input->LT(-1);
    setState(243);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 20, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<TermTermContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleTerm);
        setState(238);

        if (!(precpred(_ctx, 1))) throw FailedPredicateException(this, "precpred(_ctx, 1)");
        setState(239);
        match(CSubsetParser::MULOP);
        setState(240);
        unary_expression(); 
      }
      setState(245);
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
    setState(251);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::ADDOP: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryAddContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(246);
        match(CSubsetParser::ADDOP);
        setState(247);
        unary_expression();
        break;
      }

      case CSubsetParser::NOT: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryNotContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(248);
        match(CSubsetParser::NOT);
        setState(249);
        unary_expression();
        break;
      }

      case CSubsetParser::LPAREN:
      case CSubsetParser::ID:
      case CSubsetParser::CONST_INT:
      case CSubsetParser::CONST_FLOAT: {
        _localctx = _tracker.createInstance<CSubsetParser::UnaryFactorContext>(_localctx);
        enterOuterAlt(_localctx, 3);
        setState(250);
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
    setState(271);
    _errHandler->sync(this);
    switch (getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 22, _ctx)) {
    case 1: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorVarContext>(_localctx);
      enterOuterAlt(_localctx, 1);
      setState(253);
      variable();
      break;
    }

    case 2: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorIdContext>(_localctx);
      enterOuterAlt(_localctx, 2);
      setState(254);
      match(CSubsetParser::ID);
      setState(255);
      match(CSubsetParser::LPAREN);
      setState(256);
      argument_list();
      setState(257);
      match(CSubsetParser::RPAREN);
      break;
    }

    case 3: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorParenContext>(_localctx);
      enterOuterAlt(_localctx, 3);
      setState(259);
      match(CSubsetParser::LPAREN);
      setState(260);
      expression();
      setState(261);
      match(CSubsetParser::RPAREN);
      break;
    }

    case 4: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorIntContext>(_localctx);
      enterOuterAlt(_localctx, 4);
      setState(263);
      match(CSubsetParser::CONST_INT);
      break;
    }

    case 5: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorFloatContext>(_localctx);
      enterOuterAlt(_localctx, 5);
      setState(264);
      match(CSubsetParser::CONST_FLOAT);
      break;
    }

    case 6: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorIncopContext>(_localctx);
      enterOuterAlt(_localctx, 6);
      setState(265);
      variable();
      setState(266);
      match(CSubsetParser::INCOP);
      break;
    }

    case 7: {
      _localctx = _tracker.createInstance<CSubsetParser::FactorDecopContext>(_localctx);
      enterOuterAlt(_localctx, 7);
      setState(268);
      variable();
      setState(269);
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
    setState(275);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case CSubsetParser::LPAREN:
      case CSubsetParser::ADDOP:
      case CSubsetParser::NOT:
      case CSubsetParser::ID:
      case CSubsetParser::CONST_INT:
      case CSubsetParser::CONST_FLOAT: {
        enterOuterAlt(_localctx, 1);
        setState(273);
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

    setState(278);
    logic_expression();
    _ctx->stop = _input->LT(-1);
    setState(285);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<ArgsArgsContext>(_tracker.createInstance<ArgumentsContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleArguments);
        setState(280);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(281);
        match(CSubsetParser::COMMA);
        setState(282);
        logic_expression(); 
      }
      setState(287);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 24, _ctx);
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
    case 1: return precpred(_ctx, 4);
    case 2: return precpred(_ctx, 3);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::declaration_listSempred(Declaration_listContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 3: return precpred(_ctx, 4);
    case 4: return precpred(_ctx, 3);

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
    case 6: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 7: return precpred(_ctx, 1);

  default:
    break;
  }
  return true;
}

bool CSubsetParser::argumentsSempred(ArgumentsContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 8: return precpred(_ctx, 2);

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
