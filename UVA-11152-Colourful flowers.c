#include<stdio.h>
#include<math.h>
#define PI acos(-1)
int main()
{
    double a,b,c,s,r,x,y,t,k,i,j,z;

    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
      {
        s=(a+b+c)/2;

        x=sqrt(s*(s-a)*(s-b)*(s-c));
        r=x/s;
        k=PI*(pow(r,2));
        t=x-k;

       y=(a*b*c)/(4*x);
       z=PI*(pow(y,2));
       j=z-x;

            printf("%.4lf %.4lf %.4lf\n",j,t,k);

    }
return 0;
}
