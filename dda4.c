#include<stdio.h>
int main()
{
    int n,i,c=0,j;
    scanf("%d",&n);
    int a[n][n];
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);

        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
           if(i==0 || j==0 || i==(n-1)||j==(n-1))
           printf("%d",a[i][j]);
           else
           printf("%d",c);

        }
        printf("\n");
    }
}
