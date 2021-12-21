#include<stdio.h>

int div (x)
{
    int i,sum=0,ratio;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
            sum=sum+i;
    }
    ratio=sum/x;
    printf("\nresultant of dividing = %d",ratio);
    return ratio;
}

int main()
{
    int a,b;
    printf ("Enter the  first number");
    scanf("%d",&a);
    printf("Enter the second number ");
    scanf("%d",&b);
    if (div(a)==div(b))
        printf ("It is a Friendly pair");
    else
    printf (" It is not a friendly pair");

}
