#include<stdio.h>
int main()
{
    int a,b,c,d,l,y,i,j,x;

    while(scanf("%d%d%d%d%d",&a,&b,&c,&d,&l)!=EOF)
    {
        if(a==0 && b==0 && c==0 && d==0 && l==0)
        break;
        j=0;
        for(i=0;i<=l;i++)
        {
        x=i;
        y=(a*x*x)+(b*x)+c;

        if(d!=0){
        if(y%d==0)
        {
            j=j+1;
        }
    }
        }
    printf("%d\n",j);

}
return 0;
}
