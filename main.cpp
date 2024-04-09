#include <iostream>
#include <string>
#include "Parser.h"

int main() {
    std::string input="(0 v 1) & 1 -> ((!!1 & !0) -> 1) x 1";

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