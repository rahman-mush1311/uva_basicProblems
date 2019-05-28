#include<stdio.h>

int main()
{
    int x,c,y,a;
    while(scanf("%d",&a)!=EOF)
    {
        x=a;
        c=0;
        while(x!=0)
        {
            x=x/2;
            y=x%2;
            if(y==1)
                c=c+1;
            else
                c=c+0;
        }
        printf("The parity of %d is %d (mod 2)\n",a,c);
    }
}
