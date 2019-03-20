#include<stdio.h>

int main()
{
int i,n;
char x[10],y[10],z[10];
printf("\nenter length of string");
scanf("%d",&n);
printf("\nenter the string");
for(i=0;i<=n;i++)
scanf("%c",&x[i]);
printf("you entered:");
for(i=0;i<=n;i++)
{
    printf("%c",x[i]);
}

y[n]=x[n];


printf("\nreverse is=");
for(i=n;i>0;i--)
   {
      printf("%c",x[i]);
      z[(n+1)-i]=x[i];

   }
}
