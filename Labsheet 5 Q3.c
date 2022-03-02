#include <stdio.h>

int main()
{
    int num, sum = 0;
    float avg;
    printf("Enter 5 digit number: ");
    scanf("%d", &num);
    for(; num != 0; num/10){
        sum = sum + (num%10);
        num = num/10;
    }
    avg = sum/5.0;
    printf("The average of the digits of the number is: %f", avg);
    return 0;
}