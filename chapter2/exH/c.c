#include<stdio.h>

int main()
{
	int num;
	scanf("%d",&num);
	printf("%d", num%10 + num/1000);
	return 0;
}