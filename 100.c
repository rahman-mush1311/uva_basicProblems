#include<stdio.h>

int main()
{
    int i,j,m,n,c,max,x,y;
    while(scanf("%d%d",&m,&n)!=EOF)
    {
        max=0;
    if(m<n)
    {
        x=m;
        y=n;
    }
    else
    {
        x=n;
        y=m;
    }

    for(i=x;i<=y;i++)
    {
        j=i;
        c=1;
        while(j!=1)
        {
            if(j%2==0)
            {
                j=(j/2);
                c=c+1;
            }
            else{
                j=(3*j)+1;
                c=c+1;
            }
        }

        if(c>max)
        max=c;
    }
    printf("%d %d %d\n",m,n,max);

}
return 0;
}
