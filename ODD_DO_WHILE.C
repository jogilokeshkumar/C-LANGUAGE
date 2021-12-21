#include<stdio.h>
#include<conio.h>
int main()
{
 int n, sum = 0, i=1;
 printf("Enter the nth no. : ");
 scanf("%d", &n);
 do
 {
 if(i%2)
 sum += i;
 i += 1;
 }while(i<=n);
 printf("\nSUM = %d", sum);
 getch();
 }
