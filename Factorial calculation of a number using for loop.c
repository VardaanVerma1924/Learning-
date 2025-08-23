#include<stdio.h>

int main(){
    
    int i,n,factorial;
    factorial = 1;
    
    printf("Enter your number:");
    scanf("%d", &n);

    for(i=1; i<=n ;i++){
        factorial *= i;
    }

    printf("The factorial of your number is:%d", factorial);
    return 0;
}