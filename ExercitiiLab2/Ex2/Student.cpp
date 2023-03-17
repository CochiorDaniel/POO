#include "Student.h"
#include <string>
#include <iostream>

void Student::set_name(std::string n){
    name = n;
}

std::string Student::get_name(){
    return name;
}

bool Student::set_nota_mate(int x){
    if(x<1 || x>10){
        std::cout<< "Nota este invalida\n";
        return false;
    }
    else{
        nota_mate = x;
        return true;
    }
}

bool Student::set_nota_ist(int x){
    if(x<1 || x>10){
        std::cout<< "Nota este invalida\n";
        return false;
    }
    else{
        nota_ist = x;
        return true;
    }
}

bool Student::set_nota_eng(int x){
    if(x<1 || x>10){
        std::cout<< "Nota este invalida\n";
        return false;
    }
    else{
        nota_eng = x;
        return true;
    }
}

float Student::get_nota_mate(){
    return nota_mate;
}

float Student::get_nota_ist(){
    return nota_ist;
}

float Student::get_nota_eng(){
    return nota_eng;
}

double Student::get_avg(){
    double avg = (double)(nota_mate+nota_ist+nota_eng)/3;
    return avg;
}