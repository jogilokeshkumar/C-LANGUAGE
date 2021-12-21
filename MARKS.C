// program to display total and avg of subjects

#include <stdio.h>

int main()

{

   float m1,m2,m3,total,avg;
   printf("enter marks of each subject");
   scanf("%f%f%f",&m1,&m2,&m3);
   total=m1+m2+m3;
   printf("total is %f", total);
   avg=(m1+m2+m3)/3;
   printf("avg is %f",avg);

}
