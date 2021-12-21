// Create an array and initialize it with random numbers

#include <stdio.h>

int main()
{
 int arr[10],i,total=0,avg;

     printf("Enter the elements of array :\n");
     for(i=0; i <9; i ++)
     {
        scanf("%d\n",&arr[i]);
        total+=arr[i];
     }
        avg=total/i;

        printf("Numbers greater than avg :\n");
        for(i=0; i <9; i ++)
        {
          if(arr[i]>avg)
        printf("%d\n",arr[i]);
        }

 }

