#include<stdio.h>

int main(){
    
    int i=2,n;
    int prime =0;
    printf("Enter your number:");
    scanf("%d", &n);

    if(n<=1){
        printf("The number is not prime\n");
    }

    for(i=2; i<n ;i++){
        
        if(n%i == 0){
            prime = 1;
            break;
            }

        }

            if(prime){
                printf("The number is not prime");

            } else{
                printf("The number is prime\n");
            }

             return 0;
}