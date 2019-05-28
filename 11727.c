#include<stdio.h>

int main()
{
    int i,t,a,b,c;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d%d%d",&a,&b,&c);

        if(a>b && b>c || c>b && b>a)
        printf("Case %d: %d\n",i+1,b);
        else if(b>a && a>c || c>a && a>b)
        printf("Case %d: %d\n",i+1,a);
        else
        printf("Case %d: %d\n",i+1,c);
    }

}
