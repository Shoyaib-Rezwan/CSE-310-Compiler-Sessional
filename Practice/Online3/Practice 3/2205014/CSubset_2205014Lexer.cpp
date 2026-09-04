
    #pragma once
    #include <iostream>
    #include <fstream>
    #include <string>

    extern std::ofstream lexLogFile;


// Generated from CSubset_2205014.g4 by ANTLR 4.13.2


#include "CSubset_2205014Lexer.h"


using namespace antlr4;



using namespace antlr4;

namespace {

struct CSubset_2205014LexerStaticData final {
  CSubset_2205014LexerStaticData(std::vector<std::string> ruleNames,
                          std::vector<std::string> channelNames,
                          std::vector<std::string> modeNames,
                          std::vector<std::string> literalNames,
                          std::vector<std::string> symbolicNames)
      : ruleNames(std::move(ruleNames)), channelNames(std::move(channelNames)),
        modeNames(std::move(modeNames)), literalNames(std::move(literalNames)),
        symbolicNames(std::move(symbolicNames)),
        vocabulary(this->literalNames, this->symbolicNames) {}

  CSubset_2205014LexerStaticData(const CSubset_2205014LexerStaticData&) = delete;
  CSubset_2205014LexerStaticData(CSubset_2205014LexerStaticData&&) = delete;
  CSubset_2205014LexerStaticData& operator=(const CSubset_2205014LexerStaticData&) = delete;
  CSubset_2205014LexerStaticData& operator=(CSubset_2205014LexerStaticData&&) = delete;

  std::vector<antlr4::dfa::DFA> decisionToDFA;
  antlr4::atn::PredictionContextCache sharedContextCache;
  const std::vector<std::string> ruleNames;
  const std::vector<std::string> channelNames;
  const std::vector<std::string> modeNames;
  const std::vector<std::string> literalNames;
  const std::vector<std::string> symbolicNames;
  const antlr4::dfa::Vocabulary vocabulary;
  antlr4::atn::SerializedATNView serializedATN;
  std::unique_ptr<antlr4::atn::ATN> atn;
};

::antlr4::internal::OnceFlag csubset_2205014lexerLexerOnceFlag;
#if ANTLR4_USE_THREAD_LOCAL_CACHE
static thread_local
#endif
std::unique_ptr<CSubset_2205014LexerStaticData> csubset_2205014lexerLexerStaticData = nullptr;

void csubset_2205014lexerLexerInitialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  if (csubset_2205014lexerLexerStaticData != nullptr) {
    return;
  }
#else
  assert(csubset_2205014lexerLexerStaticData == nullptr);
#endif
  auto staticData = std::make_unique<CSubset_2205014LexerStaticData>(
    std::vector<std::string>{
      "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", "FOR", 
      "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "LPAREN", "RPAREN", 
      "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", "COLON", 
      "GOTO", "ADDOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", "LOGICOP", 
      "ASSIGNOP", "ID", "CONST_INT", "CONST_FLOAT"
    },
    std::vector<std::string>{
      "DEFAULT_TOKEN_CHANNEL", "HIDDEN"
    },
    std::vector<std::string>{
      "DEFAULT_MODE"
    },
    std::vector<std::string>{
      "", "", "", "", "", "'if'", "'else'", "'for'", "'while'", "'println'", 
      "'return'", "'int'", "'float'", "'void'", "'('", "')'", "'{'", "'}'", 
      "'['", "']'", "';'", "','", "':'", "'goto'", "", "", "'++'", "'--'", 
      "'!'", "", "", "'='"
    },
    std::vector<std::string>{
      "", "LINE_COMMENT", "BLOCK_COMMENT", "STRING", "WS", "IF", "ELSE", 
      "FOR", "WHILE", "PRINTLN", "RETURN", "INT", "FLOAT", "VOID", "LPAREN", 
      "RPAREN", "LCURL", "RCURL", "LTHIRD", "RTHIRD", "SEMICOLON", "COMMA", 
      "COLON", "GOTO", "ADDOP", "MULOP", "INCOP", "DECOP", "NOT", "RELOP", 
      "LOGICOP", "ASSIGNOP", "ID", "CONST_INT", "CONST_FLOAT"
    }
  );
  static const int32_t serializedATNSegment[] = {
  	4,0,34,321,6,-1,2,0,7,0,2,1,7,1,2,2,7,2,2,3,7,3,2,4,7,4,2,5,7,5,2,6,7,
  	6,2,7,7,7,2,8,7,8,2,9,7,9,2,10,7,10,2,11,7,11,2,12,7,12,2,13,7,13,2,14,
  	7,14,2,15,7,15,2,16,7,16,2,17,7,17,2,18,7,18,2,19,7,19,2,20,7,20,2,21,
  	7,21,2,22,7,22,2,23,7,23,2,24,7,24,2,25,7,25,2,26,7,26,2,27,7,27,2,28,
  	7,28,2,29,7,29,2,30,7,30,2,31,7,31,2,32,7,32,2,33,7,33,1,0,1,0,1,0,1,
  	0,5,0,74,8,0,10,0,12,0,77,9,0,1,0,1,0,1,0,1,0,1,1,1,1,1,1,1,1,1,1,5,1,
  	88,8,1,10,1,12,1,91,9,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,1,2,1,2,1,2,5,
  	2,104,8,2,10,2,12,2,107,9,2,1,2,1,2,1,2,1,2,1,2,1,3,4,3,115,8,3,11,3,
  	12,3,116,1,3,1,3,1,4,1,4,1,4,1,4,1,4,1,5,1,5,1,5,1,5,1,5,1,5,1,5,1,6,
  	1,6,1,6,1,6,1,6,1,6,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,7,1,8,1,8,1,8,1,8,1,
  	8,1,8,1,8,1,8,1,8,1,8,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,9,1,10,1,10,1,
  	10,1,10,1,10,1,10,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,11,1,12,1,12,1,
  	12,1,12,1,12,1,12,1,12,1,13,1,13,1,13,1,14,1,14,1,14,1,15,1,15,1,15,1,
  	16,1,16,1,16,1,17,1,17,1,17,1,18,1,18,1,18,1,19,1,19,1,19,1,20,1,20,1,
  	20,1,21,1,21,1,21,1,22,1,22,1,22,1,22,1,22,1,22,1,22,1,23,1,23,1,23,1,
  	24,1,24,1,24,1,25,1,25,1,25,1,25,1,25,1,26,1,26,1,26,1,26,1,26,1,27,1,
  	27,1,27,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,1,28,3,28,251,
  	8,28,1,29,1,29,1,29,1,29,1,29,1,29,3,29,259,8,29,1,30,1,30,1,30,1,31,
  	1,31,5,31,266,8,31,10,31,12,31,269,9,31,1,31,1,31,1,32,4,32,274,8,32,
  	11,32,12,32,275,1,32,1,32,1,33,4,33,281,8,33,11,33,12,33,282,1,33,1,33,
  	5,33,287,8,33,10,33,12,33,290,9,33,3,33,292,8,33,1,33,1,33,3,33,296,8,
  	33,1,33,4,33,299,8,33,11,33,12,33,300,3,33,303,8,33,1,33,1,33,1,33,4,
  	33,308,8,33,11,33,12,33,309,1,33,1,33,4,33,314,8,33,11,33,12,33,315,1,
  	33,1,33,3,33,320,8,33,1,89,0,34,1,1,3,2,5,3,7,4,9,5,11,6,13,7,15,8,17,
  	9,19,10,21,11,23,12,25,13,27,14,29,15,31,16,33,17,35,18,37,19,39,20,41,
  	21,43,22,45,23,47,24,49,25,51,26,53,27,55,28,57,29,59,30,61,31,63,32,
  	65,33,67,34,1,0,10,2,0,10,10,13,13,4,0,10,10,13,13,34,34,92,92,3,0,9,
  	10,12,13,32,32,2,0,43,43,45,45,3,0,37,37,42,42,47,47,2,0,60,60,62,62,
  	3,0,65,90,95,95,97,122,4,0,48,57,65,90,95,95,97,122,1,0,48,57,2,0,69,
  	69,101,101,343,0,1,1,0,0,0,0,3,1,0,0,0,0,5,1,0,0,0,0,7,1,0,0,0,0,9,1,
  	0,0,0,0,11,1,0,0,0,0,13,1,0,0,0,0,15,1,0,0,0,0,17,1,0,0,0,0,19,1,0,0,
  	0,0,21,1,0,0,0,0,23,1,0,0,0,0,25,1,0,0,0,0,27,1,0,0,0,0,29,1,0,0,0,0,
  	31,1,0,0,0,0,33,1,0,0,0,0,35,1,0,0,0,0,37,1,0,0,0,0,39,1,0,0,0,0,41,1,
  	0,0,0,0,43,1,0,0,0,0,45,1,0,0,0,0,47,1,0,0,0,0,49,1,0,0,0,0,51,1,0,0,
  	0,0,53,1,0,0,0,0,55,1,0,0,0,0,57,1,0,0,0,0,59,1,0,0,0,0,61,1,0,0,0,0,
  	63,1,0,0,0,0,65,1,0,0,0,0,67,1,0,0,0,1,69,1,0,0,0,3,82,1,0,0,0,5,99,1,
  	0,0,0,7,114,1,0,0,0,9,120,1,0,0,0,11,125,1,0,0,0,13,132,1,0,0,0,15,138,
  	1,0,0,0,17,146,1,0,0,0,19,156,1,0,0,0,21,165,1,0,0,0,23,171,1,0,0,0,25,
  	179,1,0,0,0,27,186,1,0,0,0,29,189,1,0,0,0,31,192,1,0,0,0,33,195,1,0,0,
  	0,35,198,1,0,0,0,37,201,1,0,0,0,39,204,1,0,0,0,41,207,1,0,0,0,43,210,
  	1,0,0,0,45,213,1,0,0,0,47,220,1,0,0,0,49,223,1,0,0,0,51,226,1,0,0,0,53,
  	231,1,0,0,0,55,236,1,0,0,0,57,250,1,0,0,0,59,258,1,0,0,0,61,260,1,0,0,
  	0,63,263,1,0,0,0,65,273,1,0,0,0,67,319,1,0,0,0,69,70,5,47,0,0,70,71,5,
  	47,0,0,71,75,1,0,0,0,72,74,8,0,0,0,73,72,1,0,0,0,74,77,1,0,0,0,75,73,
  	1,0,0,0,75,76,1,0,0,0,76,78,1,0,0,0,77,75,1,0,0,0,78,79,6,0,0,0,79,80,
  	1,0,0,0,80,81,6,0,1,0,81,2,1,0,0,0,82,83,5,47,0,0,83,84,5,42,0,0,84,89,
  	1,0,0,0,85,88,9,0,0,0,86,88,7,0,0,0,87,85,1,0,0,0,87,86,1,0,0,0,88,91,
  	1,0,0,0,89,90,1,0,0,0,89,87,1,0,0,0,90,92,1,0,0,0,91,89,1,0,0,0,92,93,
  	5,42,0,0,93,94,5,47,0,0,94,95,1,0,0,0,95,96,6,1,2,0,96,97,1,0,0,0,97,
  	98,6,1,1,0,98,4,1,0,0,0,99,105,5,34,0,0,100,101,5,92,0,0,101,104,9,0,
  	0,0,102,104,8,1,0,0,103,100,1,0,0,0,103,102,1,0,0,0,104,107,1,0,0,0,105,
  	103,1,0,0,0,105,106,1,0,0,0,106,108,1,0,0,0,107,105,1,0,0,0,108,109,5,
  	34,0,0,109,110,6,2,3,0,110,111,1,0,0,0,111,112,6,2,1,0,112,6,1,0,0,0,
  	113,115,7,2,0,0,114,113,1,0,0,0,115,116,1,0,0,0,116,114,1,0,0,0,116,117,
  	1,0,0,0,117,118,1,0,0,0,118,119,6,3,1,0,119,8,1,0,0,0,120,121,5,105,0,
  	0,121,122,5,102,0,0,122,123,1,0,0,0,123,124,6,4,4,0,124,10,1,0,0,0,125,
  	126,5,101,0,0,126,127,5,108,0,0,127,128,5,115,0,0,128,129,5,101,0,0,129,
  	130,1,0,0,0,130,131,6,5,5,0,131,12,1,0,0,0,132,133,5,102,0,0,133,134,
  	5,111,0,0,134,135,5,114,0,0,135,136,1,0,0,0,136,137,6,6,6,0,137,14,1,
  	0,0,0,138,139,5,119,0,0,139,140,5,104,0,0,140,141,5,105,0,0,141,142,5,
  	108,0,0,142,143,5,101,0,0,143,144,1,0,0,0,144,145,6,7,7,0,145,16,1,0,
  	0,0,146,147,5,112,0,0,147,148,5,114,0,0,148,149,5,105,0,0,149,150,5,110,
  	0,0,150,151,5,116,0,0,151,152,5,108,0,0,152,153,5,110,0,0,153,154,1,0,
  	0,0,154,155,6,8,8,0,155,18,1,0,0,0,156,157,5,114,0,0,157,158,5,101,0,
  	0,158,159,5,116,0,0,159,160,5,117,0,0,160,161,5,114,0,0,161,162,5,110,
  	0,0,162,163,1,0,0,0,163,164,6,9,9,0,164,20,1,0,0,0,165,166,5,105,0,0,
  	166,167,5,110,0,0,167,168,5,116,0,0,168,169,1,0,0,0,169,170,6,10,10,0,
  	170,22,1,0,0,0,171,172,5,102,0,0,172,173,5,108,0,0,173,174,5,111,0,0,
  	174,175,5,97,0,0,175,176,5,116,0,0,176,177,1,0,0,0,177,178,6,11,11,0,
  	178,24,1,0,0,0,179,180,5,118,0,0,180,181,5,111,0,0,181,182,5,105,0,0,
  	182,183,5,100,0,0,183,184,1,0,0,0,184,185,6,12,12,0,185,26,1,0,0,0,186,
  	187,5,40,0,0,187,188,6,13,13,0,188,28,1,0,0,0,189,190,5,41,0,0,190,191,
  	6,14,14,0,191,30,1,0,0,0,192,193,5,123,0,0,193,194,6,15,15,0,194,32,1,
  	0,0,0,195,196,5,125,0,0,196,197,6,16,16,0,197,34,1,0,0,0,198,199,5,91,
  	0,0,199,200,6,17,17,0,200,36,1,0,0,0,201,202,5,93,0,0,202,203,6,18,18,
  	0,203,38,1,0,0,0,204,205,5,59,0,0,205,206,6,19,19,0,206,40,1,0,0,0,207,
  	208,5,44,0,0,208,209,6,20,20,0,209,42,1,0,0,0,210,211,5,58,0,0,211,212,
  	6,21,21,0,212,44,1,0,0,0,213,214,5,103,0,0,214,215,5,111,0,0,215,216,
  	5,116,0,0,216,217,5,111,0,0,217,218,1,0,0,0,218,219,6,22,22,0,219,46,
  	1,0,0,0,220,221,7,3,0,0,221,222,6,23,23,0,222,48,1,0,0,0,223,224,7,4,
  	0,0,224,225,6,24,24,0,225,50,1,0,0,0,226,227,5,43,0,0,227,228,5,43,0,
  	0,228,229,1,0,0,0,229,230,6,25,25,0,230,52,1,0,0,0,231,232,5,45,0,0,232,
  	233,5,45,0,0,233,234,1,0,0,0,234,235,6,26,26,0,235,54,1,0,0,0,236,237,
  	5,33,0,0,237,238,6,27,27,0,238,56,1,0,0,0,239,240,5,60,0,0,240,251,5,
  	61,0,0,241,242,5,61,0,0,242,251,5,61,0,0,243,244,5,62,0,0,244,251,5,61,
  	0,0,245,251,7,5,0,0,246,247,5,33,0,0,247,248,5,61,0,0,248,249,1,0,0,0,
  	249,251,6,28,28,0,250,239,1,0,0,0,250,241,1,0,0,0,250,243,1,0,0,0,250,
  	245,1,0,0,0,250,246,1,0,0,0,251,58,1,0,0,0,252,253,5,38,0,0,253,259,5,
  	38,0,0,254,255,5,124,0,0,255,256,5,124,0,0,256,257,1,0,0,0,257,259,6,
  	29,29,0,258,252,1,0,0,0,258,254,1,0,0,0,259,60,1,0,0,0,260,261,5,61,0,
  	0,261,262,6,30,30,0,262,62,1,0,0,0,263,267,7,6,0,0,264,266,7,7,0,0,265,
  	264,1,0,0,0,266,269,1,0,0,0,267,265,1,0,0,0,267,268,1,0,0,0,268,270,1,
  	0,0,0,269,267,1,0,0,0,270,271,6,31,31,0,271,64,1,0,0,0,272,274,7,8,0,
  	0,273,272,1,0,0,0,274,275,1,0,0,0,275,273,1,0,0,0,275,276,1,0,0,0,276,
  	277,1,0,0,0,277,278,6,32,32,0,278,66,1,0,0,0,279,281,7,8,0,0,280,279,
  	1,0,0,0,281,282,1,0,0,0,282,280,1,0,0,0,282,283,1,0,0,0,283,291,1,0,0,
  	0,284,288,5,46,0,0,285,287,7,8,0,0,286,285,1,0,0,0,287,290,1,0,0,0,288,
  	286,1,0,0,0,288,289,1,0,0,0,289,292,1,0,0,0,290,288,1,0,0,0,291,284,1,
  	0,0,0,291,292,1,0,0,0,292,302,1,0,0,0,293,295,7,9,0,0,294,296,7,3,0,0,
  	295,294,1,0,0,0,295,296,1,0,0,0,296,298,1,0,0,0,297,299,7,8,0,0,298,297,
  	1,0,0,0,299,300,1,0,0,0,300,298,1,0,0,0,300,301,1,0,0,0,301,303,1,0,0,
  	0,302,293,1,0,0,0,302,303,1,0,0,0,303,304,1,0,0,0,304,320,6,33,33,0,305,
  	307,5,46,0,0,306,308,7,8,0,0,307,306,1,0,0,0,308,309,1,0,0,0,309,307,
  	1,0,0,0,309,310,1,0,0,0,310,311,1,0,0,0,311,320,6,33,34,0,312,314,7,8,
  	0,0,313,312,1,0,0,0,314,315,1,0,0,0,315,313,1,0,0,0,315,316,1,0,0,0,316,
  	317,1,0,0,0,317,318,5,46,0,0,318,320,6,33,35,0,319,280,1,0,0,0,319,305,
  	1,0,0,0,319,313,1,0,0,0,320,68,1,0,0,0,20,0,75,87,89,103,105,116,250,
  	258,267,275,282,288,291,295,300,302,309,315,319,36,1,0,0,6,0,0,1,1,1,
  	1,2,2,1,4,3,1,5,4,1,6,5,1,7,6,1,8,7,1,9,8,1,10,9,1,11,10,1,12,11,1,13,
  	12,1,14,13,1,15,14,1,16,15,1,17,16,1,18,17,1,19,18,1,20,19,1,21,20,1,
  	22,21,1,23,22,1,24,23,1,25,24,1,26,25,1,27,26,1,28,27,1,29,28,1,30,29,
  	1,31,30,1,32,31,1,33,32,1,33,33,1,33,34
  };
  staticData->serializedATN = antlr4::atn::SerializedATNView(serializedATNSegment, sizeof(serializedATNSegment) / sizeof(serializedATNSegment[0]));

  antlr4::atn::ATNDeserializer deserializer;
  staticData->atn = deserializer.deserialize(staticData->serializedATN);

  const size_t count = staticData->atn->getNumberOfDecisions();
  staticData->decisionToDFA.reserve(count);
  for (size_t i = 0; i < count; i++) { 
    staticData->decisionToDFA.emplace_back(staticData->atn->getDecisionState(i), i);
  }
  csubset_2205014lexerLexerStaticData = std::move(staticData);
}

}

CSubset_2205014Lexer::CSubset_2205014Lexer(CharStream *input) : Lexer(input) {
  CSubset_2205014Lexer::initialize();
  _interpreter = new atn::LexerATNSimulator(this, *csubset_2205014lexerLexerStaticData->atn, csubset_2205014lexerLexerStaticData->decisionToDFA, csubset_2205014lexerLexerStaticData->sharedContextCache);
}

CSubset_2205014Lexer::~CSubset_2205014Lexer() {
  delete _interpreter;
}

std::string CSubset_2205014Lexer::getGrammarFileName() const {
  return "CSubset_2205014.g4";
}

const std::vector<std::string>& CSubset_2205014Lexer::getRuleNames() const {
  return csubset_2205014lexerLexerStaticData->ruleNames;
}

const std::vector<std::string>& CSubset_2205014Lexer::getChannelNames() const {
  return csubset_2205014lexerLexerStaticData->channelNames;
}

const std::vector<std::string>& CSubset_2205014Lexer::getModeNames() const {
  return csubset_2205014lexerLexerStaticData->modeNames;
}

const dfa::Vocabulary& CSubset_2205014Lexer::getVocabulary() const {
  return csubset_2205014lexerLexerStaticData->vocabulary;
}

antlr4::atn::SerializedATNView CSubset_2205014Lexer::getSerializedATN() const {
  return csubset_2205014lexerLexerStaticData->serializedATN;
}

const atn::ATN& CSubset_2205014Lexer::getATN() const {
  return *csubset_2205014lexerLexerStaticData->atn;
}


void CSubset_2205014Lexer::action(RuleContext *context, size_t ruleIndex, size_t actionIndex) {
  switch (ruleIndex) {
    case 0: LINE_COMMENTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 1: BLOCK_COMMENTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 2: STRINGAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 4: IFAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 5: ELSEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 6: FORAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 7: WHILEAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 8: PRINTLNAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 9: RETURNAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 10: INTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 11: FLOATAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 12: VOIDAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 13: LPARENAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 14: RPARENAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 15: LCURLAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 16: RCURLAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 17: LTHIRDAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 18: RTHIRDAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 19: SEMICOLONAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 20: COMMAAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 21: COLONAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 22: GOTOAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 23: ADDOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 24: MULOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 25: INCOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 26: DECOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 27: NOTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 28: RELOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 29: LOGICOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 30: ASSIGNOPAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 31: IDAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 32: CONST_INTAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;
    case 33: CONST_FLOATAction(antlrcpp::downCast<antlr4::RuleContext *>(context), actionIndex); break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::LINE_COMMENTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 0: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <SINGLE LINE COMMENT> Lexeme "
              + getText()
            );
         break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::BLOCK_COMMENTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 1: 
          // extra braces create a new scope for your variables
          {
            std::string txt = getText();
            std::string content = txt.substr(2, txt.size() - 4);
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <MULTI LINE COMMENT> Lexeme /*"
              + content + "*/"
            );
          }
         break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::STRINGAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 2: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <STRING> Lexeme " + getText()
            );
         break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::IFAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 3:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <IF> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::ELSEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 4:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ELSE> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::FORAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 5:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <FOR> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::WHILEAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 6:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <WHILE> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::PRINTLNAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 7:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <PRINTLN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::RETURNAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 8:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RETURN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::INTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 9:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <INT> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::FLOATAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 10:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <FLOAT> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::VOIDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 11:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <VOID> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::LPARENAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 12:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <LPAREN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::RPARENAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 13:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RPAREN> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::LCURLAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 14:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <LCURL> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::RCURLAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 15:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RCURL> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::LTHIRDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 16:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <LTHIRD> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::RTHIRDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 17:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RTHIRD> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::SEMICOLONAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 18:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <SEMICOLON> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::COMMAAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 19:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <COMMA> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::COLONAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 20:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <COLON> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::GOTOAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 21:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <GOTO> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::ADDOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 22:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ADDOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::MULOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 23:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <MULOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::INCOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 24:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <INCOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::DECOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 25:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <DECOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::NOTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 26:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <NOT> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::RELOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 27:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <RELOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::LOGICOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 28:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <LOGICOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::ASSIGNOPAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 29:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ASSIGNOP> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::IDAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 30:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <ID> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::CONST_INTAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 31:  writeIntoLexLogFile("Line# " + std::to_string(getLine()) + ": Token <CONST_INT> Lexeme " + getText());  break;

  default:
    break;
  }
}

void CSubset_2205014Lexer::CONST_FLOATAction(antlr4::RuleContext *context, size_t actionIndex) {
  switch (actionIndex) {
    case 32: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <CONST_FLOAT> Lexeme " + getText()
            );
         break;
    case 33: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <CONST_FLOAT> Lexeme " + getText()
            );
         break;
    case 34: 
            writeIntoLexLogFile(
              "Line# " + std::to_string(getLine())
              + ": Token <CONST_FLOAT> Lexeme " + getText()
            );
         break;

  default:
    break;
  }
}



void CSubset_2205014Lexer::initialize() {
#if ANTLR4_USE_THREAD_LOCAL_CACHE
  csubset_2205014lexerLexerInitialize();
#else
  ::antlr4::internal::call_once(csubset_2205014lexerLexerOnceFlag, csubset_2205014lexerLexerInitialize);
#endif
}
