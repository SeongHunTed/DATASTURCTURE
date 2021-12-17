#pragma once

typedef struct nodeRecord
{
    char Data;
    nodeRecord *Next;
} NODE;

class StackByLinkedList
{
private:
    NODE *Top;
public:
    StackByLinkedList(void);
    ~StackByLinkedList(void);
    void Push(char Item);
    char Pop();
    bool IsEmpty();
    char GetTop();
    int GetSize();
};
