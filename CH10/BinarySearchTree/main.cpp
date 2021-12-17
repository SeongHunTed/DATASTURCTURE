#include <iostream>
#include "BinarySearchTree.h"
using namespace std;

void menu();

int main()
{
    BinarySearchTree bst;

    char key[10];
    char choice[2];
    NODE_TREE *foundNode = NULL;

    while(true)
    {
        menu();
        cin >> choice;

        switch(choice[0])
        {
        case '1' :
            cout << "[이진트리 출력] root : ";
            cout << bst.getRoot()->key;
            cout << endl;

            cout << "[이진트리 출력] preorder : ";
            bst.preorder(bst.getRoot());
            cout << endl;

            cout << "[이진트리 출력] inorder : ";
            bst.inorder(bst.getRoot());
            cout << endl;

            cout << "[이진트리 출력] postorder : ";
            bst.postorder(bst.getRoot());
            cout << endl;

            break;

        case '2' :
            cout << "삽입할 숫자를 입력하세요 : ";
            cin >> key;
            bst.insertNode(stoi(key));
            break;
        
        case '3' :
            cout << "삭제할 숫자를 입력하세요 : ";
            cin >> key;
            bst.deleteNode(bst.getRoot(),stoi(key));
            break;
        case '4' :
            cout << "찾을 숫자를 입력하세요 : ";
            cin >> key;

            foundNode = bst.searchBST(bst.getRoot(),stoi(key));

            if(foundNode != NULL)
                cout << endl << foundNode->key << "를 찾았습니다." << endl;
            else
                cout << endl << "숫자를 찾지 못했습니다." << endl;
            break;
        case '5' :
            return 0;
        default:
            cout << endl << "잘 못 선택하셨습니다." << endl;
            break;
        }
    }

    return 0;
}

void menu()
{
    cout << endl << "*-------------------------*";
    cout << endl << "\t1 : 트리 출력";
    cout << endl << "\t2 : 숫자 삽입";
    cout << endl << "\t3 : 숫자 삭제";
    cout << endl << "\t4 : 숫자 검색";
    cout << endl << "\t5 : 종료";
    cout << endl << "*-------------------------*";
    cout << endl << "메뉴입력 >> ";
}