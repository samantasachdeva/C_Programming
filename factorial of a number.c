#include<stdio.h>
int main()
{
    int n,i,p=1;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
        p=p*i;
    printf("%d",p);
}


