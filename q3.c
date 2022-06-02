#include<stdio.h>
int main()
{
    int i=0;
    
    for(int j=1;j<=15;j++)
    {
        scanf("%d",&i);
        if(i>0 && i<=5)
        printf("Still a baby\n");
        else if(i>6 && i<=17)
        printf("attending school\n");
        else
        printf("adult life\n");
        
    }
}
