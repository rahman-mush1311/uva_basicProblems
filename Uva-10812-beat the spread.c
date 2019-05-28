#include<stdio.h>
int main()
{
    int i,t,x,y,a,b,z,u;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
    scanf("%d%d",&x,&y);

    z=(x+y);
    a=z/2;
    u=(x-y);
    b=u/2;
    if(z%2!=0 || u%2!=0 || x<y)
    printf("impossible\n");
    else
    printf("%d %d\n",a,b);

    }
return 0;
}
