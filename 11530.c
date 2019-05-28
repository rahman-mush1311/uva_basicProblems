#include<stdio.h>
#include<string.h>
int main()
{
    long int t,i,l,j,c;
    char str[105];
    scanf("%ld",&t);
    getchar();

    for(i=0;i<t;i++)
    {
    gets(str);
    c=0;
    l=strlen(str);

    for(j=0;j<l;j++)
    {
    if(str[j]==' '){
        c=c+1;
    }
    else if((str[j]=='a')||(str[j]=='d')||(str[j]=='g')||(str[j]=='j')||(str[j]=='m')||(str[j]=='p')||(str[j]=='t')||(str[j]=='w')){
        c=c+1;
    }
    else if((str[j]=='b')||(str[i]=='e')||(str[i]=='h')||(str[i]=='k')||(str[i]=='n')||(str[i]=='q')||(str[i]=='u')||(str[i]=='x')){
        c=c+2;
    }
    else if((str[j]=='c')||(str[j]=='f')||(str[j]=='i')||(str[j]=='l')||(str[j]=='o')||(str[j]=='r')||(str[j]=='v')||(str[j]=='y')){
        c=c+3;
    }
    else if((str[j]=='s')||(str[j]=='z')){
        c=c+4;
    }
    }
    printf("Case #%ld: %ld\n",i+1,c);
    }
    return 0;
}
