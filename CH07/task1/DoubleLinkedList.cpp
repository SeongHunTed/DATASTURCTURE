#include <iostream>
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

//교수님 답안과 내 답안이 같다.
bool DLinkedList::Exist(int Item)
{
    NODE *temp = Head;
    while(temp != NULL)
    {
        if(temp->Data == Item)
        {
            return true;
        }
        temp = temp->Next;
    }
    return false;
}

void DLinkedList::Add(int Item)
{
    NODE *temp = new NODE; //c 말록

    temp->Data = Item; //(*p).Data
    temp->Prev = NULL;
    temp->Next = NULL;

    if(Head == NULL)
    {
        Head = temp;
        Tail = temp;
    }
    
    else if(Exist(Item) == true)
    {
        cout << "입력한" << Item << "은 이미 리스트에 등록되어 있습니다." << endl;
    }
    
    else 
    {
        Tail->Next = temp;
        temp->Prev = Tail;
        Tail = temp;
    }
}

/*
교수님의 답안
*TargetItem에 해당하는 노드를 찾아서 없으면 오류 문구 출력 후 바로 반환
*새 노드 생성 후 Item 대입
*TargetItem 노드가 마지막 노드인 경우
*    Tail 멤버 변수에 새 노드의 주소대입
*    새 노드의 Next에 NULL 대입
*    새 노드의 Prev에 TargetItem 노드 주소 대입
*    TargetItem 노드의 Next에 새 노드의 주소를 대입
*TargetItem 노드가 마지막 노드가 아닌 경우
*    새 노드의 Next에 TargetItem 노드에 Next 대입
*    새 노드의 Prev에 TargetItem 노드의 Next의 Prev 주소 대입
*    TargetItem 노드의 Next의 Prev에 새 노드의 주소를 대입
*    TargetItem 노드의 Next에 새 노드의 주소를 대입

NODE *temp = Head;

while(temp != NULL)

*/

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
            newtemp->Prev = temp; //temp->Next->Prev;
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

/*
교수님의 답안
*새 노드 생성 후 Item 대입
*TargetItem 노드가 첫 노드인 경우
*TargetItem 노드가 첫 노드가 아닌경우
*/

void DLinkedList::InsertBefore(int TargetItem, int Item)
{
    NODE *temp = Head;

    while(temp != NULL)
    {   
        if(temp->Data == TargetItem)
        {
            NODE *newtemp = new NODE;
            if(temp == Head)
            {
                newtemp->Data = Item; // Items Daip
                temp->Prev = newtemp; // 
                newtemp->Next = temp;
                newtemp->Prev = NULL;
                Head = newtemp;
                break;
            }
            temp->Prev->Next = newtemp; // 5시간짜리 코드
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

//이부분이 제일 어려운듯
void DLinkedList::Remove(int Item)
{
    if(Head == NULL)
    {
        cout << "비어 있는 리스트 입니다." << endl;
        return ;
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
        cout << temp->Data;
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
        cout << temp->Data;
        temp = temp->Prev;
        if(temp != NULL)
            cout << ", ";
    }
    cout << ")" << endl;
}