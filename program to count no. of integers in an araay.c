#include<stdio.h>

void count( int a[], int n){ // doubt why int and not void

        int no_of_posintegers = 0;

    for( int i=0 ; i <n; i++){
        
        if(a[i]>0){
             no_of_posintegers++;
        }
    }
    
     printf("%d", no_of_posintegers);
}

int main(){

    int no_of_posintegers;
    int a[] = {1,2,3,4,-5,-6,-7,8,0,-99,-203,2,6,8};
    
    count(a, 14);
    return 0;
}

// #include<stdio.h>

// int count( int a[], int n){ // doubt why int and not void

//         int no_of_posintegers = 0;

//     for( int i=0 ; i <n; i++){
        
//         if(a[i]>0){
//              no_of_posintegers++;
//         }
//     }
    
//     return no_of_posintegers;

// }

// int main(){

//     int no_of_posintegers;
//     int a[] = {1,2,3,4,-5,-6,-7,8,0,-99,-203,2,6,8};
    

//     printf("%d",  count(a, 14));
//     return 0;
// }