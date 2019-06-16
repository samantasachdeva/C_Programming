#include<stdio.h>

int main(void)
{
   int m,n,p,q,r,s,t,i=1;
   printf("enter the value of n\n");
   scanf("%d",&n);
   while(i<=n)
   {
       m=i;
       s=0;

       while(m>0)
       {
           q=m%10;
           r=i;
           t=1;
           while(r>0)
             {
              t=q*t;
              r=r/10;
             }

           s=s+t;
           m=m/10;

       }
        if(s==i)
           printf("%d\n",s);
           i++;

   }

}
