#include<stdio.h>
int main()
{
    int i,n,k=0,m=0;
    scanf("%d",&n);
    int a[n],b[n/2],c[n/2];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
        b[k]=a[i];
        k++;
        }
        else
        {
        c[m]=a[i];
        m++;
        }
    }
    for(i=0;i<=k;i++)
    {
        printf("%d ",b[i]);
        
    }
    printf("\n");
    for(i=0;i<=m;i++)
    {
        printf("%d ",c[m]);
    }
}
