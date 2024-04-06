#include "Implication.h"

Implication::Implication(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void Implication::print() {
    std::cout << "(";
    left->print();
    std::cout << " -> ";
    right->print();
    std::cout << ")";
}