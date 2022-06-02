#include<stdio.h>
#include<string.h>
int main()
{
    int i,l=0,m=0;
    char str[100],s[100];
    scanf("%[^\n]",str,s);
    
    strcat(str,s);
    printf("%s",str);

}
