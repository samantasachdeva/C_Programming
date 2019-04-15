#include<stdio.h>

int main(void)
{
  int n=1,i,ch;
  while(n>0)
  {
    printf("enter the number\n");
    scanf("%d",&i);
    if(i>0)
    printf("+ve");
    else if(i<0)
    printf("-ve");
    else
    printf("zero");
    printf("\ndo you want to check again? enter 1 for yes and 0 for no");
 
    scanf("%d",&ch);
    
    if(ch==1)
    n++;
    else if(ch==0)
    {
    n=0;
    printf("see you soon!");
    }
  }



  }
