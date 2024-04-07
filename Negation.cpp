#include "Negation.h"

Negation::Negation(TreeNode* arg): PrefixOperator(arg) {}

void Negation::print() {
    std::cout << "(!";
    arg->print();
    std::cout << ")";
}

bool Negation::evaluate() {
    return !arg->evaluate();
}