//Program to display final amount

#include<stdio.h>
int main()

{
   float price,discount,final_amount,Discount;

   printf("Enter price   :\n");
   scanf("%f",&price);
   printf("Enter discount:");
   scanf("%f",&discount);


   Discount=price*discount;
   final_amount=price-Discount;

   printf("Discount      :%f\n",Discount);
   printf("final_amount  :%f",final_amount);


}
