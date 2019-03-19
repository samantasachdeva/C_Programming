#include<stdio.h>
#include<math.h>
int main()
{

    int x,n,i,y,u,z=0;


    printf("enter no. of digits");
    scanf("%d", &n);
    printf("enter a no.");
    scanf("%d",&x);
    printf("no. entered is %d",x);
    u=x;
    printf("\nreverse is");

    for(i=0;i<n;i++)
       {
        y=x%10;
        x=x/10;
       printf("%d",y);
       z=z+y*pow(10,(n-1)-i);

       }

       if(u==z)
       {
            printf("\npalindrome");
       }


       else
        printf("\nnot palindrome");
    return 0;

}
