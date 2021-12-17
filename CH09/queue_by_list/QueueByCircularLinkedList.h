#pragma once

typedef struct node
{
    char Data;
    node *Next;
} NODE_QUEUE;

class QueueByCircularLinkedList
{
private:
    NODE_QUEUE *rear;
public:
    QueueByCircularLinkedList(void);
    ~QueueByCircularLinkedList(void);
    void enQueue(char Item);
    char deQueue();
    bool IsEmpty();
    char GetFront();
    int GetSize();
};