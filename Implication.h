#pragma once

#include "InfixOperator.h"

class Implication: public InfixOperator {
public:
    Implication(TreeNode* left, TreeNode* right);
    void print() override;
    bool evaluate() override;
};