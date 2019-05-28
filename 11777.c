#include<stdio.h>
int main()
{
    int i,j,k,t1,t2,f,a,t,c1,c2,c3;
    float avg,sum;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
     scanf("%d%d%d%d%d%d%d",&t1,&t2,&f,&a,&c1,&c2,&c3);
     if(c1<=c2 && c1<=c3)
      avg=(c2+c3)/2;
     else if(c2<=c1 && c2<=c3)
      avg=(c1+c3)/2;
     else if(c3<=c1 && c3<=c2)
       avg=(c1+c2)/2;

    sum=t1+t2+f+a+avg;

    if(sum>=90)
    printf("Case %d: A\n",i+1);
    else if(sum>=80)
    printf("Case %d: B\n",i+1);
    else if(sum>=70)
    printf("Case %d: C\n",i+1);
    else if(sum>=60)
    printf("Case %d: D\n",i+1);
    else
    printf("Case %d: F\n",i+1);

}
}
