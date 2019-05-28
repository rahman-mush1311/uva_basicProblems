#include<stdio.h>

int main()
{
    int h,m;
    double a;
    while(scanf("%d:%d",&h,&m)!=EOF)
    {
    if(h==0 && m==0)
    break;

    a=(h*30 + m*.5)-(6*m);
    if(a<0)
    a=a*(-1);
    if(a>=180)
    a=360-a;
    printf("%.3lf\n",a);
    }
return 0;
}
