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
	d1 = (d1+1)%10;
	d2 = (d2+1)%10;
	d3 = (d3+1)%10;
	d4 = (d4+1)%10;
	d5 = (d5+1)%10;
	printf("%d%d%d%d%d",d5,d4,d3,d2,d1);
	return 0;
}