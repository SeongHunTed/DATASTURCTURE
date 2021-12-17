#include <iostream>
#include "StackByLinkedList.h"
using namespace std;

StackByLinkedList::StackByLinkedList(void)
{
    Top = NULL;
}

StackByLinkedList::~StackByLinkedList(void)
{
    while(!IsEmpty())
    {
        Pop();
    }
}

void StackByLinkedList::Push(char Item)
{
    NODE *newTop = new NODE;
    newTop->Data = Item;
    newTop->Next = Top;
    Top = newTop;
}

char StackByLinkedList::Pop()
{
    if(IsEmpty())
    {
        cout << "리스트가 비어 있습니다." << endl;
        return '\0';
    }
    else
    {
        NODE *temp = Top;
        Top = Top->Next;

        char Item = temp->Data;
        delete temp;
        return Item;
    }
}

bool StackByLinkedList::IsEmpty()
{
    return (Top == NULL);
}

char StackByLinkedList::GetTop()
{
    return (Top != NULL) ? Top->Data : '\0';
}

int StackByLinkedList::GetSize()
{
    int count = 0;
    NODE *temp = Top;

    while(temp != NULL)
    {
        count++;
        temp = temp->Next;
    }

    return count;
}