#include<stdio.h>

int main()
{
	float l,b,r;
	scanf("%f %f %f",&l,&b,&r);
	printf("Area of the rectangle is %f\n", l * b);
	printf("Perimeter of the rectangle is %f\n", 2 * (l + b));
	printf("Area of the circle is %f\n", 3.14 * r * r);
	printf("Area of the rectangle is %f\n", 2 * 3.14 * r);
	return 0;
}