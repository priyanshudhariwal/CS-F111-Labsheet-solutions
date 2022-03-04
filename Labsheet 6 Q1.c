/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int num, flag = 0;
    printf("Enter number: ");
    scanf("%d", &num);
    if(num == 2){
        printf("Prime");
        return 0;
    }
    for(int i = 2; i<num; i++){
        if(num%i == 0){
            flag++;
        }
    }
    if(flag > 0){
        printf("Composite");
    }
    else{
        printf("Prime");
    }
    return 0;
}
