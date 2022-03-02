/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    float b;
    printf("Please enter an Integer: ");
    scanf("%d", &a);
    printf("Please enter a Float: ");
    scanf("%f", &b);
    printf("Float = %0.1f \n", b);
    printf("Integer = %d", a);
    return 0;
}
