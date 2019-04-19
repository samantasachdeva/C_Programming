 #include<stdio.h>
int main(void)
{
  int i=0,n,x,y=32767,c=0;
  printf("enter the value of n");
  scanf("%d",&n);
  printf("enter the no.");
  while (i<n)
  {
    scanf("%d",&x);
    if(x<=y)
    {
      if(x<y)
      {
        c=0;
        c++;
      }
      else c++;
      y=x;
    }
    i++;
  }
  printf("min no. is %d and it's freq is %d",y,c);

}
