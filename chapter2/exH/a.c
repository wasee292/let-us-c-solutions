#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	int sum = 0;
	sum += num%10;
	num /=10;
	sum += num%10;
	num /=10;
	sum += num%10;
	num /=10;
	sum += num%10;
	num /=10;
	sum += num%10;
	printf("%d",sum);
	return 0;
}