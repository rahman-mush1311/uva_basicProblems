#include<stdio.h>
int main()
{
    int i,t,w1,t1,w2,t2,res;

    while(scanf("%d%d%d%d",&w1,&t1,&w2,&t2)!=EOF){

        if(w1==0&&t1==0&&w2==0&&t2==0)
            break;

        w1=(w1*60);
        t1=w1+t1;
        w2=(w2*60);
        t2=w2+t2;

        res=t2-t1;

        if(res<=0)
        {
            res=(res+1440);
        }
        printf("%d\n",res);
    }
}
