#include<stdio.h>

int main()
{
    long int j,k,i,t,temp;
    int a[10];

    scanf("%ld",&t);

    for(i=0;i<t;i++)
{
    for(j=0;j<4;j++)
    {
    scanf("%ld",&a[j]);
    }

  if(a[0]==a[1] && a[2]==a[3] && a[3]==a[2])
    printf("square\n");
  else
  {
    for(j=0;j<3;j++)
    {
    for(k=0;k<3;k++)
    {
    if(a[k]>a[k+1]){
    temp=a[k];
    a[k]=a[k+1];
    a[k+1]=temp;
}
  }
    }
   if(a[0]==a[1] && a[2]==a[3] )
    printf("rectangle\n");
   else if(a[0]+a[1]+a[2]>a[3])
    printf("quadrangle\n");
   else
    printf("banana\n");
   }

}
return 0;
}
