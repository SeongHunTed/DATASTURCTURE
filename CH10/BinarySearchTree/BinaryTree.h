#pragma once

typedef int element;

typedef struct treeNode
{
    element key;
    treeNode *left;
    treeNode *right;
} NODE_TREE;

class BinaryTree
{
protected:
    NODE_TREE *root;
public:
    BinaryTree(void);
    ~BinaryTree(void);

    void setRoot(NODE_TREE *node);
    NODE_TREE *getRoot();
    NODE_TREE *makeNode(
        element item,
        NODE_TREE *left = NULL,
        NODE_TREE *right = NULL
    );
    bool isEmpty();
    void preorder(NODE_TREE *node);
    void inorder(NODE_TREE *node);
    void postorder(NODE_TREE *node);

    int getCount(NODE_TREE *node);
    int getHeight(NODE_TREE *node);
    int getLeafCount(NODE_TREE *node);

    void deleteNode(NODE_TREE *node);
};