#include "Negation.h"

Negation::Negation(TreeNode* arg): PrefixOperator(arg) {}

void Negation::print() const {
    std::cout << "(!";
    arg->print();
    std::cout << ")";
}

bool Negation::evaluate() const {
    return !arg->evaluate();
}