#include<stdio.h>
int main()
{
    int i,t,j,c;
    long int n;
    scanf("%d",&t);

    for(i=0;i<t;i++)
    {
    scanf("%ld",&n);
    n=((((((n*567)/9)+7492)*235)/47)-498);
    if(n<0)
    n=n*(-1);

    n=n/10;
    j=n%10;
    printf("%d\n",j);
}
}

