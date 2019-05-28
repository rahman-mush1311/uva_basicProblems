#include<stdio.h>
#include<string.h>

int main()
{
    int i,t,l1,l2,j;
    char x[1020],y[1020];

    scanf("%d",&t);
    getchar();
    for(i=0;i<t;i++)
    {
        gets(x);
        gets(y);
        l1=strlen(x);
        l2=strlen(y);

        if(l1!=l2)
            printf("No\n");
        else
        {
            for(j=0;j<l1;j++)
            {
                if(x[j]=='a' || x[j]=='e' || x[j]=='i' || x[j]=='o' || x[j]=='u')
                    x[j]='a';
            }
            for(j=0;j<l2;j++)
            {
                if(y[j]=='a' || y[j]=='e' || y[j]=='i' || y[j]=='o' || y[j]=='u')
                    y[j]='a';
            }
            if(strcmp(x,y)==0)
                printf("Yes\n");
            else
                printf("No\n");
        }
    }
return 0;
}
