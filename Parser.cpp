#include "Parser.h"
#include "AbstractSyntaxTree/Value.h"
#include "AbstractSyntaxTree/Or.h"
#include "AbstractSyntaxTree/Xor.h"
#include "AbstractSyntaxTree/And.h"
#include "AbstractSyntaxTree/Implication.h"
#include "AbstractSyntaxTree/Negation.h"

Parser::Parser(const std::string& input): lexer(input), abstract_syntax_tree(nullptr) {
    parse();
}

void Parser::parse() {
    lexer.nextToken();
    abstract_syntax_tree=parseE();
}

bool Parser::checkParentheses() const {
    int count=0;
    for(unsigned int i=0; i<lexer.getInput().size(); i++) {
        if(lexer.getInput()[i] == '(')
            count++;
        else if(lexer.getInput()[i] == ')')
            count--;
        if(count < 0)
            return false;
    }
    if(count == 0)
        return true;
    else
        return false;
}

bool Parser::errorOccurred() const {
    if(checkParentheses() && abstract_syntax_tree != nullptr)
        return false;
    else
        return true;
}

void Parser::print() const {
    abstract_syntax_tree->print();
}

bool Parser::evaluate() const {
    return abstract_syntax_tree->evaluate();
}

// V ->  0  |  1  |  (E)  |  !V
TreeNode* Parser::parseV() {
    std::string token = lexer.getCurrentToken();
    if(token == "1") {
        lexer.nextToken();
        return new Value(true);
    }
    else if(token == "0") {
        lexer.nextToken();
        return new Value(false);
    }
    else if(token == "(") {
        lexer.nextToken();
        TreeNode* node = parseE();
        if(node == nullptr)
            return nullptr;
        if(lexer.getCurrentToken() != ")")
            return nullptr;
        else {
            lexer.nextToken();
            return node;
        }
    }
    else if(token == "!") {
        lexer.nextToken();
        TreeNode* node = parseV();
        if(node == nullptr)
            return nullptr;
        else
            return new Negation(node);
    }
    else
        return nullptr;
}

// E ->  T  |  T -> E
TreeNode* Parser::parseE() {
    TreeNode* a = parseT();
    if(a == nullptr)
        return nullptr;
    
    if(lexer.getCurrentToken() == "->") {
        lexer.nextToken();
        TreeNode* b = parseE();
        if(b == nullptr)
            return nullptr;
        TreeNode* c = new Implication(a, b);
        return c;
    }
    else
        return a;
}


// T ->  V & T  |  V v T  |  V x T  |   V
TreeNode* Parser::parseT() {
    TreeNode* a = parseV();
    if(a == nullptr)
        return nullptr;
    
    if(lexer.getCurrentToken() == "&") {
        lexer.nextToken();
        TreeNode* b = parseT();
        if(b == nullptr)
            return nullptr;
        TreeNode* c = new And(a, b);
        return c;
    }
    else if(lexer.getCurrentToken() == "v") {
        lexer.nextToken();
        TreeNode* b = parseT();
        if(b == nullptr)
            return nullptr;
        TreeNode* c = new Or(a, b);
        return c;
    }
    else if(lexer.getCurrentToken() == "x") {
        lexer.nextToken();
        TreeNode* b = parseT();
        if(b == nullptr)
            return nullptr;
        TreeNode* c = new Xor(a, b);
        return c;
    }
    else
        return a;
}