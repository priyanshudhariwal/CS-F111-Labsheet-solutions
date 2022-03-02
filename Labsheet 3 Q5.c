#include <stdio.h>

int main()
{
    int score;
    
    printf("Enter score: ");
    scanf("%d", &score);
    
    if((score > 8) && (score <= 10)){
        printf("Grade is A");
    }
    else if((score > 7) && (score <= 8)){
        printf("Grade is B");
    }
    else if((score > 6) && (score <= 7)){
        printf("Grade is C");
    }
    else if((score > 5) && (score <= 6)){
        printf("Grade is D");
    }
    else if(score <= 5){
        printf("Grade is F");
    }

    return 0;
}
