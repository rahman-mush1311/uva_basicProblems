#include<stdio.h>
#include<math.h>
#include <string.h>

int main()
{
    long long int x,n,i,y,sum, l, j;
    char num[110];

    while(gets(num))
    {
        if(num[0]=='0')break;
        i=1;
        sum=0;
        l=strlen(num);
        for(j=l-1; j>=0; j--)
        {
            n=num[j]-'0';
            n=n*(pow(2,i)-1);
            sum+=n;
            i++;
        }
        printf("%lld\n",sum);
    }
    return 0;
}
