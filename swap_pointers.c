#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    scanf("%d %d",&a,&b);
    p=&a;
    q=&b;
    printf("%p %p\n",p,q);
    printf("original numbers a=%d and b=%d\n",a,b);
    *p=*p+*q;
    
    *q=*p-*q;
    
    *p=*p-*q;
    printf("After swapping a=%d and b=%d",*p,*q);
    
}
