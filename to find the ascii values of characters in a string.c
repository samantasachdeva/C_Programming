//to find ASCII values of a string

#include<stdio.h>
int main()
{

    char a[10];
    int i;
    printf("enter the string");
    scanf("%s",&a);
    for(i=0; a[i]!=NULL; i++)
        printf("\nthe ASCII code of %c is %d",a[i],a[i]);
}
