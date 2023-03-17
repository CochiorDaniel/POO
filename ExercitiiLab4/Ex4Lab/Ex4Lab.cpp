#include "Sort.h"
#include <iostream>
#include <string>

using namespace std;

int main()
{
    Sort vec1(11, 0, 12);
    vec1.Print();
    cout << vec1.GetElementsCount() << "\n";
    cout << vec1.GetElementFromIndex(0) << "\n";
    vec1.BubbleSort(false);
    vec1.Print();


    int v[] = { 2,6,1,7,9,32,1,4,56 };
    Sort vec2(v, 9);
    vec2.Print();
    cout << vec2.GetElementsCount() << "\n";
    cout << vec2.GetElementFromIndex(0) << "\n";
    vec2.InsertSort(true);
    vec2.Print();

    Sort vec3({ 1,4,2,5,7,4 });
    vec3.Print();
    cout << vec3.GetElementsCount() << "\n";
    cout << vec3.GetElementFromIndex(0) << "\n";
    vec3.InsertSort(true);
    vec3.Print();

    Sort vec4(5, 1, 23, 4, 30, 5);
    vec4.Print();
    cout << vec4.GetElementsCount() << "\n";
    cout << vec4.GetElementFromIndex(1) << "\n";
    vec4.InsertSort(true);
    vec4.Print();

    Sort vec5("1,4,8,12,3,99,3");
    vec5.Print();
    cout << vec5.GetElementsCount() << "\n";
    cout << vec5.GetElementFromIndex(0) << "\n";
    vec5.InsertSort(false);
    vec5.Print();


    Sort vec6("13,429,3,7,0,9");
    vec6.Print();
    cout << vec6.GetElementsCount() << "\n";
    cout << vec6.GetElementFromIndex(0) << "\n";
    vec6.QuickSort(0, vec6.GetElementsCount() - 1, true);
    vec6.Print();
}
