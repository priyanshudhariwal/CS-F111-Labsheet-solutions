/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a, b, c, d, e, total;
    float avg;
    printf("Enter Numbers: ");
    scanf("%d", &a);
    printf("Enter Numbers: ");
    scanf("%d", &b);
    printf("Enter Numbers: ");
    scanf("%d", &c);
    printf("Enter Numbers: ");
    scanf("%d", &d);
    printf("Enter Numbers: ");
    scanf("%d", &e);
    if((a > 0) && (b > 0) && (c > 0) && (d > 0) && (e > 0)){
        total = a + b + c + d + e;
        avg = total/5.0;
        printf("Average = %f", avg);
    }
    else{
        printf("One or more numbers is equal to 0");
    }

    return 0;
}
