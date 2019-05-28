#include<stdio.h>
int main()
{
    int p,q,r,n,sum,i,t;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&p,&q,&r);
        n=p+q;
        sum=0;
    while(n>=r)
    {
    sum=sum+(n/r);
    n=(n/r)+(n%r);
    }
    printf("%d\n",sum);
    }
return 0;

}
