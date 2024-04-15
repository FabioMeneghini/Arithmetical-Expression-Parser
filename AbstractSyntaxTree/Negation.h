#pragma once

#include "PrefixOperator.h"

class Negation: public PrefixOperator {
public:
    Negation(TreeNode* arg);
    void print() const override;
    bool evaluate() const override;
};