// To display table progrsm by taking length of table

#include<stdio.h>

int main()

{
   int i,num,n;
   printf("Enter a number  :");
   scanf("%d",&num);
   printf("Enter a num  :");
   scanf("%d",&n);

   for(i=1;i<=n;i++)

   printf("%d * %d =%d \n",num,i,num*i);
}
