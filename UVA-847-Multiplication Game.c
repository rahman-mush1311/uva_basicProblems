#include<stdio.h>

int main()
{
    long long int i,n,c,p;

    while(scanf("%lld",&n)!=EOF)
      {
          c=0;
          p=1;
          i=2;
          while(1)
            {
             p=p*i;
             if(p>=n){
             c++;
             break;
          }
            }
        if(c%2==0)
        printf("Ollie wins\n");
        else
        printf("Stan wins\n");

    }
return 0;
}
