//There is a class of N students and the task is to find the top K marks-scorers. Write a program that will print the index of the toppers of the class which will be same as the index of the student in the input array (use 0-based indexing). First print the index of the students having highest marks then the students with second highest and so on. If there are more than one students having same marks then print their indices in ascending order.

#include<stdio.h>
int main()
{
    int n,i,j,k,a[20],b[20],c,l=0;
    printf("Enter the value of n");
    scanf("%d",&n);
    printf("Enter the division");
    scanf("%d",&k);

    printf("enter marks");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);

   for(i=0;i<n;i++)
    b[i]=a[i];

    for(j=0;j<n-1;j++)
    {

    for(i=0;i<n;i++)
    {
        if(a[i]<a[i+1])
        {
            c=a[i];
            a[i]=a[i+1];
            a[i+1]=c;
        }
    }

    }
    for(i=0;i<n;i++)
     printf("\n%d",a[i]);
     printf("\ntoppers are");




      for(i=0;i<n;i++)
      {
          a[n]=0;
          if(a[i]==a[i+1]);
          
          else if(l>=k);



        else
        {
            for(j=0;j<n;j++)
          {

            if(a[i]==b[j])
                {
                    printf("\n%d",j);

                }

          }
            l++;
        }


      }
     }



