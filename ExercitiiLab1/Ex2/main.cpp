#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    int k = 0, i, j;
    struct cuvinte {
        int dimensiune;
        char c[20];
    };
    cuvinte v[15] = { 0 }; 

    char s[101];
    cin.get(s, 100);
    char* p;
    p = strtok(s, " "); 
    while(p != NULL)    
    {
        v[k].dimensiune = strlen(p); 
        strcpy(v[k].c, p);         
        k++;
        p = strtok(NULL, " ");
    }
    for(i = 0; i < k - 1; i++) {
        for(j = i + 1; j < k; j++)
            if(v[i].dimensiune < v[j].dimensiune) {
                cuvinte aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            } else if(v[i].dimensiune == v[j].dimensiune &&
                      strcmp(v[i].c, v[j].c) < 0) { 
                cuvinte aux = v[i];
                v[i] = v[j];
                v[j] = aux;
            }
    }
    for(i = 0; i < k; i++)
        cout << v[i].c << endl;
    return 0;
}