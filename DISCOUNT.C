// program to display amount after a discount of 20%

#include<stdio.h>

int main()

{
  int quantity,price,discount,amount;
  printf("enter the quantity of product");
  scanf("%d",&quantity);
  printf("enter the price of product");
  scanf("%d",&price);
  amount=(quantity*price);
  printf("amount is %d \n",amount);
  amount=amount-(0.2*amount);
  printf("amount after discount is %d",amount);


}
