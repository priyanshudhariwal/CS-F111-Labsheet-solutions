/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int N;
    printf("Enter lines: ");
    scanf("%d", &N);
    for(int i = 1; i<=N; i++){
        for(int j = 1; j<=i; j++){
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
