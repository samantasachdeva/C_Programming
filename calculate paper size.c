//calculating size of a0,a1,a2,....a8 sheet, if the dimensions of a0 sheet are given (1189 x 841 mm). the size of successive sheets is half of longer side, parallel to the shorter side.

#include<stdio.h>
int main()
{
    int a0,a1,a2,a3,a4,a5,a6,a7,a8,l,b,i;
    l=1189;
    b=841;
    printf("the dimensions of a0 are %d mm x %d mm",l,b);
    for(i=1;i<=8;i++)
    {

    if(l>b)
    {
        printf("\nthe dimensions of a%d are %d mm x %d mm",i,b,l/2);
        l=l/2;
    }
    else
    {
        printf("\nthe dimensions of a%d are %d mm x %d mm",i,l,b/2);
        b=b/2;
    }

    }

}
