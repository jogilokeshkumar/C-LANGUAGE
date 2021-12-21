// Display how many times a number is occuring

#include<stdio.h>

int main()
{
 int arr[10],i,count=0;

 printf("Enter the elements :\n");
 for(i=0;i<10;i++)
   {
    scanf("%d",&arr[i]);
   }
    //for(i=0;i<10;i++)

     if(arr[i]==arr[i])
     {
     count++;
     printf("%d is count",count);
     }


}
