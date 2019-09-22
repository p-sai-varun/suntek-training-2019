/*factorial iterative*/
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("enter value of n:");
    scanf("%d",&n);
    while(n!=0)
    {
        fact=fact*n;
        n--;
        
    }
    printf("factorial of n=%d",fact);
    return 0;
}