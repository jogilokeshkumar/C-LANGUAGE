#include<stdio.h>
#include<conio.h>
int main()
{
 int n, sum = 0;
 printf("Enter the number : ");
 scanf("%d", &n);
 for(int i=1; i<=n/2; i++)
 {
 if(n%i == 0)
 sum += i;
 }
 if(sum > n) printf("\n %d is a ABUNDANT NUMBER",n);
 else printf("\n %d is a NON-ABUNDANT NUMBER",n);
 getch();
 }
