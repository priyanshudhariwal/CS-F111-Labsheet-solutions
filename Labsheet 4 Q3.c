/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float GPA;
    printf("Enter GPA: ");
    scanf("%f", &GPA);
    if((GPA >= 0) && (GPA <= 4.0)){
        if((GPA >= 0.0) && (GPA <= 0.99)){
            printf("Failed semester—registration suspended");
         }
        else if((GPA >= 1) && (GPA <= 1.99)){
            printf("On probation for next semester");
        }
        else if((GPA >= 2) && (GPA <= 2.99)){

        }
        else if((GPA >= 3) && (GPA <= 3.5)){
            printf("Dean’s list for semester");
        }
        else if((GPA >= 3.5) && (GPA <= 4.0)){
            printf("Highest honors for semester");
        }
    }
    else{
        printf("Invalid GPA");
    }
    return 0;
}
