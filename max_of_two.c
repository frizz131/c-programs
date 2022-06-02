#include<stdio.h>
int main()
{
    int n,m;
    scanf("%d%d",&n,&m);
    switch(n>m)
    {
        case 0:
        printf("%d is greater",m);
        break;

        case 1:
        printf("%d is greater",n);
        break;

        default:
        printf("error");
    }

}
