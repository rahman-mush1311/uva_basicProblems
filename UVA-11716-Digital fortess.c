#include<stdio.h>
#include<string.h>
#include<math.h>

int main()
{
    int i,j,k,l,m,n,y,z,t;
    double b;
    char x[100][100];
    char a[1020];

    scanf("%d",&t);
    getchar();

    for(z=0;z<t;z++){
    gets(a);
    l=strlen(a);

    b=sqrt(l);
    m=b;
    if(m!=b)
        printf("INVALID");

    else{
        y=b;
        i=0;

        for(j=0;j<y;j++)
          {
            for(k=0;k<y;k++)
              {
                x[j][k]=a[i];
                i++;
            }
        }
         for(j=0;j<y;j++)
          {
            for(k=0;k<y;k++)
              {
                printf("%c",x[k][j]);
            }
        }
    }
        printf("\n");
 }
return 0;
}
