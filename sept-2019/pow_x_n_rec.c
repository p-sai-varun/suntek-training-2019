/*program for pow(x,n) recursive*/
#include <stdio.h>

int main()
{
    int x,n,val,i;
    int power(int x,int n);
    printf("enter value of x,n:");
    scanf("%d%d",&x,&n);
    val=power(x,n);
    printf("pow(%d,%d)=%d",x,n,val);

    return 0;
}
int power(int x,int n)
{ int val=1;
    while(n!=0)
    {
        val=val*x;
        n--;
        power(x,n);
    }
    return val;
}
