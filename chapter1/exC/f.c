#include<stdio.h>

int main(){
	int C,D;
	scanf("%d %d",&C, &D);
	printf("Inital values of C and D are %d and %d respectively.\n", C, D);
	// approach 1 : temp variable
	int temp;
	temp = C;
	C = D;
	D = temp;
	//

	/* approach 2 : addition or multiplication method
	int f;
	f = C + D;
	C = f - C;
	D = f - D;
	*/

	/* approach 3 : XOR operator
	C = C ^ D;
	D = C ^ D;
	C = C ^ D;
	*/

	printf("Final values of C and D are %d and %d respectively.\n", C, D);
	return 0;
}