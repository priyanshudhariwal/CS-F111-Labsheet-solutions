/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, flag;
    printf("Enter number: ");
    scanf("%d", &num);
    printf("%d ", 2);
    for(int i = 3; i<=num; i++){
        flag = 0;
        for(int j = 2; j<i; j++){
            if(i%j == 0){
                flag++;
            }
        }
        if(flag == 0){
            printf("%d ", i);
        }
    }

    return 0;
}
