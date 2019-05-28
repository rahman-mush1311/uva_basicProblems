
#include<stdio.h>
int main()
{
    int i,t,n,k,p,r;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&n,&k,&p);

        if(k+p>n)
        r=(k+p)-n;
        else
        r=k+p;

        printf("Case %d: %d\n",i+1,r);
    }

}
