// program to display centimeters to millimeters and inches

#include <stdio.h>

int main()

{
   int cm,mm,in;
   printf("enter the length in cm");
   scanf("%d",&cm);
   mm=cm*10;
   in=cm/2.54;
   printf("mm is %d \n", mm );
   printf("in is %d",in);

}
