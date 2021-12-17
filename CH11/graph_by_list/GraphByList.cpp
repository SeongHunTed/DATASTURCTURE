#include <iostream>
#include "GraphByList.h"

using namespace std;

GraphByList::GraphByList(void)
{
    totalVertex = 0;
}

GraphByList::~GraphByList(void)
{
    reset();
}

void GraphByList::reset(void)
{
    for(int i = 0; i < totalVertex; i++)
    {
        if(adj[i] != NULL)
            delete adj[i];
    }

    totalVertex = 0;
}

bool GraphByList::isEmpty()
{
    return (totalVertex == 0);
}

bool GraphByList::isFull()
{
    return (totalVertex >= MAX_VERTEX);
}

char GraphByList::getVertex(int i)
{
    return vertices[i];
}

void GraphByList::inserVertex(char val)
{
    if(!isFull())
    {
        vertices[totalVertex] = val;
        adj[totalVertex++] = NULL;
    }
    else
        cout << "Error : 그래프 정점 개수 초과" << endl;
}

void GraphByList::insertEdge(int v1, int v2)
{
    NODE_GRAPH *temp = adj[v1];
    adj[v1] = new NODE_GRAPH;
    adj[v1]->id = v2;
    adj[v1]->link = temp;

    temp = adj[v2];
    adj[v2] = new NODE_GRAPH;
    adj[v2]->id = v1;
    adj[v2]->link = temp;
}

void GraphByList::printGraph()
{
    cout << "Total Vertex : " << totalVertex << endl;

    for(int i = 0; i < totalVertex; i++)
    {
        cout << getVertex(i) << " ";

        for(NODE_GRAPH *v = adj[i]; v!=NULL; v = v->link)
        {
            cout << " " << getVertex(v->id);
        }
        cout <<endl;
    }
}

NODE_GRAPH *GraphByList::adjacent(int v)
{
    return adj[v];
}