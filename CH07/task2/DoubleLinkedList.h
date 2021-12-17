#pragma once

typedef struct nodeData
{
    char name[20]; //name 
    char phone[14]; // number
} NODE_DATA;

typedef struct nodeRecord
{
    struct nodeRecord *Prev;
    NODE_DATA Data;
    struct nodeRecord *Next;
} NODE;

class DLinkedList
{
private:
    NODE *Head, *Tail;
public:
    DLinkedList(void);
    ~DLinkedList(void);

    void Add(char name[], const char phone[]);
    void Remove(char phone[]);
    void RemoveLastNode();
    void RemoveAll();
    bool Exist(char name[]);
    void InsertAfter(int TargetItem, int Item);
    void InsertBefore(int TargetItem, int Item);
    int Count();
    
    void PrintAllList();

    void PrintAllListReverse();

};