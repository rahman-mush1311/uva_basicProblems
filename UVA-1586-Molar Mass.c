#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,c,b;
    char a[100];

    while(gets(a))
      {
          l=strlen(a);
          c=0;
          b=0;

          for(i=0;i<l;i++)
            {
                if(a[i]!=' ')
                    c++;
               {
                   for(j=c;j>=b;j--){
                        printf("%c",a[j]);
                   }
                    printf(" ");
                    c=i;
                    b=i;
          }

    }
            printf("\n");
      }
return 0;
}

