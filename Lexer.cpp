#include "Lexer.h"

Lexer::Lexer(const std::string& input): input(input), pos(0) {}

void Lexer::nextToken() {
    while (pos < input.size() && input[pos] == ' ') {
        pos++;
    }
    if (pos == input.size()) {
        currentToken="";
    }
    else if (input[pos] == '(' || input[pos] == ')' || input[pos] == '&' || input[pos] == 'v' || input[pos] == '!' || input[pos] == 'x') {
        currentToken=std::string(1, input[pos++]);
    }
    else if (input[pos] == '1' || input[pos] == '0') {
        currentToken=std::string(1, input[pos++]);
    }
    else if(pos < input.size()-1 && input[pos] == '-' && input[pos+1] == '>') {
        currentToken="->";
        pos+=2;
    }
    else {
        currentToken="";
    }
}

bool Lexer::hasNextToken() {
    return pos < input.size();
}

std::string Lexer::getCurrentToken() {
    return currentToken;
}

/*TreeNode* Lexer::scanToken() {
    std::string token = nextToken();
    if (token == "") {
        return nullptr;
    }
    if (token == "(") {
        TreeNode* node = scanE();
        if (nextToken() != ")") {
            return nullptr;
        }
        return node;
    }
    if (token == "1") {
        return new Value(true);
    }
    if (token == "0") {
        return new Value(false);
    }
    if (token == "!") {
        return new Not(scanToken());
    }
    if (token == "x") {
        return new Xor(scanToken(), scanToken());
    }
    if (token == "&") {
        return new And(scanToken(), scanToken());
    }
    if (token == "v") {
        return new Or(scanToken(), scanToken());
    }
    return nullptr;
}*/