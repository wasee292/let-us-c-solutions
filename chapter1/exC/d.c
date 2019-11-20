#include<stdio.h>

int main(){
	float farhenheit;
	scanf("%f\n", &farhenheit);
	printf("%f\n", ( farhenheit - 32) * 5/9 );
	return 0;
}