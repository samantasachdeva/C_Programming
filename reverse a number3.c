#include<stdio.h>
int main(void)
{
  int a,b,c,s=0;
  printf("enter a no.");
  scanf("%d",&a);
  while(a>0)
  {
    b=a%10;
    c=a;
    while(c>9)
    {
      b=b*10;
      c=c/10;
    }
    s=s+b;
    a=a/10;
  }
  printf("%d",s);
}
