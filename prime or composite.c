#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a +ve number");
    scanf("%d",&x);
    for(i=2;i<x;i++)
      {
         if(x%i==0)
         {
            break;
         }

      }

       if(i<=(x/2))
         printf("%d is a composite number", x);
        else
        printf("%d is a prime number", x);

}


or



#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a +ve number");
    scanf("%d",&x);
    for(i=2;i<x;i++)
      {
         if(x%i==0)
         {
            printf("%d is a composite number", x);
            break;
         }

      }

       if(i<=(x/2))
         printf("");
        else
        printf("%d is a prime number", x);

}




or



#include<stdio.h>
int main()
{
    int x,i;
    printf("Enter a +ve  number");
    scanf("%d",&x);
    for(i=2;i<x;i++)
      {
         if(x%i==0)
         {
             printf("%d is a composite number", x);
            break;
         }

      }

       if(i==x)


        printf("%d is a prime number", x);

}

