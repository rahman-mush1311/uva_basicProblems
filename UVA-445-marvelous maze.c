#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    char p;
    int l,i,j,n;

     while(gets(str)){
    l=strlen(str);
    printf("%d=l\n",l);
    n=0;
    for(i=0;i<l;i++)
    {
        if(str[i]<='0' && str[i]>='9'){
            str[i]=str[i]-'0';
            n=str[i];
            i++;
            printf("%d=i\n",i);
            if(str[i]=='b'){
            for(j=0;j<n;j++)
                printf(" ");
            }
            else if(str[i]<='A' && str[i]>='Z'){
             p=str[i];
             for(j=0;j<n;j++)
             printf("%c",p);
            }

            else if(str[i]=='!'){
            for(j=0;j<n;j++)
            printf("\n");
            }

            else{
            for(j=0;j<n;j++)
            printf("*");
            }
    }
}
    }
return 0;
}


