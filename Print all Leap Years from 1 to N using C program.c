#include<stdio.h>

int main(void)
{
    int n,i;

    printf("enter the value of n");
    scanf("%d",&n);
    printf("leap years are:\n");
    i=1;
    while(i<=n)
    {
        if(i%4==0)
            printf("%d\n",i);
            i++;

    }

}
