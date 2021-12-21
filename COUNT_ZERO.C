#include<stdio.h>
int countZero(int temp)
{
    int cnt = 0;
    while (temp)
    {
    if (temp % 10 == 0)
            cnt++;

        temp /= 10;
    }
   return cnt;
}

void countZerostillN(int N)
{
int finalCount = 1;
for (int i = 2; i <= N; i++)
{finalCount += countZero(i);
    }
     printf("%d", finalCount);
}
int main()
{ int N = 20;


    countZerostillN(N);
}
