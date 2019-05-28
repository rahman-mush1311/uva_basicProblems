#include<stdio.h>

int main()
{
    int i,t,h,m;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
        scanf("%d:%d",&h,&m);
        if(m==0)
            m=0;
        else
        m=60-m;
        h=11-h;
        if(h<1){
            h=h+12;
        if(m==0)
            h=h+1;
        }

        if(h<10)
            printf("Case %d: 0%d:",i+1,h);
        else
            printf("Case %d: %d:",i+1,h);
        if(m<10)
            printf("0%d\n",m);
        else
            printf("%d\n",m);
    }
}
