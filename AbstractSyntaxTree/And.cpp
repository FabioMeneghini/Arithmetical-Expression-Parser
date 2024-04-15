#include "And.h"

And::And(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void And::print() const {
    std::cout << "(";
    left->print();
    std::cout << " & ";
    right->print();
    std::cout << ")";
}

bool And::evaluate() const {
    return left->evaluate() && right->evaluate();
}