#include<stdio.h>
int main()
{
    int w,h,a;
    printf("enter the wages per hour and total working hours\n");
    scanf("%d %d",&w,&h);
    if(h>30)
    {
        a=((h-30)*w*2)+(30*w);
    }
    else
    {
        a=(h*w);
    }
    printf("%d is the total amount to be paid for %d working hours",a,h);
}
