// Program to display smallest of three numbers by conditional expressions

#include<stdio.h>

int main()

{
    int a,b,c,temp,smallest;
    printf("Enter three numbers  :");
    scanf("%d%d%d",&a,&b,&c);

    temp= a<b?a:b;

    smallest= c<temp?c:temp;

    printf("The smallest number is :%d",smallest);





}
