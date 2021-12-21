#include<stdio.h>
#include<conio.h>
int main()
{
 int n1, n2, i=1, flag = 0;
 printf("Enter N1. : ");
 scanf("%d", &n1);
 printf("Enter N2. : ");
 scanf("%d", &n2);
 while(i<=n1/2 && i<=n2/2)
 {
 if(i!=n1 && i!=n2)
 {
 if(i == 1)
 {
 flag = 0;
 goto label;
 }
 if(n1%i == 0 && n2%i == 0)  flag = 1;
 }
 label:
 i += 1;
 }
 if(!flag) printf("\n1");
 else printf("\n0");
 getch();
}
