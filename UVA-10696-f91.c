#include<stdio.h>
int func(int n)
{
    if(n>=101)
        return n-10;
    else if(n<=100)
        return func(func(n+11));

}
int main()
{
    int x,y;
    while(scanf("%d",&x)!=EOF)
    {
     if(x==0)
        break;
     else{
        y=func(x);
     printf("f91(%d) = %d\n",x,y);
     }
    }
return 0;
}
