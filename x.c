#include <stdio.h>

int main()
{
    int a,b,c;
    printf("Enter any three inputs such that at least two are same");
    scanf("%d%d%d",&a,&b,&c);

    if(a==b&&b!=c)
    {
        printf("\n %d,%d",a,c);
    }
     if(b==c&&c!=a)
    {
        printf("\n %d,%d",a,c);
    }
     if(a==c&&c!=b)
    {
        printf("\n %d,%d",b,c);
    }
     if(a==b&&b==c)
     printf("-1");
    }

