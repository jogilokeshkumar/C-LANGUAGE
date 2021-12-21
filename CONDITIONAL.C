#include<stdio.h>

int main()
{
  int a,b,max;

  printf("-------CONDITIONAL OPERATORS-------\n\n");
  printf("Enter two numbers  :\n");
  scanf("%d%d",&a,&b);

  max= (a > b) ? a : b;

  printf("Maximum between %d and %d is %d",a,b,max);
}
