#include <iostream>
#include "List.h"

using namespace std;

List::List()
{
    Count = 0;
}

List::~List() {}

void List::Insert(int Position, int Item)
{
    if(Count == MAX)
        cout << "List is full !" << endl;
    else if(Position > Count + 1 || Position < 1)
        cout << "Position is out of range" << endl;
    else
    {
        for(int i = Count - 1; i>= Position -1; i--)
        {
            Data[i+1] = Data[i];
        }
        Data[Position - 1] = Item;

        Count++;
    }
}

void List::Delete(int Position)
{
    if(Position < 1 || Position > Count)
        cout << "Position is out of range!" << endl;
    else
    {
        for(int i = Position; i<Count; i++)
        {
            Data[i-1] = Data[i];
        }
        Count--;
    }
}

void List::Retrieve(int Position, int *ItemPtr)
{
    if(Position < 1 || Position > Count)
        cout << "Position is out of range!" << endl;
    else
        *ItemPtr = Data[Position -1];
}

bool List::IsEmpty()
{
    return (Count == 0);
}

int List::Length()
{
    return Count;
}

void List::PrintItem()
{
    if(Count < 1)
        cout << "Empty List!" << endl;
    else
    {
        cout << "Position\tData" << endl;

        for(int i = 0; i < Count; i++)
        {
            cout << i+1 << "\t" << Data[i] << endl;
        }

        cout << "End of the List" << endl;
    }
}