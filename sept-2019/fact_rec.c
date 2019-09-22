/*factorial using recursion*/
#include<stdio.h>
int fact=1;
int main()
{
    int n,fact=1,f;
    int fac(int n);
    printf("enter value of n:");
    scanf("%d",&n);
    f=fac(n);
    printf("factorial of n=%d",f);
    return 0;
}
int fac(int n)
{
    if(n>0)
    {
        fact=fact*n;
        n--;
        fac(n);
    }
    return fact;
}