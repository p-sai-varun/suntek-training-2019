#include<stdio.h>
#include<math.h>
int main()
{
    int n,c=1,i,x;
    int isprime(int n);
    printf("enter number:");
    scanf("%d",&n);
    x=isprime(n);
        

    if(x==1)
    {
        printf("prime number");
    }
    else{
        printf("not prime");
    }return 0;
}
int isprime(int n)
{int i=2,c=1;
 while(i<sqrt(n))
 {
     if(n%i==0)
     {
         c++;
     }
     i++;
 }
 return c;
}