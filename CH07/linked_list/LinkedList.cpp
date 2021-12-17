#include <iostream>
#include "LinkedList.h"
using namespace std;

CLinkedList::CLinkedList(void)
{
    Head = NULL;
    Tail = NULL;
}

CLinkedList::~CLinkedList(void)
{
    RemoveAll();
}

// 구성요소추가
void CLinkedList::Add(int Item)
{
    NODE *temp = new NODE; //동적으로 새로운 노드 생성

    temp->Data = Item; // temp의 Data에 매개로 받은 Item전달
    temp->Next = NULL; // temp의 Next 포인터에 아무런 값을 넣지 않음

    if(Head == NULL) // 리스트가 아예 없는경우
    {
        Head = temp;
        Tail = temp; //꼬리와 머리는 새로생긴 Temp가 된다
    } else // 리스트에 1개라도 있었던 경우
    {
        Tail->Next =temp; // 마지막 노드가 가르키는 노드가 temp가 됨
        Tail = temp; // 꼬리는 이제 temp임
    }
}

//요소를 제거함

void CLinkedList::Remove(int Item)
{
    if(Head == NULL) // 리스트에 아무것도 존재하지 않는 경우
    {
        cout << "비어 있는 리스트입니다." << endl;
        return; // 프로그램 종료
    }

    NODE *temp = Head;
    NODE *prev = NULL;

    while(temp != NULL && temp->Data != Item)
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
        delete temp;
    } else
    {
        prev->Next = temp ->Next;
        delete temp;
    }
}

void CLinkedList::RemoveLastNode()
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
    }
    else
    {
        prev = Head;
        temp = Head->Next;
        while(temp->Next != NULL)
        {
            prev = temp;
            temp = temp->Next;
        }

        delete temp;
        prev->Next = NULL;
    }
}

void CLinkedList::RemoveAll()
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

int CLinkedList::Count()
{
    int count = 0;
    NODE *temp = Head;
    
    while (temp != NULL)
    {
        count++;
        temp = temp->Next;
    }
    return count;
}

void CLinkedList::PrintAllList()
{
    cout << "List = (";
    NODE *temp = Head;

    while(temp != NULL)
    {
        cout << temp->Data;
        temp = temp->Next;

        if(temp != NULL)
            cout << ", ";

    }
    cout << ")" << endl;
}

