#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,s;
    char x[1020],y[1020];

    while(1)
      {
        scanf("%s",&x);
        l=strlen(x);
        s=0;

        strcpy(y,x);

        for(i=0;i<l;i++)
          {
              x[i]=x[i]-'0';
              s=s*10+x[i];
              s=s%11;

        }
        if(l==1 && s==0)
            break;
        else if(s==0)
            printf("%s is a multiple of 11.\n",y);
        else
            printf("%s is not a multiple of 11.\n",y);
    }
return 0;
}
