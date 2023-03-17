#include <stdio.h>
#include <iostream>

using namespace std;

int* atoi_al_meu2 (char *str, int &a){
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
    
    a = cnt;
    
    return x;
}



int main(){
    
    char str[100];
    int  sum[100] = {0};
    int *x = NULL, a=0, ad=0;
    FILE *ptrtxt;
    ptrtxt = fopen ("in2.txt","r");
    if(ptrtxt == NULL) {
      perror("Error opening file");
      return(-1);
   }
   
    
    while( fgets(str, 20, ptrtxt) != NULL ) {
        x = atoi_al_meu2(str,a);
        int i=a-1, j=99;
        while(i>=0 && j>=0){
            int temp=sum[j] + x[i] + ad;
            if(temp >=10){
                ad=1;
                sum[j]=temp%10;
            }
            else{
                sum[j] = temp;
                ad=0;
            }
            j--;
            i--;
        }
        
        
   }
    
    int i=0;
    for(i=0; i<100 && sum[i] == 0; i++);
    
    for(; i<100 ; i++)
        cout << sum[i];



    return 0;
}

