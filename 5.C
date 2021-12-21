#include <stdio.h>

int main()
{
   double cost;
   int d;
   printf("\n Cost Calculation\n\n");
   printf("\n Give the Distance :");
   scanf("%d",&d);
   if(d>=0 &&d<=100)
   {
       cost=5.00;
       printf("\n Cost : %f", cost);
   }
       else if(d>100 && d<500)
       {
           cost=8.00;
           printf("\n Cost : %f",cost);
       }
       else if(d>500&&d<1000)
       {
           cost=10.00;
           printf("\n cost is %f", cost);
       }
       else if(d>=1000)
       {
           cost=12.00;
           printf("\n cost is :%f", cost);
       }

}
