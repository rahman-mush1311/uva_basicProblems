#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,t,m,f;
    char x[1010];
    scanf("%d",&t);
    getchar();

    for(i=0;i<t;i++)
      {
          gets(x);
          l=strlen(x);
          f=0;
          m=0;
          for(j=0;j<l;j++)
           {
               if(x[j]=='F')
                f++;
               else if(x[j]=='M')
                m++;
          }
          if(f==m && l>2)
            printf("LOOP\n");
          else
            printf("NO LOOP\n");

    }
return 0;
}
