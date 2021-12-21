// Program to display net salary for grades

#include<stdio.h>

int main()

{
   float salary,grade,net_salary,hra;
   printf("Enter salary :\n");
   scanf("%f",&salary);
   printf("Enter grade  :");
   scanf("%f",&grade);

   if (grade=1)
  {

   hra=salary*0.4;
   net_salary=hra+salary;

   printf("net_salary is %f",net_salary);
  }
   else
  {

   hra=salary*0.3;
   net_salary=hra+salary;

   printf("net_salary is %f",net_salary);

  }
}
