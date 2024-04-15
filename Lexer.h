#pragma once

#include <string>
#include "AbstractSyntaxTree/TreeNode.h"

class Lexer {
private:
    std::string input;
    unsigned int pos;
    std::string currentToken;
public:
    Lexer(const std::string& input);
    void nextToken();
    bool hasNextToken() const;
    //TreeNode* scanToken();
    std::string getCurrentToken() const;
    std::string getInput() const;
};