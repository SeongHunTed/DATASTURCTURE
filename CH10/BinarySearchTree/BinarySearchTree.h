#pragma once
#include "BinaryTree.h"

class BinarySearchTree : public BinaryTree
{
public:
    NODE_TREE *searchBST(NODE_TREE *node, element x);
    void insertNode(element x);
    void deleteNode(NODE_TREE *node, element x);
};