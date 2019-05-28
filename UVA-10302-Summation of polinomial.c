#include<stdio.h>
#include<math.h>

int main()
{
    int i,n;
    long long int sum;

    while(scanf("%d",&n)&&n)
      {
        sum=0;
        for(i=1;i<=n;i++)
          {
              sum=sum+(pow(i,3));

        }
        printf("%lld\n",sum);

    }
return 0;
}
