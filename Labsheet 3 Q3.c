#include <stdio.h>

int main(){
    
    char ch;
    
    printf("Enter character: ");
    scanf("%c", &ch);
    
    if((ch == 'a') || (ch == 'e') || (ch == 'i') || (ch == 'o') || (ch == 'u') || (ch == 'A') || (ch == 'E') || (ch == 'I') || (ch == 'O') || (ch == 'U'))
    {
        printf("You have entered a vowel");
    }
    else{
        printf("You have entered a consonant");
    }
    return 0;
}