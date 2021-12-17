#include <iostream>
#include "BinarySearchTree.h"
using namespace std;


//p에 루트노드 대입 매개변수 NODE_TREE *node가 루트노드
//x가 키값
NODE_TREE *BinarySearchTree::searchBST(NODE_TREE *node, element x)
{
    NODE_TREE *temp = node;

    if(temp == NULL)
    {   
        return 0;
    }
    if(temp->key == x)
        return temp;
    if(x < temp->key)
        return searchBST(temp->left, x);
    else
        return searchBST(temp->right, x);
}

void BinarySearchTree::insertNode(element x)
{
    NODE_TREE *temp = root;
    NODE_TREE *parent = NULL; //부모노드 저장

    while(temp != NULL)
    {
        if( x == temp->key)
            return;
        else if( x < temp->key)
        {
            parent = temp;
            temp = temp->left;
        } else
        {
            parent = temp;
            temp = temp->right;
        }
    }

    //교수님 저는 왜 구현되있는걸 쓰는게 더 어려울까요..
    //이전에 보내드렸던 코드가 왠지 더 깔끔해보입니다.
    BinarySearchTree bt;
    NODE_TREE *newnode = bt.makeNode(x,NULL, NULL);

    if(root == NULL)
    {
        root = newnode;
    }
    else if( x < parent->key )
        parent->left = newnode;
    else
        parent->right = newnode;
}

void BinarySearchTree::deleteNode(NODE_TREE *node, element x)
{

}