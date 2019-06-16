#include<stdio.h>
int main(void)
{
    int i;
    char j='Y';

    while(j=='Y')
    {   printf("enter the number");
        scanf("%d",&i);
        if(i>0)
        printf("+ve");
        else if (i<0)
        printf("-ve");
        else
        printf("zero");
        printf("\n do you want to check again? \n enter Y or N");
        fflush(stdin);
        scanf("%c",&j);


    }

}
