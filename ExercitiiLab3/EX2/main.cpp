#include <iostream>
#include "Canvas.h"

using namespace std;

int main(){

    Canvas c(20, 20);
    c.Clear();
    c.DrawLine(0,0,5,5,'G');
    c.Print();
    c.Clear();
    c.FillRect(5,6,20,10,'U');
    c.Print();
    c.Clear();
    c.FillCircle(10,10,8,'z');
    c.Print();
    c.Clear();
    c.DrawRect(5,6,20,10,'U');
    c.Print();
    c.Clear();
    c.DrawCircle(10,10,8,'z');
    c.Print();
    return 0;
}


