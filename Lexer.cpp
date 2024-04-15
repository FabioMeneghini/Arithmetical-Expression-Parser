#include "Lexer.h"

Lexer::Lexer(const std::string& input): input(input), pos(0) {}

std::string Lexer::getInput() const {
    return input;
}

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

bool Lexer::hasNextToken() const {
    return pos < input.size();
}

std::string Lexer::getCurrentToken() const {
    return currentToken;
}