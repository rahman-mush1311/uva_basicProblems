#include<stdio.h>
int ncr(long long int n, long long int r)
{
     long long int x,y,m,i;
            x=1;
          y=n;

          if(n-r<r)
          r=n-r;

          for(i=1;i<=r;i++)
            {
                x=x*y;
                x=x/i;
                y--;
          }

          return x;
}

int main()
{
    long long int n,r,x,i,y,m;

    while(scanf("%lld%lld",&n,&r)!=EOF)
      {
          if(n==0 && r==0)
            break;
            x=ncr(n,r);

          printf("%lld things taken %lld at a time is %lld exactly.\n",n,r,x);

    }
return 0;
}
