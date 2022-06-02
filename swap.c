#include <stdio.h>
#include <math.h>
int main()
{
    int a,b,c;
    scanf("%d %d",&a,&b);
    printf("%d %d\n",a,b);
    c=a;
    a=b;
    b=c;
    printf("After swap %d %d\n",a,b);
    c=pow(a,b);
    printf("%d",c);
}
