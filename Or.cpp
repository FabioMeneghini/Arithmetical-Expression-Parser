#include "Or.h"

Or::Or(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void Or::print() {
    std::cout << "(";
    left->print();
    std::cout << " v ";
    right->print();
    std::cout << ")";
}

bool Or::evaluate() {
    return left->evaluate() || right->evaluate();
}