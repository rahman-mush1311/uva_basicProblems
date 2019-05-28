#include<stdio.h>
int main()
{
    int i,j,n,c,temp;
    int x[1000];

    while(scanf("%d",&n)!=EOF)
    {
    c=0;
    for(i=0;i<n;i++)
    {
    scanf("%d",&x[i]);
    }
    for(i=0;i<n-1;i++)
    {
    for(j=i+1;j<n;j++)
    {
    if(x[i]>x[j]){
        c=c+1;
    }
    }
    }
    printf("Minimum exchange of operations : %d\n",c);
    }
return 0;
}
