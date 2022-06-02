#include<stdio.h>
int main()
{
    int a,n;
    float t,f;
    printf("enter the amount and the tx percent\n");
    scanf("%d %d",&a,&n);
    t=a-(a*n/100);
    printf("%0.1f is the amount after discount",t);

}
