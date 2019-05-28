#include<stdio.h>
#include<string.h>
int main()
{
    int i,l,x;
    char a[110],b[110];

    while(gets(a))
      {
          if(strcmp(a,"DONE")==0)
          break;

          l=strlen(a);
          x=0;

          for(i=(l-1);i>=0;i--)
          {
              if(a[i]>='A' && a[i]<='Z' || a[i]>='a' && a[i]<'z'){
                b[x]=a[i];
                x++;
              }
               /* printf("%c",b[x]);*/
          }
          b[x]='\0';
          puts(b);
          if(strcmp(a,b)==0)
            printf("You won't be eaten!\n");
          else
            printf("Uh oh!\n");

    }
return 0;
}
