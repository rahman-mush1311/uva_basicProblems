#include<stdio.h>

int main()
{
    int i,j,n,c,r,x,y,b,d;
    int a[100][100];
    while(scanf("%d",&n)&&n)
      {
        for(i=0;i<n;i++)
          {
            for(j=0;j<n;j++)
             {
               scanf("%d",&a[i][j]);

            }
        }
        b=0;
        d=0;
        for(i=0;i<n;i++)
         {   c=0;
             for(j=0;j<n;j++)
                c=c+a[i][j];
        if(c%2!=0)
          {
              x=i;
              b++;
        }
    }

          for(i=0;i<n;i++)
         {   r=0;
             for(j=0;j<n;j++)
                r=r+a[j][i];
          if(r%2!=0)
          {
              y=j;
              d++;
        }
    }

        if(c==0 && d==0)
            printf("Ok\n");
        else if(c==1 && d==1)
            printf("Change bit (%d,%d)\n",x,y);
        else
            printf("Corrupt\n");

    }
return 0;
}
