#include<stdio.h>

int main(){
    
    int n,i=1,sum=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    for(i; i<=n ;i++){
        sum +=i;
    }
    printf("The sum of %d natural numbers is: %d", n, sum);
    return 0;
}