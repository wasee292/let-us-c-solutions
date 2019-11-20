#include<stdio.h>

int main(){
	int basic;
	float da = 0.4, hra = 0.2, gross;
	printf("Enter basic salary of Ramesh\n");
	scanf("%d",&basic);
	gross = basic * (1 + da + hra);
	printf("Gross salary of Ramesh is %f\n",gross);
	return 0;
}