#include<stdio.h>
#include<math.h>
int main()
{
    double u,v,s,a,t;
    int c,i=1;


    while(scanf("%d",&c)!=EOF){

    if(c==0)
        break;

    switch(c)
    {
    case 1:
    scanf("%lf%lf%lf",&u,&v,&t);
    a=(v-u)/t;
    s=(u*t)+(.5*a*(t*t));
    printf("Case %d: %.3lf %.3lf\n",i,s,a);
    break;

    case 2:
    scanf("%lf%lf%lf",&u,&v,&a);
    s=((v*v)-(u*u))/(2*a);
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf\n",i,s,t);
    break;

    case 3:
    scanf("%lf%lf%lf",&u,&a,&s);
    v=sqrt((u*u)+(2*a*s));
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf\n",i,v,t);
    break;

    case 4:
    scanf("%lf%lf%lf",&v,&a,&s);
    u=sqrt((v*v)-(2*a*s));
    t=(v-u)/a;
    printf("Case %d: %.3lf %.3lf\n",i,u,t);
    break;
    }
    i++;
    }

}
