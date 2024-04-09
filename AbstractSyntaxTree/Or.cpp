#include "Or.h"

Or::Or(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void Or::print() const {
    std::cout << "(";
    left->print();
    std::cout << " v ";
    right->print();
    std::cout << ")";
}

bool Or::evaluate() const {
    return left->evaluate() || right->evaluate();
}