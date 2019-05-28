#include<stdio.h>
int main()
{
    int i,j,t,n,c,k;
    int x[50];

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
    scanf("%d",&n);
    c=0;
    for(j=0;j<n;j++)
    {
    scanf("%d",&x[j]);
    }
    for(j=0;j<n-1;j++)
    {
    for(k=j+1;k<n;k++)
    {
        if(x[j]>x[k])
            c=c+1;
    }
    }
    printf("Optimal train swapping takes %d swaps.\n",c);
    }
}
