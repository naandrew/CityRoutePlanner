#ifndef MINHEAP_H
#define MINHEAP_H
#include <iostream>
using namespace std;

class minHeap{
    private:
    int* ar;
    int cap;
    int num;
    public:
    minHeap(int c);
    ~minHeap() {if(ar)delete[] ar;};
    int size() const {return num;}
    bool empty() const {return num == 0 ? true : false;}
    void insert(int e);
    void minHeapify(int* curDist, int* locator, int i);
    void bubbleUp(int* curDist, int* locator, int i);
    void remove(int* curDist, int* locator, int i);
    int getMin(int* curDist, int* locator);
    void fixHeap(int* curDist, int* locator, int i);
    class Overflow{};
    class BadIndex{};
};


#endif