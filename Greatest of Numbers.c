#include<stdio.h>

int main(){
    
    int a,b,c,d, max;
    printf("The greatest of the  four following numbers\n");
    
    printf("Enter the numbers:\n");
    scanf("%d %d %d %d" , &a, &b, &c, &d);

    max = a;
   
    if(b>a) max = b;
    if(c>b) max = c;
    if(d>c) max = d;
    
    printf("The greatest of the following numbers is: %d", max);

    return 0;
}