#include<stdio.h>

int main()
{
    int x,i,n,y;
    printf("enter no. of digits");
    scanf("%d", &n);
    printf("enter a no.");
    scanf("%d",&x);
    printf("no. entered is %d",x);
    printf("\nreverse is");

    for(i=0;i<n;i++)
       {
        y=x%10;
        x=x/10;
       printf("%d",y);

       }
    return 0;
}
