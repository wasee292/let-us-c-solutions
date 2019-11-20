#include <stdio.h>

int main(){
	//Dimension of A0
	float l = 1189.0, b = 841.0, temp;
	printf("Dimensions of A0 are %f mm x %f mm\n", l, b);
	temp = b; b = l / 2; l = temp;
	printf("Dimensions of A1 are %f mm x %f mm\n", l, b);
	temp = b; b = l / 2; l = temp;
	printf("Dimensions of A2 are %f mm x %f mm\n", l, b);
	temp = b; b = l / 2; l = temp;
	printf("Dimensions of A3 are %f mm x %f mm\n", l, b);
	temp = b; b = l / 2; l = temp;
	printf("Dimensions of A4 are %f mm x %f mm\n", l, b);
	temp = b; b = l / 2; l = temp;
	printf("Dimensions of A5 are %f mm x %f mm\n", l, b);
	temp = b; b = l / 2; l = temp;
	printf("Dimensions of A6 are %f mm x %f mm\n", l, b);
	temp = b; b = l / 2; l = temp;
	printf("Dimensions of A7 are %f mm x %f mm\n", l, b);
	temp = b; b = l / 2; l = temp;
	printf("Dimensions of A8 are %f mm x %f mm\n", l, b);
	
	return 0;
}