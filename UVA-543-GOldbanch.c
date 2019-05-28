#include<stdio.h>
#include<math.h>

int main()
{
    long long int i,j,n,x,y,k,sum;
    while(scanf("%lld",&n)!=EOF)
    {
    if(n==0)
        break;
    sum=0;
        for(i=2;i<=n;i++)
        {
            x=i;
            for(k=2;k<=sqrt(i);k++)
            {
                if(i%k==0){
                    x=0;
                    break;
            }
            }
        }
            printf("%lld=x\n",x);
            for(j=2;j<n;j++)
            {
                 y=j;
               for(k=2;k<=sqrt(j);k++)
            {

                if(j%k==0){
                    y=0;
                    break;
            }
            }

            printf("%lld=y\n",y);
            sum=x+y;
             printf("%lld=sum\n",sum);
            if(n==sum)
                break;
        }
    printf("%lld = %lld + %lld\n",n,x,y);
    break;
    }

    printf("%lld = %lld + %lld\n",n,x,y);
return 0;

}
