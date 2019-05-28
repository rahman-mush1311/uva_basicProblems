#include<stdio.h>

int main()
{
    int i,j,l;
    char x;

    while(scanf("%c",&x)!=EOF)
    {
        if(x=='A' || x=='C' || x=='B')
            printf("2");
        else if(x=='D' || x=='E'|| x=='F')
            printf("3");
        else if(x=='G' || x=='H' || x=='I')
            printf("4");
        else if(x=='J' || x=='K' || x=='L')
            printf("5");
        else if(x=='M' || x=='N' ||x=='O')
            printf("6");
        else if(x=='P'|| x=='Q' || x=='R' ||x=='S')
            printf("7");
        else if(x=='T' || x=='U' || x=='V')
            printf("8");
        else if(x=='W' || x=='X' || x=='Y' || x=='Z')
            printf("9");
        else
            printf("%c",x);
    }

return 0;
}
