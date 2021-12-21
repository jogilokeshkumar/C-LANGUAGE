#include<stdio.h>

int div (int x)
{
    int i,sum=0;
    for(i=1 ; i<=x/2 ; i++)
    {
        if(x%i==0)
             sum+=i;
    }

    return sum;
}
int main()
{
    int N1,N2;
    printf("Enter 1st number :");
    scanf("%d",&N1);
    printf("Enter 2nd number :");
    scanf("%d",&N2);

    if (div(N1)==N2 && div(N2)==N1)
        printf ("The given numbers are amicable numbers");
    else
    printf("The given numbers are not amicable numbers");
}
