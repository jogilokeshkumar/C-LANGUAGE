// Program to display largest of three numbers

#include<stdio.h>

int main()

{
    int a,b,c;
    printf("Enter three numbers :");
    scanf("%d%d%d",&a,&b,&c);


    if(a>b && a>c)
    printf("The largest among three numbers is :%d",a);

    else
        if(b>c && b>a)
        printf("The largest among three numbers is :%d",b);

       else
       printf("The largest among three numbers is :%d",c);

}
