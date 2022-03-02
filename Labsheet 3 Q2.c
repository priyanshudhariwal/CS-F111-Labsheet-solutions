#include <stdio.h>

int main(){
    
    int a, b;
    
    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);
    
    if(a%b == 0){
        printf("\nSecond is the factor of first");
    }
    else if(b%a == 0){
        printf("\nFirst is the factor of second");
    }
    else{
        printf("\nNeither is the factor of each other");
    }
    
    return 0;
}