#include<stdio.h>

int main() 
{
    int n, i;
    scanf("%d", &n);
    for(i = 0; i<n; i++)
    {
        if(i*i > n){
            break;
        }
    }
    printf("%d", i-1);
}
