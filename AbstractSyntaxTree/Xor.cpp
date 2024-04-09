#include "Xor.h"

Xor::Xor(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void Xor::print() const {
    std::cout << "(";
    left->print();
    std::cout << " x ";
    right->print();
    std::cout << ")";
}

bool Xor::evaluate() const {
    return left->evaluate() ^ right->evaluate();
}