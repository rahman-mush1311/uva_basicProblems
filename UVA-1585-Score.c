#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,n,t,sum,c;
    char a[100];

    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
    gets(a);
    l=strlen(a);
    c=0;
    sum=0;

    for(j=0;j<l;j++)
    {
    if(a[j]=='X')
        c=0;
    else if(a[j]=='O'){
        c=c+1;
        sum=sum+c;
      }
    }
    printf("%d\n",sum);
    }
return 0;
}
