#include<stdio.h>
#include<math.h>
int main()
{

    int n,i;
    float s=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
     s=s+ pow(i,(-1));
     printf("sum = %f",s);
}
