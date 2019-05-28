#include<stdio.h>
#include<math.h>
int main()
{
   int i,t;
   double x,y,d,v,u,a,z;

   scanf("%d",&t);

   for(i=0;i<t;i++)
     {
         scanf("%lf%lf%lf",&d,&v,&u);

         if(u<=v || u==0)
            printf("Case %d: can't determine\n",i+1);
         else{
            x=sqrt((u*u)-(v*v));
            y=d/x;
            z=d/u;
            a=y-z;

            if(a<=0)
            printf("Case %d: can't determine\n",i+1);
            else
            printf("Case %d: %.3lf\n",i+1,a);


   }
     }
return 0;

}
