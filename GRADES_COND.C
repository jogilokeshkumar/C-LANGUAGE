// Program to display grades based on conditions

#include<stdio.h>

int main()

{
    int a,b;
    printf("Enter two numbers  :");
    scanf("%d%d",&a,&b);

    if(a%2==0 && b%2==0)
       printf("Grade A");

    else

        if(a%2!=0 && b%2!=0)
        printf("Grade B");

        else

            if(a%2==0 || b%2!=0)
            printf("Grade C");

            else
            printf("Grade D");
}
