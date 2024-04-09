#include <iostream>
#include <string>
#include "Lexer.h"
#include "Parser.h"
#include "TreeNode.h"

int main() {
    std::string input="(0v1)&1 -> ((!!1 & !0) -> 1)";

    Parser parser(input);
    //parser.parse();

    if (parser.errorOccurred()) {
        std::cout << "Invalid input" << std::endl;
    } else {
        parser.print();
        std::cout << std::endl << parser.evaluate() << std::endl;
    }

    return 0;
}