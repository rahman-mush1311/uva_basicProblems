#include<stdio.h>

int main()
{
    int i,t,x,z;
    double y,n;

    scanf("%d",&t);

    for(i=0;i<t;i++)
      {
          scanf("%lf",&n);
          y=(-1+(sqrt(1+(8*n))))/2;
          z=y;
          printf("%d\n",z);
    }
return 0;
}
