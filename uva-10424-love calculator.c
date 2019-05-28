#include<stdio.h>
#include<string.h>

int main()
{
    int x,y,l1,l2,i,j,sum1,sum2;
    char a[50],b[50];
    float n;


    while(gets(a))
    {
    gets(b);
    l1=strlen(a);
    l2=strlen(b);
    x=0;
    y=0;

    for(i=0;i<l1;i++)
    {
    if(a[i]<='A'&&a[i]>='Z'){
    a[i]=a[i]+32;
    }
    x=x+(a[i]-96);
    }
    if(x>9)
    {
        while(x>9)
        {
        sum1=0;
        while(x>0)
        {
        sum1=sum1+(x%10);
        x=x/10;
        }
        x=sum1;
    }
    }


 for(i=0;i<l2;i++)
    {
    if(b[i]<='A'&&b[i]>='Z'){
    b[i]=b[i]+32;
    }
    y=y+(b[i]-96);
    }
    if(y>9)
    {
        while(y>9)
        {
        sum2=0;
        while(y>0)
        {
        sum2=sum2+(y%10);
        y=y/10;
        }
        y=sum2;
        }
    }
    if(x<y)
    n=((float)x/y)*100;
    else
    n=((float)y/x)*100;
    if(n>100.00)
    n=100.00;
    printf("%.2f %%\n",n);

    }
}

