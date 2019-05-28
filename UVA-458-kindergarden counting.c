#include<stdio.h>
#include<string.h>

int main()
{
    int i,l,c;
    char str[1010];
    while(gets(str))
    {
        l=strlen(str);
        c=0;
        for(i=0;i<l;i++)
        {
            printf("%c", str[i]-7);
        }
        printf("\n");
    }
    return 0;
}
