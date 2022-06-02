#include<stdio.h>
int main()
{
    int i,n;
    int* p;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    p=&a[n-1];
    for(i=0;i<n;i++)
    {
        b[i]=*p;
        *p=*p-1;
    }

    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
    

    
}
