// Program to swap two numbers without using third varaible
#include<stdio.h>

int main()

{
     int a,b,temp;
     printf("Enter a:");
     printf("Enter b:");
     scanf("%d%d",&a,&b);
     temp=a;
     a=b;
     b=temp;
     printf("a is %d\n" "b is %d",a,b);

}
