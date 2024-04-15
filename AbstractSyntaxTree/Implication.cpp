#include "Implication.h"

Implication::Implication(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void Implication::print() const {
    std::cout << "(";
    left->print();
    std::cout << " -> ";
    right->print();
    std::cout << ")";
}

bool Implication::evaluate() const {
    return !left->evaluate() || right->evaluate();
}