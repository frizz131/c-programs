#include <stdio.h>
 
int main()
{
    
    int i, x, pos, n;
    scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
        scanf("%d",&arr[i]);
 
    
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
    x = 50;
    pos = 5;
    n++;
    for (i = n-1; i >= pos; i--)
        arr[i] = arr[i - 1];
 
    
    arr[pos - 1] = x;
 
    
    for (i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");
 
    return 0;
}
