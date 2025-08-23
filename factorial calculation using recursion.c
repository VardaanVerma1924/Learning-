#include<stdio.h>

int factorial(int);

int factorial(int n){
     if( n==1 || n==0){
        return 1;
     }
       return  factorial(n-1)*n;

    }

    int main(){
        int a;
        printf("Enter your number");
        scanf("%d", &a);
    printf("the factorial of 5 is:%d", factorial(a));

    return 0;
}