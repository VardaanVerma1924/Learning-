#include<stdio.h>

int main(){
    
    float Salary;
    float tax;

    printf("You can calculate your annual income tax here:\n");
    printf("Fill you annual salary in thousands:");
    scanf("%f", &Salary);

    if (Salary<250000){

        printf("You dont have to pay tax\n");
        printf("Your income tax is = 0");
        
    } else if (Salary>250000 && Salary<=500000){

        printf("You are in 5%% tax slab\n");
        printf("Your income tax is = %.2f  thousand\n", Salary*0.05);

    } else if (Salary>500000 && Salary <=1000000){

        printf("You are in 10%% tax slab\n");
        printf("Your income tax is = %.2f thousand\n", Salary*0.1);
        
    } else {
        
        printf("You are in 20%% tax slab\n");
        printf("Your income tax is = %.2f thousand\n", Salary*0.2);

    }

    

    return 0;
}