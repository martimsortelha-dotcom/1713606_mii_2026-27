#include<stdio.h>
int x(int n);
int y(int n);
int z(int n);
int fibonacci(int n);

int main() {
	int m;
	printf("Introduza um indice: ");
	scanf("%d2",&m);
	printf("x(%d)=%d\n",m,x(m));
	printf("y(%d)=%d\n",m,y(m));
	printf("z(%d)=%d",m,z,(m));
	printf("fibonacci(%d)=%d",m,fibonacci(m));
	return 0;
}

int x(int n){
    if (n==1) return 2;
    if (n>1) return 2*x(n-1);
}

int y (int n){
    if (n==1) return 3;
    if (n>1) return y(n-1)+3;
}

int z(int n){
    if (n==1) return 1; 
    if (n>1) return n*z(n-1);
}
int fibonacci(int n){
    if (n==0) return 1;
    if (n==1) return 1; 
    if (n>1) return fibonacci(n-1)+fibonacci(n-2);
}