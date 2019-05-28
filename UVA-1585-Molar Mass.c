#include<stdio.h>
#include<string.h>
int main()
{
  int i,l,n,t,j;
  double sum;
  char str[100];
  scanf("%d",&t);
  getchar();


    for(j=0;j<t;j++){
    gets(str);

       l=strlen(str);
       sum=0.00;
       n=1;
        for(i=0;i<l;i++){
      if(str[i]=='C')
        {
            if(str[i+1]<='0' && str[i+1]>='9')
                n=str[i+1]-'0';
            if(str[i+2]<'0' && str[i+2]>='9'){
                n=n+(10*(str[i+2]-'0'));
                i++;
            }
            sum=sum+n*12.01;
            i++;
      }
        else if(str[i]=='H')
        {
            if(str[i+1]<='0' && str[i+1]>='9')
                n=str[i+1]-'0';
            if(str[i+2]<'0' && str[i+2]>='9'){
                n=n+(10*(str[i+2]-'0'));
                i++;
            }
            sum=sum+n*1.008;
            i++;
      }
       else if(str[i]=='N')
        {
            if(str[i+1]<='0' && str[i+1]>='9')
                n=str[i+1]-'0';
            if(str[i+2]<'0' && str[i+2]>='9'){
                n=n+(10*(str[i+2]-'0'));
                i++;
            }
            sum=sum+n*14.01;
            i++;
      }
       if(str[i]=='O')
        {
            if(str[i+1]<='0' && str[i+1]>='9')
                n=str[i+1]-'0';
            if(str[i+2]<'0' && str[i+2]>='9'){
                n=n+(10*(str[i+2]-'0'));
                i++;
            }
            sum=sum+n*16.00;
            i++;
      }

  }
  printf("%lf\n",sum);
   }
  return 0;

}
