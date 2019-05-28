#include<stdio.h>

int main()
{
    int i,n,m,rev,t,c,sum,x,y;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
    scanf("%d",&n);
    c=1;
    while(1){
    m=n;
     rev=0;
    y=0;
    while(n!=0)
    {
    rev=rev*10;
    rev=rev+(n%10);
    n=n/10;
    }
    sum=m+rev;
    x=sum;
    while(x!=0)
    {
     y=y*10;
    y=y+(x%10);
    x=x/10;
    }
    if(sum==y){
    printf("%d %d\n" ,c,y);
    break;
    }
    else
    {
    n=sum;
    c=c+1;
    }
    }
    }
}
