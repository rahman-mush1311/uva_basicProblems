#include<stdio.h>

int main()
{
    long long int x,y,z;
    int c,i=1;

    while(scanf("%lld%lld",&x,&y)!=EOF)
      {
            c=0;
            z=x;
          if(x<0 && y<0)
            break;

          while(x<=y)
            {
                if(x==1){
                    c++;
                    break;
                }
                else
                {
                    if(x%2==0){
                        c++;
                        x=x/2;
                    }
                    else
                      {
                        c++;
                        x=3*x+1;
                    }

                }

          }
          printf("Case %d: A = %lld, limit = %lld, number of terms = %d\n",i,z,y,c);
          i++;

    }
return 0;
}
