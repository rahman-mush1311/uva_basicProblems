#include<stdio.h>
int main()
{
    int i,n,a,b,sum;

    while(scanf("%d",&n)!=EOF)
    {
        if(n==0)
            break;
        else
        {
            a=0;
            b=1;


              for(i=0;i<n;i++)
                {
                    sum=a+b;
                    a=b;
                    b=sum;

              }
        printf("%d\n",sum);
      }
    }
return 0;
}
