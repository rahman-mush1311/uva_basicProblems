#include<stdio.h>

int main()
{
    int i,n,sum,c,j=1,x,y;
    int a[51];

    while(scanf("%d",&n)&&n)
    {
    sum=0;
    c=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    sum=sum+a[i];
    }
    x=(sum/n);
    for(i=0;i<n;i++)
    {
    if(x<a[i])
    c=c+(a[i]-x);
    }
    printf("Set #%d\nThe minimum number of moves is %d.\n\n",j,c);
    j++;
    }
return 0;
}
