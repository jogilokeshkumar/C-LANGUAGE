//Program to print smallest of 5 numbers

#include<stdio.h>

int main()

{
    int num,digit,total;
    printf("Enter a number  :");
    scanf("%d",&num);

    while(num!=0)
    {
      digit=num%10;
      num=num/10;
      total+=digit;
    }

    printf("total sum of digits is %d",total);
}
