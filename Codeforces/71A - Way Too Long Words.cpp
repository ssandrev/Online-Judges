//71A - Way Too Long Words

#include<stdio.h>
#include<string.h>

int main()
{
    int n,t;
    char s[100];
    scanf("%d",&n);
    while(n--){
     scanf("%s",&s);
     t=strlen(s);
     if(t<=10)
     printf("%s\n",s);
     else
     printf("%c%d%c\n",s[0],t-2,s[t-1]);
    }
    return 0;
    }