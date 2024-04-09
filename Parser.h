#pragma once

#include <string>
#include "TreeNode.h"
#include "Lexer.h"

class Parser {
private:
    Lexer lexer;
    TreeNode* abstract_syntax_tree;
    TreeNode* parseV();
    TreeNode* parseE();
    TreeNode* parseT();
public:
    Parser(const std::string& input);
    void parse();
    bool errorOccurred() const;
    void print() const;
    bool evaluate() const;
};