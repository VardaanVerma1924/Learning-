#include<stdio.h>

int sum(int);
int sum( int x ){
    if (x==1){

        return 1;
    }
    return sum(x-1) + x;
}


int main(){
    int x;
    printf("Enter till which term you need sum:");
    scanf("%d", &x);
    
    printf("The sum till %dth term is %d", x,sum(x));
    
    return 0;
}