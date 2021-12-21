// Program to result

#include<stdio.h>

int main()

{
    int m1,m2;
    printf("Enter marks in two subjects  :");
    scanf("%d%d",&m1,&m2);

    if(m1>50||m1+m2>120)
    printf("pass");
    else
    printf("fail");


}
