#include "Math.h"
#include <iostream>
#include <string>
#include <stdio.h>
#include <string.h>
#include <stdarg.h>
using namespace std;

int Math::Add(int a, int b){
    return a+b;
}

int Math::Add(int a, int b, int c){
    return a+b+c;
}

int Math::Add(double a, double b){
    return (int)(a+b);
}

int Math::Add(double a, double b, double c){
    return (int)(a+b+c);
}

int Math::Mul(int a, int b){
    return a*b;
}

int Math::Mul(int a, int b, int c){
    return a*b*c;
}

int Math::Mul(double a, double b){
    return (int)(a*b);
}

int Math::Mul(double a, double b, double c){
    return (int)(a*b*c);
}


char* Math::Add(const char *a, const char *b){
    if( a==nullptr || b==nullptr){
        std::cout << "I-am dat cu NULL\n";
        return nullptr;
    }    
    else{
        char *x = (char*)malloc(strlen(a)+1+strlen(b)+1);
        int rez = atoi(a)+atoi(b);
        std::string temp= to_string(rez);
        strcpy(x, temp.c_str());
        return x;
    }
}

int Math::Add(int count,...){
    int Sum = 0;
    va_list ptr;          // Declaring pointer to the argument list
    va_start(ptr, count); // Initializing argument to the list pointer
 
    for (int i = 0; i < count; i++)
        Sum += va_arg(ptr, int);         // Accessing current variable and pointing to next one
 
 
    va_end(ptr); // Ending argument list traversal
    return Sum;
}
