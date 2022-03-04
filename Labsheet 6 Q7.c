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
    int n;
    int x1, y1, x, y;
    float peri = 0, sidel;
    printf("Enter N: ");
    scanf("%d", &n);
    printf("Enter x1: ");
    scanf("%d", &x1);
    printf("Enter y1: ");
    scanf("%d", &y1);
    for(int i = 1; i<=n; i++){
        if(i == n){
            printf("Enter x1: ");
            scanf("%d", &x);
            printf("Enter y1: ");
            scanf("%d", &y);
        }
        else{
            printf("Enter x%d: ", (i+1));
            scanf("%d", &x);
            printf("Enter y%d: ", (i+1));
            scanf("%d", &y);
        }
        sidel = sqrt(((x-x1)*(x-x1)) + ((y-y1)*(y-y1)));
        peri = peri + sidel;
        x1 = x;
        y1 = y;
    }
    printf("Perimeter = %f", peri);
    return 0;
}
