/*prime no.*/
#include<stdio.h>
#include<math.h>
int fact=1;
int main()
{
    int n,c=1,i;
    printf("enter number:");
    scanf("%d",&n);
    for(i=2;i<sqrt(n);i++)
    {
        if(n%i==0)
        {
            c++;
        }
        
    }
    if(c==1)
    {
        printf("prime number");
    }
    else{
        printf("not prime");
    }return 0;
}
