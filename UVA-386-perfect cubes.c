#include<stdio.h>

int main()
{
    int i,j,k,l;
    double a,b,c,d;

    for(i=6;i<=200;i++)
    {
        a=i*i*i;

        for(j=2;j<=i;j++)
         {
             b=j*j*j;

             for(k=j+1;k<=i;k++)
              {
                  c=k*k*k;

                  for(l=k+1;l<=i;l++)
                    {
                        d=l*l*l;
                        if(a==(b+c+d)){
                        printf("Cube = %d, Triple = (%d,%d,%d)\n",i,j,k,l);
                        }

                  }

             }

        }
    }
return 0;
}
