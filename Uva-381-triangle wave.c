#include<stdio.h>

int main()
{
    int i,j,k,c,r,t,n;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
    scanf("%d %d",&n,&k);

    for(j=0;j<k;j++)
    {
    for(r=1;r<=n;r++)
    {
    for(c=1;c<=r;c++)
    {
    printf("%d",r);
    }
    printf("\n");
    }
    for(r=(n-1);r>0;r--)
    {
    for(c=1;c<=r;c++)
    {
    printf("%d",r);
    }
    printf("\n");
    }
    if(i!=(t-1)||j!=(k-1))
    printf("\n");
    }
    }
return 0;
}
