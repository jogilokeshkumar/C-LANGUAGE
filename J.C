#include<stdio.h>
int main()
{
int n=5,i,j,k,count=0,flag;
int arr[5],ans[5];
printf("Enter the array elements\n");
for(i=0;i<5;i++)
{
scanf("%d",&arr[i]);
ans[i]=0;
}
//Acquiring primes
for(i=0;i<5;i++)
{
flag=0;
for(j=2;j<=(arr[i]/2);j++)
{
if(arr[i]%j==0)
{
flag=1;
break;
}
}
if(flag==0)
{
printf("%d is prime\n",arr[i]);
ans[count]=arr[i];
count++;
}
}
//Removing Duplicates
for(i = 0; i < 5; i++)
{
for(j = i + 1; j < 5; j++)
{
if(ans[i] == ans[j])
{
for(k = j; k < 5; k++)
{
ans[k] = ans[k + 1];
}
n--;}

}
}
printf("The Primes are:\n");
for(i=0;ans[i]!=0;i++)
{
printf("%d\n",ans[i]);
}
printf("No of distinct primes is %d\n",i);
return 0;
}
