#include<stdio.h>
int main()
{
    int n,c,i,j=1;
    while(scanf("%d",&n)!=EOF)
    {
    c=0;
        if(n<0)
            break;
    for(i=1;i<n;i=i*2)
    {
        c=c+1;
    }
    printf("Case %d: %d\n",j,c);
    j++;
    }
return 0;
}
