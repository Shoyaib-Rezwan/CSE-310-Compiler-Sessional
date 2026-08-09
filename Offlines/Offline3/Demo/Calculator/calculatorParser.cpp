
// Generated from calculator.g4 by ANTLR 4.13.2


#include "calculatorVisitor.h"

#include "calculatorParser.h"


using namespace antlrcpp;

using namespace antlr4;

namespace {

struct CalculatorParserStaticData final {
  CalculatorParserStaticData(std::vector<std::string> ruleNames,
                        std::vector<std::string> literalNames,
                        std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CalculatorParserStaticData(const CalculatorParserStaticData&) = delete;
  CalculatorParserStaticData(CalculatorParserStaticData&&) = delete;
  CalculatorParserStaticData& operator=(const CalculatorParserStaticData&) = delete;
  CalculatorParserStaticData& operator=(CalculatorParserStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag calculatorParserOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CalculatorParserStaticData> calculatorParserStaticData = nullptr;

void calculatorParserInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (calculatorParserStaticData != nullptr) {
    return;
  }
#else
  assert(calculatorParserStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CalculatorParserStaticData>(
    std::vector<std::string>{
      "start", "expression", "term", "factor"
    },
    std::vector<std::string>{
      "", "", "", "'+'", "'*'", "'('", "')'"
    },
    std::vector<std::string>{
      "", "INT", "WHITESPACE", "PLUS", "TIMES", "LPAREN", "RPAREN"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,1,6,40,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,1,0,1,0,1,1,1,1,1,1,1,1,1,1,
  	1,1,5,1,17,8,1,10,1,12,1,20,9,1,1,2,1,2,1,2,1,2,1,2,1,2,5,2,28,8,2,10,
  	2,12,2,31,9,2,1,3,1,3,1,3,1,3,1,3,3,3,38,8,3,1,3,0,2,2,4,4,0,2,4,6,0,
  	0,38,0,8,1,0,0,0,2,10,1,0,0,0,4,21,1,0,0,0,6,37,1,0,0,0,8,9,3,2,1,0,9,
  	1,1,0,0,0,10,11,6,1,-1,0,11,12,3,4,2,0,12,18,1,0,0,0,13,14,10,2,0,0,14,
  	15,5,3,0,0,15,17,3,4,2,0,16,13,1,0,0,0,17,20,1,0,0,0,18,16,1,0,0,0,18,
  	19,1,0,0,0,19,3,1,0,0,0,20,18,1,0,0,0,21,22,6,2,-1,0,22,23,3,6,3,0,23,
  	29,1,0,0,0,24,25,10,2,0,0,25,26,5,4,0,0,26,28,3,6,3,0,27,24,1,0,0,0,28,
  	31,1,0,0,0,29,27,1,0,0,0,29,30,1,0,0,0,30,5,1,0,0,0,31,29,1,0,0,0,32,
  	33,5,5,0,0,33,34,3,2,1,0,34,35,5,6,0,0,35,38,1,0,0,0,36,38,5,1,0,0,37,
  	32,1,0,0,0,37,36,1,0,0,0,38,7,1,0,0,0,3,18,29,37
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  calculatorParserStaticData = std::move(staticData);
}

}

calculatorParser::calculatorParser(TokenStream *input) : calculatorParser(input, antlr4::atn::ParserATNSimulatorOptions()) {}

calculatorParser::calculatorParser(TokenStream *input, const antlr4::atn::ParserATNSimulatorOptions &options) : Parser(input) {
  calculatorParser::initialize();
  _interpreter = new atn::ParserATNSimulator(this, *calculatorParserStaticData->atn, calculatorParserStaticData->decisionToDFA, calculatorParserStaticData->sharedContextCache, options);
}

calculatorParser::~calculatorParser() {
  delete _interpreter;
}

const atn::ATN& calculatorParser::getATN() const {
  return *calculatorParserStaticData->atn;
}

std::string calculatorParser::getGrammarFileName() const {
  return "calculator.g4";
}

const std::vector<std::string>& calculatorParser::getRuleNames() const {
  return calculatorParserStaticData->ruleNames;
}

const dfa::Vocabulary& calculatorParser::getVocabulary() const {
  return calculatorParserStaticData->vocabulary;
}

antlr4::atn::SerializedATNView calculatorParser::getSerializedATN() const {
  return calculatorParserStaticData->serializedATN;
}


//----------------- StartContext ------------------------------------------------------------------

calculatorParser::StartContext::StartContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}

calculatorParser::ExpressionContext* calculatorParser::StartContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}


size_t calculatorParser::StartContext::getRuleIndex() const {
  return calculatorParser::RuleStart;
}


std::any calculatorParser::StartContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitStart(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::StartContext* calculatorParser::start() {
  StartContext *_localctx = _tracker.createInstance<StartContext>(_ctx, getState());
  enterRule(_localctx, 0, calculatorParser::RuleStart);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    enterOuterAlt(_localctx, 1);
    setState(8);
    expression(0);
   
  }
  catch (RecognitionException &e) {
    _errHandler->reportError(this, e);
    _localctx->exception = std::current_exception();
    _errHandler->recover(this, _localctx->exception);
  }

  return _localctx;
}

//----------------- ExpressionContext ------------------------------------------------------------------

calculatorParser::ExpressionContext::ExpressionContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calculatorParser::ExpressionContext::getRuleIndex() const {
  return calculatorParser::RuleExpression;
}

void calculatorParser::ExpressionContext::copyFrom(ExpressionContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- ExprTermContext ------------------------------------------------------------------

calculatorParser::TermContext* calculatorParser::ExprTermContext::term() {
  return getRuleContext<calculatorParser::TermContext>(0);
}

calculatorParser::ExprTermContext::ExprTermContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calculatorParser::ExprTermContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitExprTerm(this);
  else
    return visitor->visitChildren(this);
}
//----------------- PlusContext ------------------------------------------------------------------

calculatorParser::ExpressionContext* calculatorParser::PlusContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* calculatorParser::PlusContext::PLUS() {
  return getToken(calculatorParser::PLUS, 0);
}

calculatorParser::TermContext* calculatorParser::PlusContext::term() {
  return getRuleContext<calculatorParser::TermContext>(0);
}

calculatorParser::PlusContext::PlusContext(ExpressionContext *ctx) { copyFrom(ctx); }


std::any calculatorParser::PlusContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitPlus(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::ExpressionContext* calculatorParser::expression() {
   return expression(0);
}

calculatorParser::ExpressionContext* calculatorParser::expression(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calculatorParser::ExpressionContext *_localctx = _tracker.createInstance<ExpressionContext>(_ctx, parentState);
  calculatorParser::ExpressionContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 2;
  enterRecursionRule(_localctx, 2, calculatorParser::RuleExpression, precedence);

    

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
    _localctx = _tracker.createInstance<ExprTermContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(11);
    term(0);
    _ctx->stop = _input->LT(-1);
    setState(18);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 0, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<PlusContext>(_tracker.createInstance<ExpressionContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleExpression);
        setState(13);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(14);
        match(calculatorParser::PLUS);
        setState(15);
        term(0); 
      }
      setState(20);
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

//----------------- TermContext ------------------------------------------------------------------

calculatorParser::TermContext::TermContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calculatorParser::TermContext::getRuleIndex() const {
  return calculatorParser::RuleTerm;
}

void calculatorParser::TermContext::copyFrom(TermContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- TermFactorContext ------------------------------------------------------------------

calculatorParser::FactorContext* calculatorParser::TermFactorContext::factor() {
  return getRuleContext<calculatorParser::FactorContext>(0);
}

calculatorParser::TermFactorContext::TermFactorContext(TermContext *ctx) { copyFrom(ctx); }


std::any calculatorParser::TermFactorContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitTermFactor(this);
  else
    return visitor->visitChildren(this);
}
//----------------- TimesContext ------------------------------------------------------------------

calculatorParser::TermContext* calculatorParser::TimesContext::term() {
  return getRuleContext<calculatorParser::TermContext>(0);
}

tree::TerminalNode* calculatorParser::TimesContext::TIMES() {
  return getToken(calculatorParser::TIMES, 0);
}

calculatorParser::FactorContext* calculatorParser::TimesContext::factor() {
  return getRuleContext<calculatorParser::FactorContext>(0);
}

calculatorParser::TimesContext::TimesContext(TermContext *ctx) { copyFrom(ctx); }


std::any calculatorParser::TimesContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitTimes(this);
  else
    return visitor->visitChildren(this);
}

calculatorParser::TermContext* calculatorParser::term() {
   return term(0);
}

calculatorParser::TermContext* calculatorParser::term(int precedence) {
  ParserRuleContext *parentContext = _ctx;
  size_t parentState = getState();
  calculatorParser::TermContext *_localctx = _tracker.createInstance<TermContext>(_ctx, parentState);
  calculatorParser::TermContext *previousContext = _localctx;
  (void)previousContext; // Silence compiler, in case the context is not used by generated code.
  size_t startState = 4;
  enterRecursionRule(_localctx, 4, calculatorParser::RuleTerm, precedence);

    

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
    _localctx = _tracker.createInstance<TermFactorContext>(_localctx);
    _ctx = _localctx;
    previousContext = _localctx;

    setState(22);
    factor();
    _ctx->stop = _input->LT(-1);
    setState(29);
    _errHandler->sync(this);
    alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
    while (alt != 2 && alt != atn::ATN::INVALID_ALT_NUMBER) {
      if (alt == 1) {
        if (!_parseListeners.empty())
          triggerExitRuleEvent();
        previousContext = _localctx;
        auto newContext = _tracker.createInstance<TimesContext>(_tracker.createInstance<TermContext>(parentContext, parentState));
        _localctx = newContext;
        pushNewRecursionContext(newContext, startState, RuleTerm);
        setState(24);

        if (!(precpred(_ctx, 2))) throw FailedPredicateException(this, "precpred(_ctx, 2)");
        setState(25);
        match(calculatorParser::TIMES);
        setState(26);
        factor(); 
      }
      setState(31);
      _errHandler->sync(this);
      alt = getInterpreter<atn::ParserATNSimulator>()->adaptivePredict(_input, 1, _ctx);
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

calculatorParser::FactorContext::FactorContext(ParserRuleContext *parent, size_t invokingState)
  : ParserRuleContext(parent, invokingState) {
}


size_t calculatorParser::FactorContext::getRuleIndex() const {
  return calculatorParser::RuleFactor;
}

void calculatorParser::FactorContext::copyFrom(FactorContext *ctx) {
  ParserRuleContext::copyFrom(ctx);
}

//----------------- FactorIntContext ------------------------------------------------------------------

tree::TerminalNode* calculatorParser::FactorIntContext::INT() {
  return getToken(calculatorParser::INT, 0);
}

calculatorParser::FactorIntContext::FactorIntContext(FactorContext *ctx) { copyFrom(ctx); }


std::any calculatorParser::FactorIntContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitFactorInt(this);
  else
    return visitor->visitChildren(this);
}
//----------------- ParenContext ------------------------------------------------------------------

tree::TerminalNode* calculatorParser::ParenContext::LPAREN() {
  return getToken(calculatorParser::LPAREN, 0);
}

calculatorParser::ExpressionContext* calculatorParser::ParenContext::expression() {
  return getRuleContext<calculatorParser::ExpressionContext>(0);
}

tree::TerminalNode* calculatorParser::ParenContext::RPAREN() {
  return getToken(calculatorParser::RPAREN, 0);
}

calculatorParser::ParenContext::ParenContext(FactorContext *ctx) { copyFrom(ctx); }


std::any calculatorParser::ParenContext::accept(tree::ParseTreeVisitor *visitor) {
  if (auto parserVisitor = dynamic_cast<calculatorVisitor*>(visitor))
    return parserVisitor->visitParen(this);
  else
    return visitor->visitChildren(this);
}
calculatorParser::FactorContext* calculatorParser::factor() {
  FactorContext *_localctx = _tracker.createInstance<FactorContext>(_ctx, getState());
  enterRule(_localctx, 6, calculatorParser::RuleFactor);

#if __cplusplus > 201703L
  auto onExit = finally([=, this] {
#else
  auto onExit = finally([=] {
#endif
    exitRule();
  });
  try {
    setState(37);
    _errHandler->sync(this);
    switch (_input->LA(1)) {
      case calculatorParser::LPAREN: {
        _localctx = _tracker.createInstance<calculatorParser::ParenContext>(_localctx);
        enterOuterAlt(_localctx, 1);
        setState(32);
        match(calculatorParser::LPAREN);
        setState(33);
        expression(0);
        setState(34);
        match(calculatorParser::RPAREN);
        break;
      }

      case calculatorParser::INT: {
        _localctx = _tracker.createInstance<calculatorParser::FactorIntContext>(_localctx);
        enterOuterAlt(_localctx, 2);
        setState(36);
        match(calculatorParser::INT);
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

bool calculatorParser::sempred(RuleContext *context, size_t ruleIndex, size_t predicateIndex) {
  switch (ruleIndex) {
    case 1: return expressionSempred(antlrcpp::downCast<ExpressionContext *>(context), predicateIndex);
    case 2: return termSempred(antlrcpp::downCast<TermContext *>(context), predicateIndex);

  default:
    break;
  }
  return true;
}

bool calculatorParser::expressionSempred(ExpressionContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 0: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

bool calculatorParser::termSempred(TermContext *_localctx, size_t predicateIndex) {
  switch (predicateIndex) {
    case 1: return precpred(_ctx, 2);

  default:
    break;
  }
  return true;
}

void calculatorParser::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  calculatorParserInitialize();
#else
  ::antlr4::internal::call_once(calculatorParserOnceFlag, calculatorParserInitialize);
#endif
}
