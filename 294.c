#include<stdio.h>

int main()
{
    int n,m,i,j,z,q,k,max;
    int p[100];
    while(scanf("%d %d",&n,&m)==2)
    {
        max = 0 ;
        for(i=n; i<=m; i++)
        {
            k=0;

            for(j=1; j<=sqrt(i); j++)
            {
                if(i%j==0)
                {
                    k++;

                }
                if(i/j!=i)
                    k++;

            }
            if(max<k)
            {
            max=k;
            z = j;

            }
        }
    }

