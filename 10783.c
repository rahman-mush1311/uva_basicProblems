#include<stdio.h>

int main()
{
    int t,i,j,m,n,sum;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
    scanf("%d%d",&m,&n);
    sum=0;
    for(j=m;j<=n;j++)
    {
        if(j%2!=0)
        {
            sum=sum+j;
        }
    }
    printf("Case %d: %d\n",i+1,sum);
    }
    return 0;
}
