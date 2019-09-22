#include<stdio.h>
int main()
{
    int a[100],i,j,max,start,end,n,sum,max1;
    printf("enter size of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    max1=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]>max1)
        {
            max1=a[i];
        }
    }
    for(i=0;i<n-1;i++)
    {
        sum=a[i];
        for(j=i+1;j<n;j++)
        {
        sum=sum+a[j];    
        if(sum>max)
        {
            max=sum;
            start=i;
            end=j;
        }
        
            
        }
        sum=0;
        
    }
    if(max1>max)
    {
        printf("sub array:%d",max1);
    }
    else
    {
        printf("sub array:");
        for(i=start;i<=end;i++)
        {
            printf("%d,",a[i]);
        }
         printf("\nsum:%d",max);
    }
    return 0;
}
