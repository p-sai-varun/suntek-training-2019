/*program for pow(x,n) iterative*/
#include <stdio.h>

int main()
{
    int x,n,val=1,i;
    printf("enter value of x,n:");
    scanf("%d%d",&x,&n);
    for(i=0;i<n;i++)
    {
        val=val*x;
    }
    printf("pow(%d,%d)=%d",x,n,val);

    return 0;
}
