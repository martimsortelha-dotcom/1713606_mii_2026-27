#include <stdio.h>
void troca1(int x,int y); // passagem de argumentos por valor
void troca2(int* x,int* y); // passagem argumentos por referencia
int main()
{
	int a=2, b=3;
	troca1(a,b);
	printf("Hello World1 a=%d, b=%d\n",a,b);
	troca2(&a,&b);
	printf("Hello World2 a=%d, b=%d",a,b);
	return 0;
}
void troca1(int x,int y) {
	int z=0;
	z=x;
	x=y;
	y=z;
}
void troca2(int* x,int* y) {
	int z=0;
	z=*x;
	*x=*y;
	*y=z;
}
