#pragma once

#include "TreeNode.h"

class InfixOperator: public TreeNode {
protected:
    TreeNode* left;
    TreeNode* right;
public:
    InfixOperator(TreeNode* left, TreeNode* right);
};