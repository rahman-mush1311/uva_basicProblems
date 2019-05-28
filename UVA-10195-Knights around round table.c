#include<stdio.h>
#include<math.h>

int main()
{
    double a,b,c,s,r;

    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
      {
        s=(a+b+c)/2;
        if(s==0)
        printf("The radius of the round table is: 0.000\n");
        else{
        r=sqrt(s*(s-a)*(s-b)*(s-c));
        r=r/s;
        printf("The radius of the round table is: %.3lf\n",r);
        }
    }
return 0;
}
