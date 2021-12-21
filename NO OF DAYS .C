// Program to display the numbers of day in month

#include<stdio.h>

int main()

{
   int month_no,no_of_days;
   printf("Enter the month no  :");
   scanf("%d",&month_no);

   if(month_no==1||month_no==3||month_no==5||month_no==7||month_no==8||month_no==10||month_no==12)
   printf("Number of days are :31days");
   else
      if(month_no==4||month_no==6||month_no==9||month_no==11)
      printf("Number of days are :30days");
      else
      printf("Number of days are :28days");

}
