#include <iostream>
#include "GraphByList.h"

using namespace std;

int main()
{
    GraphByList G;

    for(int i = 0; i<4; i++)
    {
        G.inserVertex('A' + i);
    }

    G.insertEdge(0, 1);
    G.insertEdge(0, 3);
    G.insertEdge(1, 2);
    G.insertEdge(1, 3);
    G.insertEdge(2, 3);

    cout << "인접 리스트로 표현한 그래프" << endl;

    G.printGraph();

    return 0;
}