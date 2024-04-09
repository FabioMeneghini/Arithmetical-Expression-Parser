#pragma once

#include <iostream>

class TreeNode {
public:
    virtual void print() const = 0;
    virtual bool evaluate() const = 0;
};