// Program to diplsya largest of 5 using for

#include<stdio.h>

int main()

{
   int i,num,large=0;

    for(i=1;i<=5;i++)
      {
       printf("Enter a number :");
       scanf("%d",&num);

      if(num>large)
        large=num;
      }

    printf("%d is largest number",large);
}
