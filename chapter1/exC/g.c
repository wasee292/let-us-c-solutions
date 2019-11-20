#include<stdio.h>

int main(){
	/*
	tsp = Total selling price of 15 items
	tp = Total profit
	*/
	float tsp, tp;
	scanf("%f %f", &tsp, &tp);
	printf("Cost price of 1 item is %f\n", (tsp - tp) / 15);
	return 0;
}