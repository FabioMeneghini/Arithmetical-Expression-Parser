#pragma once

#include "InfixOperator.h"

class Implication: public InfixOperator {
public:
    Implication(TreeNode* left, TreeNode* right);
    void print() const override;
    bool evaluate() const override;
};