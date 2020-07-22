#include<stdio.h>
int main(){
    int i,j,k,l,n;
    i=1;j=2;n=1;k=3;
    for(n=1;n<=3;n++){
        printData(j,'-');
        printData(i,'*');
        printData(k,'-');
        printData(i,'*');
        printf("\n");
        i=i+2;
        j--;
        k=k-2;
    }
}
    void printData(int a,char b){
        int t;
        for(t=a;t>0;t--){
            printf("%c",b);
            
        }
    }
    
/*-------------output------------
        --*---*
        -***-***
        **********
*/



