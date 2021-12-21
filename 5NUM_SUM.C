// Program to display sum of 5 numbers

#include<stdio.h>

int main()

{
   int total=0,num,i;

   for(i=1;i<=5;i++)
    {
       printf("Enter a number  :");
       scanf("%d",&num);
       total+=num;
    }

    printf("Total is %d",total);
}
