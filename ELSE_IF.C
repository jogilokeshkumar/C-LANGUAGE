#include<stdio.h>
int main()
{
 double cost;
 int dis;
 if(dis >= 0 && dis <= 100)
 cost = 5.00;
 else if(dis > 100 && dis < 500)
 cost = 8.00;
 else if(dis > 500 && dis < 1000)
 cost = 10.00;
 else if(dis >= 1000)
 cost = 12.00;

 printf("\n %lf",dis*cost);
 return 0;
}
