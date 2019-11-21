#include<math.h>
#include<stdio.h>
#define PI 3.141592

int main()
{
	float l1,g1,l2,g2,d;
	scanf("%f %f %f %f",&l1,&g1,&l2,&g2);
	d = 3963 * acos((sin(l1*PI/180)*sin(l2*PI/180)) 
		+ (cos(l1*PI/180)*cos(l2*PI/180)*cos((g2-g1)*PI/180)));
	printf("%f",d);
	return 0;
}