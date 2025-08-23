#include<stdio.h>

float Average(int, int, int);

float Average(int x, int y, int z){
    return (x+y+z)/3.0;
}
int main(){
    int x=3, y=3, z=10;
    printf("The average of these three numbers are:%.2f", Average(x,y,z));
    return 0;
}