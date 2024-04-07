#pragma once

#include <string>
#include "TreeNode.h"
#include "Lexer.h"

class Parser {
private:
    Lexer lexer;
public:
    Parser(const std::string& input);
    TreeNode* parseV();
    TreeNode* parseE();
    TreeNode* parseT();
};