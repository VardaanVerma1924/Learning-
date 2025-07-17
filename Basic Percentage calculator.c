#include<stdio.h>

int main(){
    
    int physics_marks;
    int chemistry_marks;
    int maths_marks;
    int Total_Marks;
    float Total_percentage;


    printf("Your Result can be calculated here\n");

    printf("physics:");
    scanf("%d",&physics_marks);
    printf("Physics Perncentage:%d%%\n", physics_marks);

    printf("chemistry:");
    scanf("%d",&chemistry_marks);
    printf("chemsitry Perncentage:%d%%\n" ,chemistry_marks);
    
    printf("maths:");
    scanf("%d",&maths_marks);
    printf("maths Perncentage:%d%%\n", maths_marks);

    Total_Marks = physics_marks+chemistry_marks+maths_marks;
    Total_percentage = (Total_Marks/300.0)*100;
    
    printf("Total Marks = %d\n",Total_Marks);
    printf("Total percentage = %.2f%%\n",Total_percentage);
    
    if (physics_marks<33 || chemistry_marks<33 || maths_marks<33){
        printf("You have failed due to not scoring more than 33%% in one or more subjects");

    } else if (Total_percentage<40){
        printf("You have failed due to not scoring more than 40%% in Total");
    } else{
        printf("Congratulations, You have passed");
    }
        return 0;
}
    
