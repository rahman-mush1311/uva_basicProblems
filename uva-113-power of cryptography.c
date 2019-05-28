#include<stdio.h>
#include<math.h>

int main()
{
    double m,n,p;

    while(scanf("%lf%lf",&m,&n)!=EOF)
    {
    p=pow(n,(1/m));
    printf("%.0lf\n",p);
    }
return 0;
}
