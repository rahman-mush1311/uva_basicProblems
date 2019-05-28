#include<stdio.h>


int main()
{
    int i,c=0,j;

    for(i=2;i<=10;i++)
    {
        for(j=2;j<=(i/2.0);j++)
        {
            if(i%j==0)
                break;
        }
        c=c+1;
        printf("%d ",i);
    }

}
