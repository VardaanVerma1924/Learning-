#include<stdio.h>

int fibonacci(int);
int fibonacci(int n){
    if(n==1 || n ==2){
      return n-1;
    }
    return fibonacci(n-1) + fibonacci(n-2);
  }
int main(){
    int n,i;
    printf("Enter the term of fibonacci seq till which you want to print:");
    scanf("%d", &n);
    printf("The fibonacci sequence till %dth term is:\n",n);
    for( i =1 ; i<=n ; i++){
      printf("%d\n", fibonacci(i));
    }
      
    return 0;
}