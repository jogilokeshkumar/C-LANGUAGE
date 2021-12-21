#include<stdio.h>

int divisor (int y)
{
    int i,sum=0;
    for(i=1 ; i<=y/2 ; i++)
    {
        if(y%i==0)
        {
             sum+=i;
        }
    }
     printf("sum=%d",sum);
     return 0;
}

int main()
{
    int N;
    printf("Enter the number : ");
    scanf("%d",&N);
    divisor(N);
}
