#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,c;
    char a[1020];

    while(gets(a))
    {
        l=strlen(a);
        c=0;
        for(i=0;i<l;i++)
          {
             if((a[i]>='A'&&a[i]<='Z') || (a[i]>='a'&&a[i]<='z'))
            continue;
                 else
                    if((a[i-1]>='A'&&a[i-1]<='Z') || (a[i-1]>='a'&&a[i-1]<='z'))
                c++;
        }
        printf("%d\n",c);
    }
    return 0;
}
