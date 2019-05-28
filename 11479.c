#include<stdio.h>

int main()
{
    long int a,b,c;
    int i,t;

    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
      scanf("%ld %ld %ld",&a,&b,&c);

      if((a+b)>c && (b+c)>a && (c+a)>b)
      {
        if(a==b && a==c)
        printf("Case %d: Equilateral\n",i+1);
      else if(a==b || b==c || c==a)
        printf("Case %d: Isosceles\n",i+1);
      else
        printf("Case %d: Scalene\n",i+1);
      }
      else
        printf("Case %d: Invalid\n",i+1);

    }
    return 0;
}
