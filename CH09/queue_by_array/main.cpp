#include <iostream>
#include "StackByLinkedList.h"
#include "QueueByArray.h"
using namespace std;

bool testMatched(char[]);

int main()
{
    char str[MAX];

    while(true)
    {
        cout << "회문 검사할 문자열을 영문자열로 입력하세요." << endl;
        cout << "'0'을 입력하면 프로그램이 종료됩니다." << endl;

        cin >> str;

        if(str[0] == '0')
            return 0;
        cout << testMatched(str) << endl;
    }
    return 0;
}

bool testMatched(char str[])
{
    StackByLinkedList stack;
    QueueByArray queue;

    for(int i = 0; i < MAX; i++)
    {
        if(str[i] == '\0')
            break;
        else
        {
            stack.Push(str[i]);
            queue.enQueue(str[i]);
        }
    }

    while(!stack.IsEmpty())
    {
        if(stack.Pop() != queue.deQueue())
            return false;
    }

    return true;
}