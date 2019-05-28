#include<stdio.h>

int main()
{
    int i,t,n,j;
    double sum,av,res,c;
    int a[1001];

    scanf("%d",&t);

    for(i=0;i<t;i++)
     {
      scanf("%d",&n);
      sum=0.00;
      c=0.00;
      for(j=0;j<n;j++)
        {
            scanf("%d",&a[j]);
            sum=sum+a[j];

      }

      av=(sum/n);

      for(j=0;j<n;j++)
        {
            if(a[j]>av)
                c++;

      }
      res=(c/n)*100;
      printf("%.3lf%%\n",res);
    }

 return 0;

}
