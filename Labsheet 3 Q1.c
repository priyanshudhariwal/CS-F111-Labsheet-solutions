#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c;
    float semi, r;
    float area;
    
    printf("Enter A: ");
    scanf("%f", &a);
    printf("Enter B: ");
    scanf("%f", &b);
    printf("Enter C: ");
    scanf("%f", &c);
    
    if((a+b > c) && (a+c > b) && (b+c > a)){
        semi = (a+b+c)/2;     
        r = (semi*(semi-a)*(semi-b)*(semi-c));  
        area = sqrt(r);
        printf("\nThe area of the triangle = %f", area); 
    }
    else{
        printf("\nTriangle is invalid");
    }
    
    return 0;
}
