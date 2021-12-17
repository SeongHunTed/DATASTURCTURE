#include <iostream>
#include "DoubleLinkedList.h"
using namespace std;

int main()
{
    DLinkedList list1;

    list1.Add(100);
    list1.Add(200);
    list1.Add(300);
    list1.Add(400);
    list1.PrintAllList();

    list1.Remove(200);
    list1.PrintAllListReverse();

    list1.Add(300);

    list1.InsertAfter(200,250);
    list1.InsertAfter(100,200); 
    list1.PrintAllListReverse();
    list1.InsertAfter(400,500); 
    list1.PrintAllListReverse();

    list1.InsertBefore(500,450); //(100,200,300,400,450,500)
    list1.InsertBefore(100,50); //(50,100,200,300,400,450,500)
    list1.PrintAllList(); //(50,100,200,300,400,450,500)
    

    return 0;
}