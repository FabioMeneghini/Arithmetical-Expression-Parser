#pragma once

#include <iostream>

class TreeNode {
public:
    virtual void print() = 0;
    virtual bool evaluate() = 0;
};