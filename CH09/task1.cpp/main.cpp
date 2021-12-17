#include <iostream>
#include "QueueByCircularLinkedList.h"
using namespace std;

int main()
{
    const int N = 41;
    const int M = 3;

    QueueByCircularLinkedList Q;

    for(int i = 1; i<=N; i++)
    {
        Q.enQueue(i);
    }

    while(true)
    {
        for(int i = 1; i<M; i++)
        {
            Q.enQueue(Q.deQueue());
        }
        cout << Q.deQueue() << endl;

        if(Q.GetSize() == M-1)
        {
            break;
        }
    }
    cout << "마지막 생존자가 앉은 자리의 번호는 ";
    while(!Q.IsEmpty())
    {
        cout << Q.deQueue();

        if(!Q.IsEmpty())
            cout << ", ";
    }
    cout << " 입니다.";
    

    return 0;
}