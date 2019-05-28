#include<stdio.h>
#include<math.h>

int main()
{
    long long int sum,n;

    while(scanf("%lld",&n)!=EOF)
      {

        printf("%lld\n",(n*n*(n+1)*(n+1))/4);

    }
return 0;
}

