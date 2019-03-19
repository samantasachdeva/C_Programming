#include<stdio.h>
int main()
{

    int x,y,n,count=0;
    printf("enter a number");
    scanf("%d", &x);
    while(x!=0)
    {
        x=x/10;
        count++;
    }

    printf("no. of digits=%d",count);


}
