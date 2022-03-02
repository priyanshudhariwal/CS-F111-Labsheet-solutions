#include <stdio.h>

int main()
{
    int sum = 0;
    float avg;
    for(int i = 0; i<=10; i++){
        sum = sum+i;
    }
    avg = sum/10.0;
    printf("The average of first 10 natural numbers is: %f", avg);
}
