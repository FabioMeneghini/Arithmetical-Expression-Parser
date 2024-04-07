#pragma once

#include "PrefixOperator.h"

class Negation: public PrefixOperator {
public:
    Negation(TreeNode* arg);
    void print() override;
    bool evaluate() override;
};