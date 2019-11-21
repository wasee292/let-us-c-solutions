#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	int d1,d2,d3,d4,d5;
	d1 = num%10; num/= 10;
	d2 = num%10; num/= 10;
	d3 = num%10; num/= 10;
	d4 = num%10; num/= 10;
	d5 = num%10;
	num = d1 * 10000
		+ d2 * 1000
		+ d3 * 100
		+ d4 * 10
		+ d5;
	printf("%d",num);
	return 0;
}