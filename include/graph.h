#ifndef GRAPH_H
#define GRAPH_H
#include <iostream>
#include <list>
#include <queue>
using namespace std;

class edge{
    friend class graph;
    private:
    int neighbor;
    int wt;
    public:
    edge(int u, int w) {neighbor = u; wt = w;};
};

class graph{
    private:
    list<edge*>* ver_ar;
    int num_ver;
    int nextUnvisitedNode(int* num, int start, int s);
    void DFT_Helper(int v, int& i, int* num, queue<string>& edges);
    public:
    graph(int v);
    ~graph();
    void addEdge(int v, int u, int w = 1);
    void DFT(int start);
    void BFT(int start);
    void DijkstraShortestPath(int* curDist, int* predecessor, int start);
};


#endif