#include<stdio.h>
int main()
{
    int i,j,k,t,n,s,q,c,a,l;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
    scanf("%d%d%d",&n,&s,&q);

    for(j=0;j<q;j++)
    {
        if(s!=n)
        s=s+1;
        else
            s=1;
    }
    printf("Case %d: %d\n",i+1,s);
    }
}
