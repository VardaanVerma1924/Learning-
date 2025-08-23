#include<stdio.h>

int main(){
    
    int n,i=1,factorial=1;
    
    printf("Enter your number:");
    scanf("%d", &n);

    while(i<=n){
        factorial *= i;
        i++;
    }
    printf("The factorial of n is:%d", factorial);
    return 0;
}