// Program to print sum of positive numbers5


#include<stdio.h>

int main()

{
   int num,i,psum=0;

   for(i=1;i<=10;i++)
       {
           printf("Enter a number  :");
           scanf("%d",&num);



       if(num>0)
       psum+=num;
       }

    printf("Sum of positive numbers is %d",psum);
}
