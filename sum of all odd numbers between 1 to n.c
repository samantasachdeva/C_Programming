#include<stdio.h>
int main()
{
    int n,i,s=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;)

       {
          s=s+i;
          i+=3;
       }
       printf("sum of odd numbers from 0 to n is %d",s);
}
