#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=0;i<=n;)

       {
          s=s+i;
          i+=2;
       }
       printf("sum of even numbers from 0 to n is %d",s);
}
