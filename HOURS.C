// Program to show time in seconds

#include<stdio.h>

int main()

{
  int hrs,min,sec,Sec;
  printf("enter hrs,min,sec");
  scanf(" %d%d%d",&hrs,&min,&sec);

  hrs=3600*sec;
  min=60*sec;
  Sec=hrs+min+sec;
  printf("Time in seconds is %d",Sec);

}
