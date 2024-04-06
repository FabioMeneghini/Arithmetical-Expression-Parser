#include "Xor.h"

Xor::Xor(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void Xor::print() {
    std::cout << "(";
    left->print();
    std::cout << " xv ";
    right->print();
    std::cout << ")";
}