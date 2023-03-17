#pragma once
#include <string>
#include <vector>
#include <initializer_list>

using namespace std;

class Sort
{
public:
    // date membre
    std::vector<int> x;

public:
    // constuctors
    Sort(int, int, int); 
    Sort(initializer_list<int> list) : x(list) {}      
    Sort(int v[], int nr);     
    Sort(int, ...);      
    Sort(std::string);   
    // metode
    void InsertSort(bool ascendent);
    //void QuickSort(int,int,bool ascendent);
    void BubbleSort(bool ascendent);
    void Print();
    int  GetElementsCount();
    int  GetElementFromIndex(int index);
    //int partition(int start, int end, bool ascendent);
    void QuickSort(int li, int ls, bool ascendent = false);
    int partition(int li, int ls, int pivot, bool ascendent = false);

};
