#include<stdio.h>

int main(){
    int n,k=0;

    printf("enter the value of times you want the pattern to be:");
    scanf("%d", &n);
    
    for(int i=0; i<n ;i++){


        for( int k=6 ; k> 2*n+1 ; k--){
        
          printf(" ");

        }

        for( int j=0 ; j< 2*i+1 ; j++){
        
        printf("*");
      
        }
    printf("\n");
       
}
    return 0;
}