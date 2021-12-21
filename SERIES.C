#include <stdio.h>

int series(float x,int n)
{
    float sum,y,z;
	sum =1; y = 1;
	for (int i=1;i<n;i++)
	{
	  z = (2*i)*(2*i-1);
	  y = -y*x*x/z;
	  sum =sum+ y;
	}
	printf("\nthe sum = %f\nNumber of terms = %d\nvalue of x = %f\n",sum,n,x);
}

int main()
{
	float a;
	int b;
	printf("Input  Value of x :");
	scanf("%f",&a);
	printf("Number of terms : ");
	scanf("%d",&b);
	series(a,b);
}
