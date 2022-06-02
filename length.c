#include<stdio.h>
int main()
{
    int i,k=0;
    char str[100];
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        k++;
    }
    printf("length is %d",k);
    

}
