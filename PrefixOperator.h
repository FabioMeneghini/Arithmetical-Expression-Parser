#pragma once

#include "TreeNode.h"

class PrefixOperator: public TreeNode {
protected:
    TreeNode* arg;
public:
    PrefixOperator(TreeNode* arg);
};