#include <stdio.h>
void troca1(int x,int y);
void troca2(int x,int y);
int soma (int x, int y);
int main()
{
	int a=11, b=7;
	troca1(a,b);
	printf("Hello World a=%d, b=%d",a,b,soma(a,b));
	return 0;
}
void troca1(int x,int y) { // passagem de argumentos por vaor 
	int z=0;
	z=x;
	x=y;
	y=z;
	printf("z=%d,x=%d,y=%d\n" ,z,x,y);
}
int soma (int x,int y){
    int z=0;
    z=x+y;
    return z;
}