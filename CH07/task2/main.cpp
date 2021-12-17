#include <iostream>
#include <string>
#include "DoubleLinkedList.h"
using namespace std;

int main()
{
    string i = "yes";
    DLinkedList *list = new DLinkedList;

    while(i == "yes")
    {
        char name[14] = {0};
        char phone[20] = {0};

        cout << "이름을 입력해주세요 ";
        cin >> name;
        cout << "번호를 입력해주세요 ";
        cin >> phone;

        list->Add(name, phone);

        cout << "추가하시겠습니까? yes or no";
        cin >> i;

    }

    list->PrintAllList();
    

    
    
    
    delete list;
    return 0;
}