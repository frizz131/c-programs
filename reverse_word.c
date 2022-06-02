#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
    char str[20],s[20];
    int i, len, temp=0,c=0;
    printf("Enter a string:");
    scanf("%s", str);
    len = strlen(str);
    for(i=0;i<len;i++)
    {
        if(str[i]!=' ')
        {
            s[c]=str[i];
            c++;
        }
        else
        {
            
        }

    }
