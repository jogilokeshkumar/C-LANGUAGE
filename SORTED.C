//Sorting

#include<stdio.h>

int main()

{
   int i,j,arr[10],temp;

   printf("Enter the elements of array :\n");

   for(i=0;i<10;i++)

        scanf("%d",&arr[i]);

        for(i=0;i<10;i++)
     {
        for(j=i+1;j<11;j++)
       {
        if(arr[i]>arr[j])
        {
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
        }
       }
    }


    printf("Sorted array\n");

      for(i=0;i<10;i++)

      printf("%d\n",arr[i]);



}
