#include <iostream>
#include "LinkedList.h"
using namespace std;

int main()
{
    CLinkedList list1;

    list1.Add(100);
    list1.Add(200);
    list1.Add(300);
    list1.Add(400);

    list1.PrintAllList();

    list1.Remove(200);
    list1.PrintAllList();

    list1.RemoveLastNode();
    list1.PrintAllList();

    cout << "현재 리스트 크기 : " << list1.Count() << endl;

    list1.RemoveAll();
    list1.PrintAllList();

    return 0;
}