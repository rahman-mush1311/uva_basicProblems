#include<stdio.h>
int a[3002];
int main()
{
    int i,j,n,flag,x;

    while(scanf("%d",&n)!=EOF)
    {
    flag=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }

    for(i=0;i<n-1;i++)
    {
    a[i]=a[i]-a[i+1];
    if(a[i]<0)
    a[i]=(-1)*a[i];
    }
     for(i=0;i<n-2;i++)
    {
    x=a[i]-1;
   if(x==a[i+1])
    flag=0;
   else
   {
    flag=1;
    break;
   }
    }
    if(flag==0)
    printf("Jolly\n");
    else
    printf("Not jolly\n");
}
return 0;
}
