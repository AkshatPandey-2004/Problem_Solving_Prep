#include<stdio.h>
int main(){
    int i,j,k,l,m,o;
    int n=4;//can also take input from user
    for(i=0;i<n;i++){
        for(j=0;j<=i;j++){
        printf("*");
    }
        for(k=0;k<(n-i-1)*2;k++){
            printf(" ");
        }
        for(l=0;l<=i;l++){
        
        printf("*");
    }
    printf("\n");
    }
    for(i=n-1;i>=0;i--){
        for(j=0;j<=i;j++){
            printf("*");
            }
        for(k=0;k<(n-i-1)*2;k++){
            printf(" ");
        }
        for(l=0;l<=i;l++){
        
        printf("*");
    }
    printf("\n");
    }
/*
OUTPUT
*      *
**    **
***  ***
********
********
***  ***
**    **
*      *

*/
