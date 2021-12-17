#include <iostream>
#include "GraphByMatrix.h"

using namespace std;

GraphByMatrix::GraphByMatrix(void)
{   

    totalVertex = 0;

    for(int i = 0; i < MAX_VERTEX; i++)
        for(int j = 0; j < MAX_VERTEX; j++)
            matrix[i][j] = 0;
}

GraphByMatrix::~GraphByMatrix(void)
{
}

void GraphByMatrix::insertVertex(int v)
{
    totalVertex++;
}

void GraphByMatrix::insertEdge(int v1, int v2)
{
    if(v1 >= totalVertex || v2 >= totalVertex)
    {
        cout << "그래프에 없는 정점입니다.";
    }
    else
    {
        matrix[v1][v2] = 1;
        matrix[v2][v1] = 1;
    }
}

void GraphByMatrix::printGraph()
{
    for(int i = 0; i < totalVertex; i++)
    {
        cout << "\n\t";
        for(int j = 0; j < totalVertex; j++)
            cout << matrix[i][j] << " ";
    }
}