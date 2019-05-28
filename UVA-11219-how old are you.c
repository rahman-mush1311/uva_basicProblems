#include<stdio.h>
int main()
{
    int i,t,d1,m1,y1,d2,m2,y2,a;
    scanf("%d",&t);
    printf("\n");

    for(i=0;i<t;i++)
    {
        scanf("%d/%d/%d",&d1,&m1,&y1);
        scanf("%d/%d/%d",&d2,&m2,&y2);
        a=y1-y2;
    if(m1<m2)
        a=a-1;
    else if(m1==m2 && d1<d2)
        a=a-1;
    if(a<0)
        printf("Case #%d: Invalid birth date\n\n",i+1);
    else if(a>130)
        printf("Case #%d: Check birth date\n\n",i+1);
    else
        printf("Case #%d: %d\n\n",i+1,a);

    }
}
