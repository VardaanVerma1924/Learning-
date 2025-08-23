#include<stdio.h>

int main(){
    int n,i, Product;
    printf("Write the value of n:");
    scanf("%d", &n);

    for(i=1; i<=10 ;i++){
       //product = n*i
       //printf("%d times %d is: %d\n",n,i,Product);
       printf("%d times %d is: %d\n",n,i,n*i);
       
    }
    return 0;
}