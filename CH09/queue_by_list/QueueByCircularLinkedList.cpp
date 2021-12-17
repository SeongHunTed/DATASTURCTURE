#include <iostream>
#include "QueueByCircularLinkedList.h"
using namespace std;

QueueByCircularLinkedList::QueueByCircularLinkedList(void)
{
    rear = NULL;
}

QueueByCircularLinkedList::~QueueByCircularLinkedList()
{
    while(!IsEmpty())
        deQueue();
}

void QueueByCircularLinkedList::enQueue(char Item)
{
    NODE_QUEUE *newNode = new NODE_QUEUE;
    newNode -> Data = Item;

    if(IsEmpty())
    {
        newNode->Next = newNode;
        rear = newNode;
    }
    else
    {
        newNode->Next = rear->Next;
        rear->Next = newNode;
        rear = newNode;
    }
}

char QueueByCircularLinkedList::deQueue()
{
    if(IsEmpty())
    {
        cout << "큐가 비어 있습니다." << endl;
        return '\0';
    }

    NODE_QUEUE *front = rear->Next;
    char Item = front->Data;

    if(GetSize() >= 2)
        rear->Next = front->Next;
    else
        rear = NULL;
    delete front;
    return Item;
}

bool QueueByCircularLinkedList::IsEmpty()
{
    if(rear == NULL)
        return true;
    else
        return false;
}

char QueueByCircularLinkedList::GetFront()
{
    if(IsEmpty())
    {
        cout << "큐가 비어 있습니다." << endl;
        return '\0';
    }

    return rear->Next->Data;
}

int QueueByCircularLinkedList::GetSize()
{
    if(IsEmpty())
    {
        cout << "큐가 비어 있습니다." << endl;
        return 0;
    }

    int count = 0;
    NODE_QUEUE *temp = rear->Next;

    do
    {
        count++;
        temp = temp->Next;
    } while (temp != rear->Next);

    return count;
}