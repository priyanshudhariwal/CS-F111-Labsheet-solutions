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
    int dec = 0, oct, i = 0;
    int rem, x;
    printf("Enter octal number: ");
    scanf("%d", &oct);
    for(; oct != 0;){
        rem = oct%10;
        dec = dec + rem*pow(8,i);
        oct = oct/10;
        i++;
    }
    printf("Decimal representation = %d", dec);
    return 0;

    return 0;
}
