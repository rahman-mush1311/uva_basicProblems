#include<stdio.h>
#include<string.h>

int main()
{
    int i=1;
    char str[100];
    while(gets(str)!=EOF)
    {

        if(strcmp(str,"*")==0)
            break;
        if(strcmp(str,"Hajj")==0)
        printf("Case %d: Hajj-e-Akbar\n",i);
        else
        printf("Case %d: Hajj-e-Asghar\n",i);
        i++;
    }
    return 0;
}
