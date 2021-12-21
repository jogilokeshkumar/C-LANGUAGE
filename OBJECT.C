// Program to calculate the area of object

#include<stdio.h>

int main()

{
     int num,object,length,breadth,radius,side,area;
     printf("Enter a number");
     scanf("%d",&num);

     if(num==1)
     {
             printf("circle\n");
             printf("Enter radius");
             scanf("%d",&radius);
             area=3.14*radius*radius;
             printf("area of circle is :%d",area);
     }
     else
            if(num==2)
            {
            printf("square\n");
            printf("Enter side");
            scanf("%d",&side);
            area=side*side;
            printf("area of square is :%d",area);
            }
           else
      {

           printf("rectangle\n");
           printf("Enter length and breadth");
           scanf("%d%d",&length,&breadth);
           area=length*breadth;
           printf("area of rectangle is :%d",area);
      }
}
