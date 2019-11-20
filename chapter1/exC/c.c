#include<stdio.h>

int main(){
	/*  Let the five subjects be
		English, Maths, Science,
		Social and Arts
	*/
	float eng, maths, sci, social, arts;
	scanf("%f\n",&eng);
	scanf("%f\n",&maths);
	scanf("%f\n",&sci);
	scanf("%f\n",&social);
	scanf("%f\n",&arts);

	float aggregate = eng + maths + sci + social + arts;
	float percentage = aggregate/5;

	printf("Aggregate marks secured are %f\n", aggregate);
	printf("Percentage of marks secured are %f\n", percentage);
	return 0;
}