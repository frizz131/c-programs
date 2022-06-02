#include<stdio.h>
int main()
{
    int i,n,c=0,m=100;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>c)
        c=a[i];
        else if(a[i]<m)
        m=a[i];
    }
    printf("%d %d",c,m);


}
