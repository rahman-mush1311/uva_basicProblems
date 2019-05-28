#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,k,l1,l2,flag,n,t;
    char a[50],b[50];

    scanf("%d",&t);
    getchar();
      for(i=0;i<t;i++)
        {
            gets(a);
            gets(b);
        l1=strlen(a);
        l2=strlen(b);
        flag=0;
        if(l1!=l2)
            printf("No\n");
        else
        {
            for(j=0;j<l1;j++)
              {
                if((a[i]=='a' || a[i]=='e' || a[i]=='o' || a[i]=='u' || a[i]=='i')&&(b[i]=='a' || b[i]=='e' || b[i]=='i' || b[i]=='o' || b[i]=='u'))
                    flag=0;
                else if(a[i]==b[i])
                    flag=0;
                else if(a[i]!=b[i])
                   {
                       flag=1;
                       break;
                }

            }
            if(flag==1)
                printf("No\n");
            else
                printf("Yes\n");
        }

      }
    return 0;
}
