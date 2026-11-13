#include<stdio.h>
int main() {
	int* x1;
	int x2=300;
	x1=&x2;
	printf("Hello world,%p,%d,%p,%d",&x2,x2,x1, *x1);
	printf("\nx2=%d",x2);
	*x1=400;
	printf("\nx2=%d",x2);
	printf("\ndesref(x1)=%d",*x1);
	x2=500;
	printf("\ndesref(x1)=%d",*x1);
	return 0;
}