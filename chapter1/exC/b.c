#include<stdio.h>

int main(){
	int km;
	printf("Enter the distance in km\n");
	scanf("%d",&km);
	float m,ft,inch,cm;
	m = km * 1000.0;
	cm = km * 1000.0 * 100.0;
	ft = km * 3280.84;
	inch = km * 39370.1;
	printf("The distance in meters is %f m.\n",m);
	printf("The distance in feet is %f ft.\n",ft);
	printf("The distance in inches is %f inch.\n",inch);
	printf("The distance in centimeters is %f cm.\n",cm);
	return 0;
}