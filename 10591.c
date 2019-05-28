#include<stdio.h>

int main()
{
    int i,j,t,x,y,z,p,q;

    scanf("%d",&p);
    x=p*p;
    while(1)
{
    y=(x/10);
    z=(x%10);
    if(y/10==0)
    {
    t=(y*y)+(z*z);
    }
    if(y/10!=0)
    {
    i=(y/10);
    j=(y%10);
    t=(i*i)+(j*j);
    }
    if(x%10==0)
    {
        q=x;
        break;
    }
    if(x%10!=0)
        x=t;
}
    if((q*q)==1)
        printf("Happy number");
    else
        printf("Unhappy number");



}
