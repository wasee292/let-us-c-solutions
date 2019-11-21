#include<stdio.h>

int main()
{
	int N;
	scanf("%d",&N);
	int notes = 0;
	notes += N/100; N %= 100;
	notes += N/50; N %= 50;
	notes += N/20; N %= 20;
	notes += N/10; N %= 10;
	notes += N/5; N %= 5;
	notes += N/2; N %= 2;
	notes += N;
	printf("%d",notes);
	return 0;
}