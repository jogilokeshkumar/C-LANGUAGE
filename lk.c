//COUNT NUMBERS THAT CONTAIN ZERO

#include<stdio.h>
int has0(int x)
{

    while (x)
    {
         if (x % 10 == 0)
          return 1;

        x /= 10;
    }

    return 0;
}


int getCount(int n)
{
     int count = 0;

            for (int i=1; i<=n; i++)
            count += has0(i);
    return count;
}


int main()
{
    int n ,y;
    printf("Enter a number:");
    scanf("%d",&n);
    printf("Count of numbers having zeros from 1 to %d", n );
    y=getCount(n);
    printf("\nZeros are:");
    printf("%d",y);
}
