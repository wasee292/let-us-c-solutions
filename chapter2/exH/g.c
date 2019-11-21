#include<math.h>
#include<stdio.h>
#define PI 3.141592

int main()
{
	float x,y;
	scanf("%f %f",&x,&y);
	printf("(%f, %f)", sqrt((x*x)+(y*y)), atan(y/x)*180/PI);
	return 0;
}