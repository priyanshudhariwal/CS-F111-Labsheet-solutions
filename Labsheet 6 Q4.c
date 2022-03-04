/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int min, n1, n2, hcf;
    printf("Enter first number: ");
    scanf("%d", &n1);
    printf("Enter second number: ");
    scanf("%d", &n2);
    if(n1 > n2){
        min = n1;
    }
    else{
        min = n2;
    }
    for(int i = 1; i<=min; i++){
        if((n1%i == 0) && (n2%i == 0)){
            hcf = i;
        }
    }
    printf("HCF = %d", hcf);

    return 0;
}
