#include<stdio.h>

int main()
{
    long int x,y;
    while(scanf("%ld",&x)!=EOF)
    {
        if(x>1)
        {
        y=x*25;
        printf("%ld%%\n",y);
        }
        else if(x==1)
        printf("%d%%\n",0);
    else
        break;

    }
    return 0;
}
