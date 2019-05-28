#include<stdio.h>
#include<math.h>
int main()
{
    long int a,b,c,d,i,j;
    while(scanf("%ld%ld",&a,&b)!=EOF)
    {
      if(a==0 && b==0)
        break;
      c=0;
      for(i=a;i<=b;i++)
      {
          j=i;
          d=sqrt(j);
          if(d*d==j)
          c=c+1;

      }
      printf("%ld\n",c);
    }

}
