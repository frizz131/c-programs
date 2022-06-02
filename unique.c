#include<stdio.h>
int main()
{
    int i,n,c=0;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(a[i]==a[j])
            c++;
        }
        if(c==1)
        printf("%d is a unique element\n",a[i]);
        c=0;
    }
    


}
