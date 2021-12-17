#pragma once
const int MAX = 100;

class QueueByArray
{
private:
    int front, rear;
    int count;
    char Queue[MAX];
public:
    QueueByArray(void);
    ~QueueByArray(void);

    void enQueue(char item);
    char deQueue();
    bool IsEmpty();
    bool IsFull();
    char GetFront();
    int GetSize();
};