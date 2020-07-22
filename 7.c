#include<stdio.h>
int main(){
    int i,j,k,l,n;
    i=1;
    j=2;
    n=1;
    for(n=1;n<=5;n++){
        if(n>3){
            j=j+2;
            i=i-4;
        }
        for(k=j;k>0;k--){
            printf("-");
        }
        for(l=i;l>0;l--){
            printf("*");
        }
        i=i+2;
        j--;
        printf("\n");
    }
}

/*-----------output-----------
      --*
      -***
      *****
      -***
      --*
*/



