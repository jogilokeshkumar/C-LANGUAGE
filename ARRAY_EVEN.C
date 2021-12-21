//Program to print even numbers in an array

#include<stdio.h>

int main()
{
     int marks[10],i;

     printf("Enter the elements in array :\n");
     for(i=0;i<9;i++)
     {
     scanf("%d\n",&marks[i]);
     }
     printf("Even numbers in the array are :\n");
     for(i=0;i<9;i++)
     {
     if(marks[i]%2==0)
        printf("%d\n",marks[i]);
     }

}
