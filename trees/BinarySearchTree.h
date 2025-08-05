#pragma once
#include <iostream>
#include <iomanip>
#include <string>
#include "Node.h"

class BinarySearchTree
{
public:
    BinarySearchTree();
    ~BinarySearchTree();
    bool Insert(int value);

    void PrintTree(Node *node, int space = 0, int indent = 6) const;

    void Clear(Node *node);

    Node *m_pRoot;
};