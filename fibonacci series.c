#include<stdio.h>
int main()
{
    int n,i,c=0,a,b,x[15];
    printf("Enter the +ve non-zero value of n");
    scanf("%d",&n);
    x[1]=0;
    x[2]=1;
    c=x[1]+x[2];
    if(n==1)
    {
        printf("%d",x[1]);
    }

     else if(n==2)
     {
     printf("%d",x[2]);
     }

     else
     {
        printf("%d",x[1]);
        printf("\n%d",x[2]);
        for(i=3;i<=n;i++)
        {
           x[i]=x[i-2]+x[i-1];
           printf("\n%d",x[i]);

        }

     }

}



