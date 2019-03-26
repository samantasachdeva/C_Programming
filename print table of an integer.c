#include<stdio.h>
int main()
{
    int x,i;
    printf("enter a number");
    scanf("%d",&x);
    printf("multiplication table is:");
    for(i=1;i<=10;i++)
    {
      printf("\n%d*%d=%d",x,i,x*i);
    }
}
