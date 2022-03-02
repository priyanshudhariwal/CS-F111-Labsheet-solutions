/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, x, new_num = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    x = num;
    for(; num != 0; num/10){
        new_num = new_num*10 + (num%10);
        num = num/10;
    }
    if(x == new_num){
        printf("Palindrome");
    }
    else{
        printf("Not a palindrome");
    }

    return 0;
}
