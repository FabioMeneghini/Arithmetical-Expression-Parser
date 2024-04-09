#pragma once

#include <string>
#include "AbstractSyntaxTree/TreeNode.h"
#include "Lexer.h"

class Parser {
private:
    Lexer lexer;
    TreeNode* abstract_syntax_tree;
    TreeNode* parseV();
    TreeNode* parseE();
    TreeNode* parseT();
    bool checkParentheses() const;
public:
    Parser(const std::string& input);
    void parse();
    bool errorOccurred() const;
    void print() const;
    bool evaluate() const;
};