/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n, spaces, i = 0, tcol, j;
    scanf("%d", &n);
    j = n-1;
    for(int row = 1; row<=n; row++){
        tcol = row+i;
        spaces = n-row+j;
        for(int s = 1; s<=spaces; s++){
            printf(" ");
        }
        for(int col = row; col<=tcol; col++){
            printf("%d", col);
        }
        for(int col2 = tcol-1; col2>=row; col2--){
            printf("%d", col2);
        }
        i++;
        j--;
        printf("\n");
    }

    return 0;
}
