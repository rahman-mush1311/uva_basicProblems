#include<stdio.h>
#include<math.h>

int main()
{
    long long int x,y,z,max,c,i,t,j,k,p,q;
    scanf("%lld",&t);

    for(i=0;i<t;i++)
      {
          max=0;
          scanf("%lld%lld",&x,&y);

          for(j=x;j<=y;j++)
            {
                q=sqrt(j);
                c=0;

                for(k=1;k<=q;k++){
                    if(j%k==0){
                     c++;
                    if(j/k!=k)
                        c++;
                    }
                }

                if(max<c){
                max=c;
                z=j;
                }

          }
        printf("Between %lld and %lld, %lld has a maximum of %lld divisors.\n",x,y,z,max);

    }
}
