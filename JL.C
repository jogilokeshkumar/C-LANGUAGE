#include <stdio.h>

int main()

{

int a[100];

int n, i, j, temp;

printf("Enter the size of array : ");

scanf("%d",&n);

if(n%2==0)

{

//assignment of array elements

for(i=0; i<n; i++)

{

scanf("%d",&a[i]);

}

//Sort first half in increasing order

for(i=0; i<n/2; i++)

{

for(j=0; j<n/2; j++)

{

if(a[i]<a[j])

{

temp = a[i];

a[i] = a[j];

a[j] = temp;

}

}

}

//Sort 2nd half in decreasing order

for(i=n/2; i<n; i++)

{

for(j=n/2; j<n; j++)

{

if(a[i]>a[j])

{

temp = a[i];

a[i] = a[j];

a[j] = temp;

}

}

}

printf("First Half in Ascending order : ");

for(i=0; i<n/2; i++)

{

printf("%d ",a[i]);

}

printf("\nSecond Half in Descending order : ");

for(i=n/2; i<n; i++)

{

printf("%d ",a[i]);

}


//Print the distance

for(i=0; i<n/2 ; i++;n--)

{

temp = ( n-1) - i ;

Printf("%d",temp);

}

else

printf(" number is not even");

return 0;

}
