#include<stdio.h>
#include<conio.h>
int main()
{
 int choice;
 printf("Choose any one:\n1. 2 * 3 = 6\n2. 2 + 3 = 5\n3. 4 + 6 = 10\n4.4/5 = 0.8\n");
 printf("choose a number from 1-4: ");
 scanf("%d", &choice);
 switch(choice)
 {
 case 1: printf("\n2 * 3 = 6");
 break;
 case 2: printf("\n2 + 3 = 5");
 break;
 case 3: printf("\n4 + 6 = 10");
 break;
 case 4: printf("\n4/5 = 0.8");
 break;
 default: printf("\n INVALID INPUT");
 }
 getch();
 return 0;
}
