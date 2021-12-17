#include <iostream>
#include <cstring>
#include "DoubleLinkedList.h"
using namespace std;

DLinkedList::DLinkedList(void)
{
    Head = NULL;
    Tail = NULL;
}

DLinkedList::~DLinkedList(void)
{
    RemoveAll();
}

/*
bool DLinkedList::Exist(char name[])
{
    NODE *temp = Head;
    while(temp != NULL)
    {
        if(strcpy(temp->Data.name, name))
        {
            return true;
        }
        temp = temp->Next;
    }
    return false;
}
*/

void DLinkedList::Add(char name[], const char phone[])
{
    NODE *temp = new NODE;

    strcpy(temp->Data.name, name);
    strcpy(temp->Data.phone, phone);
    temp->Prev = NULL;
    temp->Next = NULL;

    if(Head == NULL)
    {
        Head = temp;
        Tail = temp;
    }
    /*
    else if(Exist(name) == true)
    {
        cout << "입력한" << name << "은 이미 리스트에 등록되어 있습니다." << endl;
    }
    */
    else 
    {
        Tail->Next = temp;
        temp->Prev = Tail;
        Tail = temp;
    }
}
/*
void DLinkedList::InsertAfter(int TargetItem, int Item)
{
    NODE *temp = Head;
    
    while(temp != NULL) 
    {
        if(temp->Data == TargetItem)
        {   
            NODE *newtemp = new NODE;
            if(temp != Tail)
            {
                temp->Next->Prev = newtemp;
            }
            newtemp->Data = Item;
            newtemp->Next = temp->Next;
            newtemp->Prev = temp;
            temp->Next = newtemp;
            
            break;
        }
        temp = temp->Next; //다음노드로 간다.
    }
    
    if(temp == NULL)
    {
        cout << "현재 리스트에 " << TargetItem << "이 없습니다." << endl;
    }
}

void DLinkedList::InsertBefore(int TargetItem, int Item)
{
    NODE *temp = Head;

    while(temp != NULL)
    {   
        if(temp->Data == TargetItem)
        {
            NODE *newtemp = new NODE;
            newtemp->Data = Item; // 새 노드에 Item 대입
            newtemp->Prev = temp->Prev; // 새 노드의 좌측 노드 설정
            newtemp->Next = temp; // 새 노드의 우측 노드 설정
            temp->Prev = newtemp; // 기존 노드의 좌측노드를 새 노드로 설정
            break;
        }
        temp = temp->Next;
    }
    if(temp == NULL)
    {
        cout << "현재 리스트에 " << TargetItem << "이 없습니다." << endl;
    }
}
*/

//이부분이 제일 어려운듯
void DLinkedList::Remove(char phone[])
{
    if(Head == NULL)
    {
        cout << "비어 있는 리스트 입니다." << endl;
        return ;
    }
    NODE *temp = Head;
    NODE *prev = NULL;

    while(temp != NULL && !strcmp(temp->Data.phone, phone))
    {
        prev = temp;
        temp = temp->Next;
    }

    if(temp == NULL)
    {
        cout << "삭제할 노드가 없습니다." << endl;
        return;
    }

    if(prev == NULL)
    {
        Head = Head->Next;
        Head->Prev = NULL;
        delete temp;
    } else
    {
        prev->Next = temp->Next;

        if(temp->Next != NULL)
            temp->Next->Prev = prev;
        
        delete temp;
    }
}

void DLinkedList::RemoveLastNode()
{
    if(Head == NULL)
    {
        cout << "비어 있는 리스트입니다." << endl;
        return;
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    if(Head->Next == NULL)
    {
        delete Head;
        Head = NULL;
        return;
    } else
    {
        prev = Tail->Prev;
        prev->Next = NULL;

        delete Tail;
        Tail = prev;
    }
}

void DLinkedList::RemoveAll()
{
    NODE *temp = Head;

    while(Head != NULL)
    {
        temp = Head;
        Head = Head->Next;
        delete temp;
        temp = NULL;
    }

    Tail = NULL;
}

int DLinkedList::Count()
{
    int count = 0;
    NODE *temp = Head;

    while(temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

void DLinkedList::PrintAllList()
{
    cout << "List = (";
    NODE *temp = Head;

    while(temp != NULL)
    {
        cout << temp->Data.name << " : ";
        cout << temp->Data.phone;
        temp = temp->Next;
        if(temp != NULL)
            cout << ", ";
    }

    cout << ")" << endl;
}

void DLinkedList::PrintAllListReverse()
{
    cout << "Reverse List = (";
    NODE *temp = Tail;

    while(temp != NULL)
    {
        cout << temp->Data.name << " : ";
        cout << temp->Data.phone;
        temp = temp->Prev;
        if(temp != NULL)
            cout << ", ";
    }
    cout << ")" << endl;
}