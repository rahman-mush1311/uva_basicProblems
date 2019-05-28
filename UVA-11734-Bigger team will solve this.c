#include<stdio.h>
#include<string.h>
int main()
{
    int i,t,l,s,j,n;
    char x[30],y[30],z[30],a[30];

    scanf("%d",&t);
    getchar();

    for(i=0;i<t;i++)
    {
        gets(x);
        gets(y);

        if(strcmp(x,y)==0)
            printf("Case %d: Yes\n",i+1);
        else{

            l=strlen(x);
            n=strlen(y);
            s=0;

            for(j=0;j<l;j++)
            {
                if(x[j]==' '){
                    continue;
                }
                else
                    z[s]=x[j];
                    s++;

            }
            z[s]='\0';
            s=0;
              for(j=0;j<n;j++)
            {
                if(y[j]==' '){
                    continue;
                }
                else
                    a[s]=y[j];
                    s++;

            }
            a[s]='\0';
            if(strcmp(a,z)==0)
                printf("Case %d: Output Format Error\n",i+1);
            else
                printf("Case %d: Wrong Answer\n",i+1);

    }
}
return 0;
}
