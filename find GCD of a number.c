 #include<stdio.h>
int main(void)
{
  int a,b,c,d,e;
  printf("enter 2 numbers");
  scanf("%d %d",&a,&b);
  d=a;
  e=b;
  while(b>0)
  {
    c=a%b;
    a=b;
    b=c;
  }
  printf("GCD of %d and %d is %d",d,e,a);
}
