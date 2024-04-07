#pragma once

#include <string>

class Lexer {
private:
    std::string input;
    unsigned int pos;
public:
    Lexer(const std::string& input);
    std::string nextToken();
    bool hasNextToken();
};