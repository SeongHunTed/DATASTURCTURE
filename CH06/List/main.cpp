#include <iostream>
#include "List.h"

using namespace std;

int main()
{
    List list1;

    list1.Insert(1,100);
    list1.PrintItem();


    list1.Insert(2,300);
    list1.Insert(3,300);
    list1.Insert(4,400);
    list1.PrintItem();

    list1.Insert(2, 500);
    list1.PrintItem();

    cout << list1.Length() << endl;

    list1.Delete(1);
    list1.PrintItem();

    cout << list1.Length() << endl;

    return 0;
    
}