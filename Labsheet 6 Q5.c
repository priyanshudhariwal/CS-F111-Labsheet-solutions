/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>

int main()
{
    int dec = 0, bin, i = 0;
    int rem, x;
    printf("Enter binary number: ");
    scanf("%d", &bin);
    for(; bin != 0;){
        rem = bin%10;
        if(rem == 1){
           dec = dec + pow(2,i);
        }
        bin = bin/10;
        i++;
    }
    printf("Decimal representation = %d", dec);
    return 0;
}
