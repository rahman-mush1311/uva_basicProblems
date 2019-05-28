#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,x,sum=0;
    char a[10];

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
       scanf("%s",&a);
       if(strcmp(a,"donate")==0)
       {
        scanf("%d",&x);
        sum=sum+x;
        }
        else
        printf("%d\n",sum);

    }
    return 0;
}
