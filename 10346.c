#include<stdio.h>
int main()
{
    int j,x,y,t,c,a,b;
while(scanf("%d%d",&x,&y)!=EOF)
{
      c=0;
      j=x;
      while(x>=y)
      {
       a=(x/y);
       b=(x%y);
       c=c+a;
       x=a+b;

      }
      c=c+j;
    printf("%d\n",c);

}
return 0;
}

