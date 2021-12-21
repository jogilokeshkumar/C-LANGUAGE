// Program to print marks until -1

#include<stdio.h>

int main()

{
    int marks,total=0,avg,count=0;

    while(1)
    {
      printf("Enter marks  :");
      scanf("%d",&marks);

      if(marks==-1)
      break;
      else
        count++;
      total+=marks;

      avg=total/count;
    }

    printf("The average of marks is %d",avg);
}
