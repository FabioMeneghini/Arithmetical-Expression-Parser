#include "And.h"

And::And(TreeNode* left, TreeNode* right): InfixOperator(left, right) {}

void And::print() {
    std::cout << "(";
    left->print();
    std::cout << " & ";
    right->print();
    std::cout << ")";
}