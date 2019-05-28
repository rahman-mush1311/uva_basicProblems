#include<stdio.h>

int main()
{
    int i,n,sum,max;
    int x[10000];

    while(scanf("%d",&n)&&n)
      {
          sum=0;
          max=0;
          for(i=0;i<n;i++)
           {
               scanf("%d",&x[i]);
               sum=sum+x[i];
               if(sum<0)
                sum=0;
               if(sum>max)
                max=sum;
          }
          if(sum==0)
            printf("Losing streak.\n");
          else
            printf("The maximum winning streak is %d.\n",max);

    }
return 0;
}
