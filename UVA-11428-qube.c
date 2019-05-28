#include<stdio.h>
#include<math.h>
int main()
{
    long int i,j,n,x,flag;

    while(scanf("%ld",&n)!=EOF)
{
    if(n==0)
        break;
    flag=0;

   for(i=0;i<sqrt(n);i++)
   {
    for(j=0;j<=i;j++){
    x=(i*i*i)-(j*j*j);
    if(n==x){
    flag=1;
    break;
   }
    }
    if(flag==1)
        break;
     }
    if(flag==1)
    printf("%d %d\n",i,j);
    else
    printf("No solution\n");
}
return 0;
}
