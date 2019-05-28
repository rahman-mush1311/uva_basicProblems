#include <stdio.h>

int main()
{
    int p=0;
    char ch;
    while(scanf("%c", &ch)!=EOF)
    {
        if(ch=='"')
        {
            if(p%2==0)printf("``");
            else printf("''");
            p++;
        }
        else printf("%c", ch);
    }
    return 0;
}
