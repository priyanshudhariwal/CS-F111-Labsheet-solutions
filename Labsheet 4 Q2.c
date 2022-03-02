/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    int a;
    float area;
    printf("Choose Shape (S = square, C = circle): ");
    scanf("%c", &ch);
    if((ch == 'C') || (ch == 'c')){
        printf("Enter Radius: ");
        scanf("%d", &a);
        area = 3.14*a*a;
        printf("Area of circle = %f", area);
    }
    else if((ch == 'S') || (ch == 's')){
        printf("Enter side length: ");
        scanf("%d", &a);
        area = a*a;
        printf("Area of square = %f", area);
    }

    return 0;
}
