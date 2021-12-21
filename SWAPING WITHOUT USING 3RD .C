// Program to swap two numbers without using third varaible
#include<stdio.h>

int main()

{
     int a,b;
     printf("Enter a:");
     printf("Enter b:");
     scanf("%d%d",&a,&b);
     a=a+b;//a=30 (10+20)
     b=a-b;//b=10 (30-20)
     a=a-b;//a=20 (30-10)
     printf("a is %d\n" "b is %d",a,b);

 }


