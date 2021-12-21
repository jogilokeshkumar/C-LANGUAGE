//Program to print LCM of two numbers

#include<stdio.h>

int main()

{
    int a,b,i;

    printf("Enter two numbers  :");
    scanf("%d%d",&a,&b);

    i=a>b?a:b;

    while(i%a!=0 || i%b!=0)
    i++;

    printf("LCM of numbers is %d",i);
}
