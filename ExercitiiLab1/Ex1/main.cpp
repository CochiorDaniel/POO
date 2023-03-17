#include <stdio.h>
#include <iostream>

int atoi_al_meu (char *str){
    int nr = 0;
    if(*str >= 48 && *str <= 57){
        while((*str) >= 48 && (*str) <= 57){
            int temp = (int)(*str) - 48 ;
            nr = nr*10 + temp;
            str++;
        }
    }
    
    return nr;
}

int* atoi_al_meu2 (char *str){
    int cnt=0;
    if(*str >= 48 && *str <= 57){
        while((*str) >= 48 && (*str) <= 57){
          cnt++;
          str++;
        }
    }
    
    str = str - cnt;
    
    int *x = new int[cnt];
    int i=0;
    
    if(*str >= 48 && *str <= 57){
        while((*str) >= 48 && (*str) <= 57){
            int temp = (int)(*str) - 48 ;
            x[i] = temp;
            str++;
            i++;
        }
    }
    
    for(int i=0; i<cnt; i++)
        std::cout << x[i];
    std::cout<< "\n";
    
    return x;
}



int main(){
    
    char str[100];
    int sum = 0, sum2[150] = {0};
    FILE *ptrtxt;
    ptrtxt = fopen ("in.txt","r");
    if(ptrtxt == NULL) {
      perror("Error opening file");
      return(-1);
   }
   
    
    while( fgets(str, 20, ptrtxt) != NULL ) {
      sum = sum + atoi_al_meu(str);
   }

    std::cout<<sum;



    return 0;
}
