#include<stdio.h>
#include<string.h>

int main()
{
    long long int n,m,r,i;
    long long int x[1020];

    while(scanf("%lld",&n)!=EOF)
      {
          if(n<0)
          break;

          for(i=0;;i++)
           {
            x[i]=n%3;
            n=n/3;
            if(n==0)
                break;
          }
         r=i;

         for(m=r;m>=0;m--)
           {
               printf("%lld",x[m]);

         }
         printf("\n");

    }
return 0;
}
