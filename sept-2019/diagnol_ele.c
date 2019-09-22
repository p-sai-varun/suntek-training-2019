#include<stdio.h>
int main()
{
    int a[100][100],i,j,max,start,end,n,sum,max1;
    printf("enter size of an array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
        
    }
  printf("diagnol elements l to r:");
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(i==j)
          {
              printf("%d ",a[i][j]);
          }
      }
  }
  printf("\ndiagnol elements from r to l:");
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          if(i+j==n-1)
          {
              printf("%d ",a[i][j]);
          }
      }
      
      
  }
    return 0;
}