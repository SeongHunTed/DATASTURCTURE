#include <iostream>
#include "BinaryTree.h"
using namespace std;

BinaryTree::BinaryTree(void)
{
    root = NULL;
}

BinaryTree::~BinaryTree(void)
{
    deleteNode(root);
}

void BinaryTree::setRoot(NODE_TREE *node)
{
    root = node;
    cout << "root is " << node->key << " node" << endl;
}

NODE_TREE *BinaryTree::getRoot()
{
    return root;
}

NODE_TREE *BinaryTree::makeNode(
    element item,
    NODE_TREE *left,
    NODE_TREE *right
)
{
    NODE_TREE *temp = new NODE_TREE;
    temp->key = item;
    temp->left = left;
    temp->right = right;

    cout << "create " << temp->key << " node" << endl;

    return temp;
}

bool BinaryTree::isEmpty()
{
    return root == NULL;
}

void BinaryTree::preorder(NODE_TREE *node)
{
    if(node != NULL)
    {
        cout << ' ' << node->key;
        preorder(node->left);
        preorder(node->right);
    }
}

void BinaryTree::inorder(NODE_TREE *node)
{
    if(node != NULL)
    {
        inorder(node->left);
        cout << ' ' << node->key;
        inorder(node->right);
    }
}

void BinaryTree::postorder(NODE_TREE *node)
{
    if(node != NULL)
    {
        postorder(node->left);
        postorder(node->right);
        cout << ' ' << node->key;
    }
}

int BinaryTree::getCount(NODE_TREE *node)
{
    if(node == NULL)
        return 0;
    
    return 1+getCount(node->left) + getCount(node->right);
}

int BinaryTree::getHeight(NODE_TREE *node)
{
    if(node == NULL)
        return 0;
    int hLeft = getHeight(node->left);
    int hRight = getHeight(node->right);

    return (hLeft > hRight) ? hLeft+1 : hRight+1;
}

int BinaryTree::getLeafCount(NODE_TREE *node)
{
    if(node == NULL)
        return 0;
    if(node->left == NULL && node->right == NULL)
        return 1;
    else
        return getLeafCount(node->left) + getLeafCount(node->right);
}

void BinaryTree::deleteNode(NODE_TREE *node)
{
    if(node != NULL)
    {
        deleteNode(node->left);
        deleteNode(node->right);
        cout << "delete " << node->key << " node" << endl;
    }
}