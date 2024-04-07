#pragma once

#include <string>
#include "TreeNode.h"

class Lexer {
private:
    std::string input;
    unsigned int pos;
    std::string currentToken;
public:
    Lexer(const std::string& input);
    void nextToken();
    bool hasNextToken();
    //TreeNode* scanToken();
    std::string getCurrentToken();
};