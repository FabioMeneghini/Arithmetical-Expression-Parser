#include "Xor.h"

Xor::Xor(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void Xor::print() {
    std::cout << "(";
    left->print();
    std::cout << " x ";
    right->print();
    std::cout << ")";
}

bool Xor::evaluate() {
    return left->evaluate() ^ right->evaluate();
}