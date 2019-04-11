
#include <stdio.h>
int main(void)
{
  int i,n,a[20],c=0,b[20];
  printf("enter n");
  scanf("%d",&n);
  printf("enter the no.");
  while(i<n)
  {
    scanf("%d",&a[i]);
    i++;

  }

   b[0]=0;
   i=0;
  while(i<n && a[i]>b[0])
  {
    b[0]=a[i];
    i++;
  }

  printf("\nlargest no. is %d",b[0]);

  i=0;
  while(i<n)
  {
    if(a[i]==b[0])
      c++;
      i++;
  }

  printf("\nit occurs %d times",c);
}
