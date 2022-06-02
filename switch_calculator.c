#include<stdio.h>
int main()
{
    char a;
    int d;
    int c,b;
    scanf("%c",&a);
    
    switch(a)
    {
        case '+':
        scanf("%d %d",&c,&b);
        d=c+b;
        printf("%d is ths sum",d);
        break;

        case '-':
        scanf("%d %d",&c,&b);
        d=c-b;
        printf("%d is ths difference",d);
        break;

        case '*':
        scanf("%d %d",&c,&b);
        d=c*b;
        printf("%d is ths product",d);
        break;

        case '/':
        scanf("%d %d",&c,&b);
        d=c/b;
        printf("%d is ths quotient",d);
        break;

        case '%':
        scanf("%d %d",&c,&b);
        d=c%b;
        printf("%d is ths remainder",d);
        break;

        default:
        printf("invalid");
    }
}
