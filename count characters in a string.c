#include<stdio.h>

int main()
{
int i,c=0;
char x[10];

printf("\nenter the string");
scanf("%s",x);
for(i=0;x[i]!=NULL;i++)
    c++;
printf("%d",c);
}
