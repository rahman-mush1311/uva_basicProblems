#include<stdio.h>
#include<string.h>

int main()
{
    int i,j,l,n;
    char x[100];

    while(gets(x))
    {
        l=strlen(x);

        for(i=0;i<l;i++)
          {
              if(x[i]=='P' || x[i]=='B' || x[i]=='F' || x[i]=='V'){
                    if(x[i-1]!='P'&& x[i-1]!='B' && x[i-1]!='F' && x[i-1]!='V')
                    printf("1");
              }
              else if(x[i]=='S'|| x[i]=='K' || x[i]=='C' || x[i]=='G' || x[i]=='J' || x[i]=='Q'||x[i]=='X'||x[i]=='Z'){
                    if(x[i-1]!='S'&& x[i-1]!='K' && x[i-1]!='C' && x[i-1]!='G' && x[i-1]!='J' && x[i-1]!='Q'&&x[i-1]!='X'&&x[i-1]!='Z')
                    printf("2");
              }
              else if(x[i]=='D' || x[i]=='T'){
                  if(x[i-1]!='D' && x[i-1]!='T')
                    printf("3");
              }
              else if(x[i]=='L'){
                    if(x[i-1]!='L')
                    printf("4");
              }
              else if(x[i]=='M'||x[i]=='N'){
                if(x[i-1]!='M' && x[i-1]!='N')
                    printf("5");
            }
            else if(x[i]=='R'){
            if(x[i-1]!='R')
                printf("6");
        }
    }
     printf("\n");
    }
return 0;
}
