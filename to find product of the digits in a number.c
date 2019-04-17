#include<stdio.h>
int main(void)
{
  int a,b,c=1;
  printf("enter the number");
  scanf("%d",&a);
  while(a>0)
  {
    b=a%10;
    c=c*b;
    a=a/10;
  }
  printf("product of the digits=%d",c);
}
