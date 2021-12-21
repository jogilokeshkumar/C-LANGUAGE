// Searching an array

#include<stdio.h>

int main()
{
 int arr[10],i,sn;

 printf("Enter the elements :\n");
 for(i=0;i<10;i++)
 {
    scanf("%d",&arr[i]);
 }
  printf("Enter a search number :");
  scanf("%d",&sn);

  for(i=0;i<10;i++)
  {
    if(arr[i]==sn)
    {
    printf("%d",arr[i]);
    break;
    }
  }

}
