#pragma once

const int MAX = 100;

class List
{
    int Count;
    int Data[MAX];
public:
    List();
    ~List();

    void Insert(int Position, int Item);
    void Delete(int Position);
    void Retrieve(int Position, int *ItemPtr);

    bool IsEmpty();
    int Length();

    void PrintItem();
    
};