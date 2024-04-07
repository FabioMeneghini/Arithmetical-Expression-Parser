#include <iostream>
#include <string>
#include "Lexer.h"

int main() {
    std::string input="(1 & 0) v (1 & 1)";
    Lexer lexer(input);

    return 0;
}