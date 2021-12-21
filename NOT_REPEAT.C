/* The program to accept three numbers as the input and to print the number which is not repeated (at least two numbers will be repeated).
 If all the three numbers are same, then the program must print -1 as the output.*/

#include <stdio.h>
int main()
{
    int n1,n2,n3,a;
     a=-1;
    printf("Enter three numbers :");
    scanf("%d %d %d", &n1, &n2, &n3);
    if(n1==n2 && n1 !=n3)
    {
        printf("%d",n3);
    }
    if(n2==n3 && n2 !=n1)
    {
        printf("%d",n1);
    }
    if(n3==n1 && n3 !=n2)
    {
        printf("%d",n2);
    }
    else
    printf("%d",a);

}




 /*Example 1:
   input
   45 30 45

  output
   30
  Exmaple 2:

  input
  45 45 45

  output
  -1 */
