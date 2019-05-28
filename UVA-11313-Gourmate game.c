#include<stdio.h>

int main()
{
    int i,t,n,m,x,y,z;
    scanf("%d",&t);

    for(i=0;i<t;i++)
      {
          scanf("%d%d",&n,&m);
          x=n-1;
          y=m-1;

          if(x%y!=0)
            printf("cannot do this\n");
          else{
            z=x/y;
            printf("%d\n",z);
          }

    }
return 0;
}
