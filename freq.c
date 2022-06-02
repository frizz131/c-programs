#include<stdio.h>
int main()
{
    int i,n,max=0,b[100];
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    max++;
    for(i=0;i<max;i++)
    {
        b[i]=0;
    }
    for(i=0;i<n;i++)
    {
        b[a[i]]++;
    }
    for(i=0;i<max;i++)
    {
        if(b[i]>0)
        printf("%d = %d\n",i,b[i]);
    }
}

        
    
    

