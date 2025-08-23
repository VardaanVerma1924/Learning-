#include<stdio.h>

float Convert(int);
float Convert(int C){
    return ((C*9)/5.0) + 32;
}
int main(){
    int C,F;
    printf("Value in degree celcius:");
    scanf("%d",&C);

    printf("Your value in degree fahrenheit is:%.2F",Convert(C));
    return 0;
}