#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,x,y,z,d;

    while(scanf("%lf%lf%lf",&a,&b,&c)!=EOF)
      {
          x=(a+b+c)/2.00;

          if(x<=a || x<=b || x<=c){
            z=-1.000;
            printf("%.3lf\n",z);
          }

          else
            {
            y=x*(x-a)*(x-b)*(x-c);
            z=(4/3.00)*(sqrt(y));
            printf("%.3lf\n",z);
          }

    }
return 0;
}
