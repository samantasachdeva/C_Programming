

#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        s=s+i;
    printf("sum of numbers 1 to %d is %d",n,s);

}
