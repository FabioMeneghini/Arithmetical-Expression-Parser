#pragma once

#include "InfixOperator.h"

class Xor: public InfixOperator {
public:
    Xor(TreeNode* left, TreeNode* right);
    void print() const override;
    bool evaluate() const override;
};