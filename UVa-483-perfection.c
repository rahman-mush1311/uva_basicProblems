#include<stdio.h>

int main()
{
    long long int n,sum,c,x,i,y,z,j;
    printf("PERFECTION OUTPUT\n");

    while(scanf("%lld",&n)!=EOF)
    {
    if(n==0)
    {
    printf("END OF OUTPUT\n");
    break;
    }
    c=(n/2);
    sum=0;
    z=0;
    for(i=1;i<=c;i++)
    {
    x=i;
    if(n%x==0)
    sum=sum+x;
    }
    y=n;
    while(y!=0)
    {
    y=y/10;
    z=z+1;
    }
   for(j=z;j<6;j++)
   {
       printf(" ");
   }
    if(sum==n)

   // printf("%5lld PERFECT\n",n);
    printf("%5d  PERFECT\n",n);
    else if(sum<n)
   // printf("%5lld DEFICIENT\n",n);
   printf("%5d  DEFICIENT\n",n);
    else
    //printf("%5lld ABUNDANT\n",n);
    printf("%5d  ABUNDANT\n",n);
    }
return 0;
}
