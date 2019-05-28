#include<stdio.h>

int main()
{
    long long int n,s;

    while(scanf("%lld",&n)!=EOF)
      {
          if(n<0)
            break;

          s=((n*(n+1))/2)+1;
          printf("%lld\n",s);

    }
return 0;
}
