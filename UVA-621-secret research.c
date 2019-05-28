#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,t,j;
    char x[1020];
    scanf("%d",&t);
    getchar();

    for(i=0;i<t;i++)
      {
          gets(x);
          l=strlen(x);

                if((l==1 && (x[0]=='4' || x[0]=='1'))||(l==2 && x[0]=='7' && x[1]=='8'))
                   printf("+\n");
                else if(x[l-1]=='5' && x[l-2]=='3')
                    printf("-\n");
                else if(x[l-1]=='4' && x[0]=='9')
                    printf("*\n");
                else if(x[0]=='1' && x[1]=='9' && x[2]=='0')
                    printf("?\n");

    }

return 0;
}
