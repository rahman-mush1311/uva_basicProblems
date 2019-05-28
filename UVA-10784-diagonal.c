#include<stdio.h>
#include<math.h>

int main()

{
    long long int n,y,i=1;
    double x;

    while(scanf("%lld",&n)&&n)
      {
          x=(3+sqrt(9+(8*n)))/2.00;
          y=ceil(x);
          printf("Case %lld: %lld\n",i,y);
          i++;


    }
return 0;
}
