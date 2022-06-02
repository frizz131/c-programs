#include<stdio.h>
int main()
{
    int i,k=0;
    char str[100],s[100];
    scanf("%[^\n]",str);
    for(i=0;str[i]!='\0';i++)
    {
        s[i]=str[i];        
    }
    s[i]=0;
    printf("%s",s);
}
