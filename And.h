#pragma once

#include "InfixOperator.h"

class And: public InfixOperator {
public:
    And(TreeNode* left, TreeNode* right);
    void print() override;
};