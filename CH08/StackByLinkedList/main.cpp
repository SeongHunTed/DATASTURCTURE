#include <iostream>
#include "StackByLinkedList.h"
using namespace std;

int main()
{
    StackByLinkedList stack;
    char str[100];

    cout << "거꾸로 출력할 문자를 영문자로 입력하세요." << endl;
    cin >> str;

    for(int i = 0; i<100; i++)
    {
        if(str[i] == '\0')
            break;
        else
            stack.Push(str[i]);
    }

    int count = stack.GetSize();
    for(int i = 0; i < count; i++)
    {
        cout << stack.Pop();
    }

    return 0;
}