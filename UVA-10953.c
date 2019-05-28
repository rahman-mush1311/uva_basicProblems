#include<stdio.h>
int main()
{
    int a,i,t,n,c;
    int x[100];

    while(scanf("%d",&t)!=EOF)
    {
    if(t==0)
        break;
    i=0;
    a=t;
    c=0;
    while(a!=0)
    {
    x[i]=(a%2);
    if(x[i]==1)
    {
    c=c+1;
    }
    a=a/2;
    n=i;
    i++;
    }
    printf("The parity of ");
    for(i=n;i>=0;i--){
    printf("%d",x[i]);
    }
    printf(" is %d (mod 2).\n",c);
    }
}
