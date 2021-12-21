
#include<stdio.h>

int main()
{
  float P,R,T,SI;
  printf("---------------SIMPLE INTREST CALCULATION-----------------\n\n");
  printf("Enter the principal amount :");
  scanf("%f",&P);
  printf("Enter the rate :");
  scanf("%f",&R);
  printf("Enter the time :");
  scanf("%f",&T);

  SI=(P*T*R)/100;

  printf("simple_intrest = %.2f",SI);

  return 0;

}
