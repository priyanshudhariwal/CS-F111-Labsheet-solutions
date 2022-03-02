#include <stdio.h>
int main(){
    float a;
    double b;
    printf("Enter a float: ");
    scanf("%f", &a);
    printf("Enter a dobule: ");
    scanf("%lf", &b);
    printf("Entered double = %lf \n", b);
    printf("Entered float = %f", a);
    return 0;
}