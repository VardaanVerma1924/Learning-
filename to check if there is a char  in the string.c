#include<stdio.h>

int main(){
    
    char str[]= "vardaan";
    int contains;
    char c = 'z';
    for ( int i=0; i< strlen(str) ;i++){
        if(str[i]== c){
            contains=1;
            break;
        }
    }

     if(contains){
            printf("Yes it contains");

        } else{
            printf("No it does not contains");
        }

    return 0;
}