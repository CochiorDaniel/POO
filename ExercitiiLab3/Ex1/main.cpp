#include <iostream>
#include "Math.h"
#include <stdio.h>
#include <string.h>

using namespace std;

int main(){
    /* Deoarece clasa Math nu are nici o data membru, ci doar metode, nu are rost
sa creez obiecte de tipul Math deoarece acestea ar ocupa memorie degeaba, fiindca nicio metoda
nu va opera cu this pointer si astfel, in loc sa creez un obiect Math OBJ, pota apela functiile 
statice astfel: Nume_Clasa::Nume_Functie(parametrii) */
    //Math X; -> Nu are rost sa fac asa ceva
    /* Cum ma pot asigura ca nu se creaza instante ale clasei cand nu am nevoie de ele ?
            1) Fac constructorul privat
            2) Math() = delete; -> public, spun explicit ca nu exista constructor(nici default)
    */
    
    
    
    
    cout << Math::Add(2, 4) << "\n";
    cout << Math::Add(1, 2, 3) << "\n";
    cout << Math::Add(2.8, 21.3) << "\n";
    cout << Math::Add(0.32, 12.1, 1.23) << "\n";
    cout << Math::Mul(2, 4) << "\n";
    cout << Math::Mul(2, 1, 4) << "\n";
    cout << Math::Mul(1.3, 12.1) << "\n";
    cout << Math::Mul(1.3, 12.1, 1.23) << "\n";
    cout << "=============================\n";
    const char *a = "23";
    const char *b = "24";
    const char *p = Math::Add(a,b);
    cout << p << "\n";
    delete(p);
    cout << "=============================\n";
    cout << Math::Add(4,1,5,6,8);
    return 0;
}
