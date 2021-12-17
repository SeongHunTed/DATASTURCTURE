#pragma once

const int MAX_VERTEX = 20;

class GraphByMatrix
{
private:
    int matrix[MAX_VERTEX][MAX_VERTEX];
    int totalVertex;

public:
    GraphByMatrix(void);
    ~GraphByMatrix(void);

    void insertVertex(int v);
    void insertEdge(int v1, int v2);
    void printGraph();
};