#include "NumberList.h"
#include <iostream>

void NumberList::Init(){
    count = 0;
}

bool NumberList::Add(int x){
    if(count>=10){
        std::cout << "Vectorul este deja plin! \n";
        return false;
    }
    else{
        numbers[count] = x;
        count++;
        std::cout<< x << " adaugat \n";
        return true;
    }
}

void NumberList::Sort(){
    int i, j;
    for(i = 0; i < count - 1; i++)
        for (j = 0; j < count - i - 1; j++)
            if (numbers[j] > numbers[j + 1]){
                int aux = numbers[j];
                numbers[j]=numbers[j+1];
                numbers[j+1]=aux;
            }
    std::cout<< "Vectorul a fost sortat!\n ";
}

void NumberList::Print(){
    std::cout<< "Vectorul: ";
    for(int i=0; i<count; i++){
        std::cout << numbers[i] << " ";
    }
    std::cout<< "\n";
}