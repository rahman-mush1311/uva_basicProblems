#include<bits/stdc++.h>

using namespace std;
int main()
{
    double a[5];
    double x,y,z,p,q,r,s;
    double const PI = 3.1416;
    int n;

    while(scanf("%lf%lf%lf",&a[0],&a[1],&a[3])!=EOF)
      {
        n=3;
       sort(a,a+n);

       s=(a[0]+a[1]+a[2])/2;
       if(s>=0){
       r=s*(s-a[0])*(s-a[1])*(s-a[2]);
       r=sqrt(r);
       r=r/s;
       x=PI*(r*r);
       }
       p=(a[0]+a[1])/2;
       y=p-x;

       q= PI*(a[3]*a[3]);
       z=q-p;

       printf("%.4lf %.4lf %.4lf\n",z,y,x);

    }
return 0;
}
