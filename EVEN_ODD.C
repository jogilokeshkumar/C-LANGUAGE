//Program to display even and odd in 10 numbers

#include<stdio.h>

int main()

{
   int num,i,evencount=0,oddcount=0;

   i=1;
   while(i<=10)

    {
       printf("Enter a number  :");
       scanf("%d",&num);
       i++;

   if(num%2==0)
   evencount++;
   else
   oddcount++;
   }
   printf("Odd count is  %d\n Even count is %d",oddcount,evencount);
}
