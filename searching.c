#include<stdio.h>
int main()
{
    int i,n,c,k=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&c);
    for(i=0;i<n;i++)
    {
        if(a[i]==c)
        {
            printf("element found at index %d",i);
            k=1;
            break;
        }
    }
    if(k==0)
    printf("element not found");
}
