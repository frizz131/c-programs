#include<stdio.h>
#include<math.h>
int main()
{
    int n,i,d,sum=0;
    scanf("%d",&n);
    for(i=n;i>0;i=i/10)
    {
        d=i%10;
        sum=(sum*10)+d;
        


    }
    if(n==sum)
    printf("palindrome number");
    else
    printf("not a palindrome number");
    

}
