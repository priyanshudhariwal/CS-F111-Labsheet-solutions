#include <stdio.h>
#include <math.h>

int main()
{
    int first, second;
    char choice;
    float output;
    
    printf("Choose operation (+, -, *, /, ^): ");
    scanf("%c", &choice);
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    
    if(choice == '+'){
        output = first + second;
        printf("%f", output);
    }
    else if(choice == '-'){
        output = first - second;
        printf("%f", output);
    }
    else if(choice == '*'){
        output = first*second;
        printf("%f", output);
    }
    else if(choice == '/'){
        output = first / second;
        printf("%f", output);
    }
    else if(choice == '^'){
        output = pow(first, second);
        printf("%f", output);
    }
    else{
        printf("Wrong choice");
    }

    return 0;
}
