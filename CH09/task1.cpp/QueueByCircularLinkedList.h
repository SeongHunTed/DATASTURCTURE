#pragma once

typedef struct node
{
    int Data;
    node *Next;
} NODE_QUEUE;

class QueueByCircularLinkedList
{
private:
    NODE_QUEUE *rear;
public:
    QueueByCircularLinkedList(void);
    ~QueueByCircularLinkedList(void);
    void enQueue(int Item);
    int deQueue();
    bool IsEmpty();
    int GetFront();
    int GetSize();
};