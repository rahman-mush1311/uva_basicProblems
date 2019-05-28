#include<stdio.h>
int main()
{
    long int a;
    long int y,sum;
    while(scanf("%ld",&a)!=EOF)
    {
     if(a==0)
        break;
    else
        sum=0;

     while(1)
     {
        while(a!=0)
        {
         y=a%10;
         a=a/10;
         sum=sum+y;

        }
        if(sum<10)
            break;
        else{
            a=sum;
            sum=0;
        }
     }
     printf("%d\n",sum);

    }
    return 0;
}
