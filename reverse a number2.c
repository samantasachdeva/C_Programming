#include<stdio.h>
int main(void)
{
  int a,i=0,j,c,b,d,e=0;
  printf("enter the number");
  scanf("%d",&a);
  b=a;
  while(a>0)
  {
    i++;
    a=a/10;
  }
  while(i>0)
  {
    c=b%10;
    j=i;
    d=c;
    while((j-1)>=1)
    {
      d=d*10;
      j--;
    }
    e=e+d;
    b=b/10;
    i--;
  }
  printf("%d",e);
}
