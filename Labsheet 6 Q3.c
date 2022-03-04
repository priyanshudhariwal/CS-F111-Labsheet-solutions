/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float far;
    for(int i = 0; i<=100; i++){
        far = (i * 1.8) + 32;
        printf("Celsius: %d\n", i);
        printf("Farenheith: %f\n\n", far);
    }

    return 0;
}
