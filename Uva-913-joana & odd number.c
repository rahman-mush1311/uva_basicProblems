#include<stdio.h>

int main()
{
    long long int n,l,x,i,sum;

    while(scanf("%lld",&n)!=EOF)
       {


        l=(n+1)/2;
        x=(2*(l*l)-1);
        sum=0;
        for(i=0;i<3;i++)
          {
            sum=sum+x;
            x=x-2;

        }
        printf("%lld\n",sum);

    }
    return 0;
}
