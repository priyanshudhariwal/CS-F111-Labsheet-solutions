#include <stdio.h>

int main()
{
    int a, b, c;
    int big, mid, sm; 
    printf("Enter Numbers: ");
    scanf("%d", &a);
    printf("Enter Numbers: ");
    scanf("%d", &b);
    printf("Enter Numbers: ");
    scanf("%d", &c);
    if(a > b && a>c){
        big = a;
        if(c > b){
            mid = c;
            sm = b;
        }
        else{
            mid = b;
            sm = c;
        }
        printf("Ascending Order:\n %d %d %d", sm, mid, big);
    }
    else if(b > a && b > c){
        big = b;
        if(c > a){
            mid = c;
            sm = a;
        }
        else{
            mid = a;
            sm = c;
        }
        printf("Ascending Order:\n %d %d %d", sm, mid, big);
    }
    else if(c > a && c > b){
        big = c;
        if(b > a){
            mid = b;
            sm = a;
        }
        else{
            mid = a;
            sm = b;
        }
        printf("Ascending Order:\n %d %d %d", sm, mid, big);
    }
    return 0;
}
