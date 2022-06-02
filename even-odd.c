#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    switch(n%2==0)
    {
        case 0:
        printf("%d is odd",n);
        break;

        case 1:
        printf("%d is even",n);
        break;

        default:
        printf("error");
    }

}
