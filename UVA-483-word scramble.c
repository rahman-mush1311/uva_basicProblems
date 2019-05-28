#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,c;
    char a[100];

    while(gets(a))
      {
          l=strlen(a);
          c=0;

          for(i=0;i<l;i++)
            {
                if(a[i]==' ')
               {
                   for(j=i-1;j>=c;j--){
                        printf("%c",a[j]);
                   }
                    printf(" ");
                    c=i;
          }

    }
            printf("\n");
      }
return 0;
}
