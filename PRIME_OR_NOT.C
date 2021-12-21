// Program to display whether it is a prime number or not

#include<stdio.h>

int main()

{
   int i,num,count=0;
   printf("Enter a number  :");
   scanf("%d",&num);

   for(i=2;i=num/2;i++)

      {
      if(num%i==0)
      printf("%d",num);
      count=1;break;

      }

      if(count==0)
        printf("%d is a prime number",num);
      else
        printf("\n It is not a prime number");

}
