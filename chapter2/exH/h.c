#include<math.h>
#include<stdio.h>
#define PI 3.141592

int main()
{
	float deg;
	scanf("%f",&deg);
	deg *= PI;
	deg /= 180;
	printf("%f",(sin(deg))*(sin(deg)) + (cos(deg))*(cos(deg)));
	return 0;
}