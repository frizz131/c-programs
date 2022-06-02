#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=n-1;i>=0;i--)
    {
        b[c]=a[i];
        c++;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",b[i]);
    }
}
