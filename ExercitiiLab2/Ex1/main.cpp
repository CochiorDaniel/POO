#include <iostream>
#include "NumberList.h"

using namespace std;

int main(){
    NumberList N;
    N.Init();
    N.Add(41);
    N.Add(74);
    N.Add(4);
    N.Add(7);
    N.Add(-4);
    N.Add(1);
    N.Add(2);
    N.Add(34);
    N.Add(6);
    N.Add(9);
    N.Print();
    N.Sort();
    N.Print();
    
    return 0;
}
