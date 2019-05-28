#include<stdio.h>

int main()
{
    int i,j,k,t,n,x,temp,sum;
    int a[1000];


    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
    scanf("%d",&n);
    sum=0;

    for(j=0;j<n;j++)
    {
    scanf("%d",&a[j]);
    }

    for(j=0;j<n-1;j++)
    {
    for(k=0;k<n-j-1;k++)
    {
    if(a[k]>a[k+1]){
    temp=a[k];
    a[k]=a[k+1];
    a[k+1]=temp;
}
  }
    }

    for(j=0;j<n;j++)
  {
    if(j==n/2){
    x=a[j];
    break;
    }
  }

  for(j=0;j<n;j++)
  {
    a[j]=x-a[j];
    if(a[j]<0)
    a[j]=(-1)*a[j];
    sum=sum+a[j];
  }
  printf("%d\n",sum);
}
return 0;
}
