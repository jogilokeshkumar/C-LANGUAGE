// Program to print student marks of five subjects
#include<stdio.h>
struct marks

{
    int Id_no;
    char sname[20];
    int marks;
};

main()
{
   struct marks marks[5];
   int i,j;
   int total,avg;

   for(i=0;i<5;i++)
   {
   printf("Enter student Id_no :");
   scanf("%d",&marks[i].Id_no);

   printf("Enter student name :\n");
   scanf("%s",&marks[i].sname);

   for(j=0;j<5;j++)
   printf("Enter marks :");
   scanf("%d",&marks[j].marks);

   fflush(stdin);

   }
   total=0;
   for(i=0;i<5;i++)
   {
   total+=marks[i].marks;
   }
   avg=total/5;

   printf("total of each student is %d/n",total);
   printf("Average of each student is %d",avg);

}
