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
                if(a[i]!=' '){
                    c++;
                }
                else{
                   for(j=c-1;j>=b;j--){
                        printf("%c",a[j]);
                   }
                    printf("%c",a[i]);
                    b=i+1;
                    c=i+1;
                }
          }
          for(j=l-1;j>=b;j--)
            printf("%c",a[j]);

            printf("\n");
      }
return 0;
}

