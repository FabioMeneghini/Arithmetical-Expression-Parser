#include "Lexer.h"

Lexer::Lexer(const std::string& input): input(input), pos(0) {}

std::string Lexer::nextToken() {
    while (pos < input.size() && input[pos] == ' ') {
        pos++;
    }
    if (pos == input.size()) {
        return "";
    }
    if (input[pos] == '(' || input[pos] == ')' || input[pos] == '&' || input[pos] == 'v' || input[pos] == '!' || input[pos] == 'x') {
        return std::string(1, input[pos++]);
    }
    if (input[pos] == '1' || input[pos] == '0') {
        return std::string(1, input[pos++]);
    }
    return "";
}

bool Lexer::hasNextToken() {
    return pos < input.size();
}