
#include <stdio.h>

int main()
{
    int a, b;
    printf("Enter Numbers: ");
    scanf("%d", &a);
    printf("Enter Numbers: ");
    scanf("%d", &b);
    //using ternary
    a>b?printf("%d is largest", a):printf("%d is largest", b);
    //using if else
    if(a>b){
        printf("\n%d is largest", a);
    }
    else{
        printf("\n%d is largest", b);
    }
    return 0;
}
