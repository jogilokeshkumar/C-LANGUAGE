// To display whether it is a perfect number or not

#include<stdio.h>

int main()

{
   int i,num,sum=0;
   printf("Enter a number  :");
   scanf("%d",&num);

   for(i=1;i<=num/2;i++)
      {
         if(num%i == 0)
           sum +=i;
      }

       if(sum==num)
       printf("It is a perfect number");
       else
    printf("It is not a perfect number");



}
