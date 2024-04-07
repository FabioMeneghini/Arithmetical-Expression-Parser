#pragma once

#include "TreeNode.h"

class Value: public TreeNode {
private:
    bool value;
public:
    Value(bool value);
    void print() override;
    bool evaluate() override;
};