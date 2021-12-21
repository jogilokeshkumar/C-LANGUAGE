//Program to print avg in an array

#include<stdio.h>

int main()
{
     int marks[10],i,total=0,avg=0;

     printf("Enter the elements in array :\n");
     for(i=0;i<9;i++)
     {
     scanf("%d\n",&marks[i]);
     total+=marks[i];
     }
     avg=total/i;

     printf("Average of array is :%d",avg);

 }
